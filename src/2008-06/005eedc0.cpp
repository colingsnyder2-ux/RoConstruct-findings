// from server: 85% by king_originala
struct S_func_00598de0 {
    char pad0[500];
    int m_x;
    int* f();
};

struct S_func_005f17a0 {
    void f(int, int);
};

void __stdcall func_005eedc0(void* p, int a, int b)
{
    S_func_00598de0* object =
        p ? reinterpret_cast<S_func_00598de0*>(static_cast<char*>(p) - 20) : 0;

    int* result = object->f();
    reinterpret_cast<S_func_005f17a0*>(result + 4)->f(a, b);
}
