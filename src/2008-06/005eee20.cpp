// from server: 85% by king_originala
struct S_func_00598de0 {
    char pad0[500];
    int m_x;
    int* f();
};

struct Target {
    void g(int, int);
};

void __stdcall dispatch(char* p, int a, int b)
{
    int* result = reinterpret_cast<S_func_00598de0*>(p ? p - 20 : 0)->f();
    reinterpret_cast<Target*>(reinterpret_cast<char*>(result) + 24)->g(a, b);
}
