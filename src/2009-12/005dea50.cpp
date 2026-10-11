// from server: 58% by atomic.potato
extern "C" void* __cdecl CreateObject();

struct Object
{
    void InitializeObject(void*, void*, void*);
};

struct ViewG3D
{
    void* f(void*, void*, void*);
};

void* ViewG3D::f(void* a, void* b, void* c)
{
    void* p = CreateObject();
    ((Object*)p)->InitializeObject(a, b, c);
    return a;
}
