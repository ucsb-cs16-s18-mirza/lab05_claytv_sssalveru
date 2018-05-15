#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

	struct Box b1;
	
	initBox(&b1,3.22222222,4.2222222,5.222222,6.222222);
	assertEquals("ul=(3,4),w=5,h=6", boxToString(b1,1), "boxToString(b1,1)");
	assertEquals("ul=(3.2,4.2),w=5.2,h=6.2", boxToString(b1,2), "boxToString(b1,2)");
	

			 
	return 0;
}
