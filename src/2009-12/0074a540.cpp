// from server: 26% by atomic.potato
extern "C" void* __cdecl AllocateDescriptor(int);

struct EventObject
{
    void* __thiscall CreateEvent(int, int, int);
};

struct EventDesc
{
    void* f(int, int, int);
};

void* EventDesc::f(int a, int b, int c)
{
    void* p = AllocateDescriptor(0);
    return ((EventObject*)p)->CreateEvent(a, b, c);
}
