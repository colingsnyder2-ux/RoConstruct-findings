// from server: 87% by atomic.potato
struct CXTColorWnd
{
    void f(double, double);
};

extern "C" void __stdcall call_a(CXTColorWnd *, double);
extern "C" void __stdcall call_b(CXTColorWnd *, double);

void CXTColorWnd::f(double a, double b)
{
    call_a(this, a);
    call_b(this, b);
}
