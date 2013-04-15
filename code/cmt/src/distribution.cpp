#include "distribution.h"
#include <cmath>

using std::log;

double Distribution::evaluate(const MatrixXd& data) const {
	return -logLikelihood(data).mean() / log(2.) / dim();
}



void Distribution::initialize(const MatrixXd& data) const {
}



bool Distribution::train(const MatrixXd& data) const {
	return true;
}