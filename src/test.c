#include "string.h"

int main() {
	
	for (int i = 0; i < 1000000; i++) {
		char string1[] = "So, you want to get good at spy? Here is a comprehensive guide on gittin\' gud, as the kiddos say. First of all, you need to master face stabs. You do this by typing \'cl_interp five million\' into the console. This will have the side effect of everyone hating you, but it\'s all worth it for that sweet sweet green \'CRITICAL HIT!!!\' above your opponents\' heads when you click on their face. Next, you need to get good. This does mean that you have to spend a couple of hundred hours on spy, but it's worth it for the constant angry people in chat accusing you of facestabs. They are right, but who cares.";
		char string2[] = " gfhio vordpz gy lrd zb uirp vgyi rg yl nubotu olghurilehshogbures hvidx; bvhfdx hubrdol hgiglrbsvhfidk vbnufidon vhufdlxbng5750j ap;v f;alvfnlhadlo";
		squeeze(string1, string2);
	}

	return 0;
}
