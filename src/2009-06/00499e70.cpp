// from server: 78% by atomic.potato
struct S {
    float f0;
    float f4;
    float f8;
    float fC;
    float f10;
    float f14;
    int f18;
    int f1C;
};

void __cdecl set(S* dst, const float* src) {
    dst->f1C = 0;
    dst->f18 = 1;
    dst->f0 = src[0];
    dst->f4 = src[1];
    dst->f8 = src[2];
    dst->fC = src[3];
    dst->f10 = src[4];
    dst->f14 = src[5];
}
