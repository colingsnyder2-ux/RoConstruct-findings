// from server: 85% by king_originala
struct S_func_00598de0
{
    char pad0[500];
    int m_x;
    int* f();
};

struct Receiver
{
    void apply(int, int);
};

void __stdcall sub_5eeef0(void* p, int a, int b)
{
    S_func_00598de0* object = p
        ? reinterpret_cast<S_func_00598de0*>(static_cast<char*>(p) - 20)
        : 0;

    int* result = object->f();
    reinterpret_cast<Receiver*>(reinterpret_cast<char*>(result) + 40)->apply(a, b);
}
