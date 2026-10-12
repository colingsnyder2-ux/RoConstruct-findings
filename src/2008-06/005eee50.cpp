// from server: 85% by king_originala
struct S_func_00598de0 {
    char pad0[500];
    int m_x;
    int* f();
};

struct Target {
    void set(int a, int b);
};

void __stdcall function(char* p, int a, int b)
{
    S_func_00598de0* object =
        p ? reinterpret_cast<S_func_00598de0*>(p - 20) : 0;
    int* result = object->f();
    reinterpret_cast<Target*>(reinterpret_cast<char*>(result) + 32)->set(a, b);
}
