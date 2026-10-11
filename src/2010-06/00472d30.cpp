// from server: 57% by atomic.potato
struct S
{
    void* f(void*, void*, void*);
};

extern "C" void* func_00472c80(void*);
extern "C" void* func_004722e0(void*, void*, void*, void*);

void* S::f(void* a, void* b, void* c)
{
    func_00472c80(0);
    func_004722e0(0, a, b, c);
    return a;
}
