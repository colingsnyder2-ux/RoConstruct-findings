// from server: 66% by atomic.potato
extern "C" void __stdcall G1_func_009ecec4(void*, void*);

struct S
{
    void* f(void*);
};

void* S::f(void* arg)
{
    char* p = (char*)this + 0x7c;
    G1_func_009ecec4(arg, p);
    return arg;
}
