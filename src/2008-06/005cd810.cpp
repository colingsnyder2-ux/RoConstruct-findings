// from server: 34% by atomic.potato
extern "C" void* __cdecl sub_005599D0(void*);

struct VInstanceRefPropDescriptor
{
    char pad[0x1c];
    void* field_1c;

    void method(int, void*);
};

void VInstanceRefPropDescriptor::method(int, void* arg)
{
    void* v;
    if (arg != 0)
        v = sub_005599D0(arg);
    else
        v = 0;

    void* p = field_1c;
    void* f = *(void**)p;
    void* fn = *(void**)((char*)f + 0xc);
    ((void (__thiscall*)(void*, void*, void*))fn)(p, v, arg);
}
