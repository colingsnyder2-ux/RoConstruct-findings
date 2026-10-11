// from server: 50% by atomic.potato
struct ViewRbxGfx
{
    void* f(void*, void*, void*);
};

extern "C" void* __cdecl GetObject(int);

struct Object
{
    void* Call(void*, void*, void*);
};

void* ViewRbxGfx::f(void* a, void* b, void* c)
{
    void* p = GetObject(0);
    ((Object*)p)->Call(c, b, a);
    return a;
}
