// from server: 48% by tester
struct Vtable {
    void* pad0;
    void* pad1;
    double (__stdcall *getValue)(void*);
};

struct Inner {
    Vtable* vt;
};

struct S {
    char pad[0x18];
    Inner* inner;
    void getValue(double* out);
};

extern "C" void __stdcall func_005bdf70(double* value, double* out);

void S::getValue(double* out)
{
    double tmp = 0.0;
    double result = inner->vt->getValue(inner);
    func_005bdf70(&result, out);
}
