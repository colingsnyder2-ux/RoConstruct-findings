// from server: 88% by atomic.potato
extern "C" void __stdcall imported_call(void *, const char *);

struct S_func_005e6230
{
    char pad0[2828];
    void f();
};

void S_func_005e6230::f()
{
    imported_call((char *)this + 0xb0c, "[[[progress]]]");
}
