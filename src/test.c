#include "string.h"

int main() {
	
	for (int i = 0; i < 1000000; i++) {
		char string1[] = "Lorem ipsum dolor sit amet, consectetur "
			"adipiscing elit. Proin dignissim enim quis justo "
			"posuere tincidunt eu eget dolor. Vivamus a tortor et "
			"orci pellentesque convallis ac nec ipsum. Proin "
			"interdum mattis purus, ac iaculis tortor dapibus id. "
			"Nam et sem rutrum, luctus mauris eu, lobortis orci. "
			"Nulla ultrices dignissim maximus. Morbi risus odio, "
			"vulputate sit amet mollis sit amet, condimentum id "
			"metus. Aenean eu ultrices nulla. Praesent nec quam "
			"odio. Vestibulum non neque risus.";
		char string2[] = "V4ysUlCSrBXE0barIE5vtNYhDpNnHPWJlHbJ2Qukp7hy"
			"MTRqsHUBie0vHobEL6KbOOd2lJRMVoJQP5lmyioGqzhNciare9Jio"
			"EbY04nN0GNmIgSWxN6w1tKq72WFhqK4GbfSCj3VRsdfKDUFS3RKCe"
			"nYo6awvwLXVz6ckIMxthU=";
		squeeze(string1, string2);
	}

	return 0;
}
