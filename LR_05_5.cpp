#include <cmath> 
#include <iostream>

using namespace std;

static double nextTerm(double a_n_minus_1) {
	return (1.0 / 3.0) * (2 * a_n_minus_1 + (8.0 / (a_n_minus_1 * a_n_minus_1)));
}

static double recursiveConvergence(double a_n, double eps, int& iterations) {
	double a_n_next = nextTerm(a_n);


	if (fabs(a_n_next - a_n) < eps) 
	{
		return a_n_next;
	}

	iterations++;

	return recursiveConvergence(a_n_next, eps, iterations);
}

int main() {
	double a_n = 1.0;

	// - Похибка - //
	const double eps = 0.00001;
	int NumberOfIterations = 0;

	// Call the recursive function
	double result = recursiveConvergence(a_n, eps, NumberOfIterations);

	cout << "The sequence converged to: " << result << " after " << NumberOfIterations << " iterations." << endl;

	return 0;
}
