// from server: 85% by king_originala
struct S_func_00598de0 {
    char pad0[500];
    int m_x;
    int* f();
};

struct Sink {
    void g(int a, int b);
};

void __stdcall target(char* p, int a, int b)
{
    S_func_00598de0* object =
        p ? reinterpret_cast<S_func_00598de0*>(p - 20) : 0;
    int* result = object->f();
    reinterpret_cast<Sink*>(result + 2)->g(a, b);
}
