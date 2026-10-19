// from server: 80% by TrollStein
struct S {
};

extern "C" void __cdecl sub_4A0C60(int, float*);
extern "C" void __cdecl sub_4A81C0(float*);

void __cdecl f(int a, int b, int c, int d)
{
    float v[3];
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    sub_4A0C60(b, v);
    sub_4A81C0(v);
}
