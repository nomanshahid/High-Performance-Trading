#include "stdafx.h"

void assembler() {
	float f1[] = { 1.f,2.f,3.f,4.f };
	float f2[] = { 5.f,4.f,3.f,2.f };
	float result[4] = { 0.f };

	_asm {
		movups xmm1, f1;
		movups xmm2, f2;
		mulps xmm1, xmm2;
		movups result, xmm1;
	}

	for (size_t i = 0; i < 4; i++) {
		cout << result[i] << "\t";
	}
	cout << endl;
}

void intrinsics() {
	auto a = _mm_set_ps(1, 2, 3, 4);
	auto b = _mm_set_ps(1, 2, 3, 4);
	auto c = _mm_add_ps(a,b);

	float f = c.m128_f32[0]; // Get first value
}

int main(int argc, char* argv[]) {
	//assembler();
	intrinsics();

	getchar();
	return 0;
}