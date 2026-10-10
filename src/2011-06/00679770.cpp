// from server: 60% by atomic.potato
struct SpecialShape
{
    void __stdcall f(int a, int b, int c);
};

extern "C" void sub_006796c0(SpecialShape*, int, int, int);

void __stdcall SpecialShape::f(int a, int b, int c)
{
    sub_006796c0(this, c, b, a);
}
