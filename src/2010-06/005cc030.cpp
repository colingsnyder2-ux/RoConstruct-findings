// from server: 66% by atomic.potato
extern "C" void std_string_assign(void *, const char *);

struct S_func_005cc030 {
    char pad0[0xADC];
    void f();
};

void S_func_005cc030::f()
{
    std_string_assign((char *)this, "[[[progress]]]");
}
