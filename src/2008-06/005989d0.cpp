// from server: 80% by colin




extern "C" void __cdecl sub_5137F0(float* dst, const float* a, const float* b);

struct S {
    float f0, f4, f8, f0c, f10, f14, f18, f1c, f20, f24, f28, f2c;
};

void __cdecl transform(const S* a, const S* b, S* out)
{
    sub_5137F0((float*)out, (const float*)a, (const float*)b);

    out->f24 = a->f8 * b->f2c + a->f4 * b->f28 + b->f24 * a->f0 + a->f24;
    out->f28 = a->f14 * b->f2c + a->f0c * b->f24 + a->f10 * b->f28 + a->f28;
    out->f2c = a->f20 * b->f2c + a->f18 * b->f24 + a->f1c * b->f28 + a->f2c;
}
