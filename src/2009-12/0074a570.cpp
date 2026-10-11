// from server: 32% by atomic.potato
extern "C" void* __cdecl CreateObject(int, int, int, int);

struct Object
{
    void InitializeObject(int, int, int);
};

struct EventDesc
{
    void* f(int, int, int);
};

void Object::InitializeObject(int, int, int)
{
}

void* EventDesc::f(int a, int b, int c)
{
    void* p = CreateObject(0, 0, 0, 0);
    ((Object*)p)->InitializeObject(a, b, c);
    return (void*)a;
}
