// from server: 87% by atomic.potato
struct S {
    int Get(void* out);
};

extern "C" void __stdcall f(void*, void*);

int S::Get(void* out)
{
    f(*(void**)((char*)this + 8), out);
    return (int)out;
}
