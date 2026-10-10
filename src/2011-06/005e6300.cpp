// from server: 90% by atomic.potato
struct S;

float __fastcall sub_74b1d0(S *);
float __fastcall sub_74b3b0(S *);

struct S {
    float f();
};

float S::f()
{
    float a = sub_74b1d0(this);
    return a + sub_74b3b0(this);
}
