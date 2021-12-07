#include "dod.h"
#include "var.h"

using namespace nsVar;

void nsDod::dod() {
	a *= -(n * (x - 1.0)) / (n + 1.0);
};