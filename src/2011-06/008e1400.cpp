// from server: 69% by atomic.potato
extern "C" void __stdcall imported_call(void*, void*, void*);

struct S
{
    void* f(void*);
};

void* S::f(void* arg)
{
    void* result = 0;
    imported_call((char*)this + 0x20, &result, arg);
    return arg;
}
