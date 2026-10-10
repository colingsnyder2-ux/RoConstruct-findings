// from server: 70% by colin
extern "C" void __cdecl sub_4660D0(float*, float*, float*, float*, int, float);

struct S {
    float f(float*, float*, float*);
};

float S::f(float* a, float* b, float* c) {
    float t = a[1] + b[1];
    sub_4660D0(a, b, c, &t, 6, 0.0f);
    c[1] = 0.0f;
    b[1] = t;
    float v = c[1] * *(double*)0x795b48 - *(double*)0x795c08;
    v = -v;
    if (v > b[1]) {
        return b[1];
    }
    b[1] = v;
    return v;
}
