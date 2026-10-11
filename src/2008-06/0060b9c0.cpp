// from server: 45% by atomic.potato
struct RefPropDescriptor {
    char pad[0x1c];
    void* field1c;
    void operator()(int, int);
};

extern "C" void* __cdecl sub_60b970(void*);

void RefPropDescriptor::operator()(int a, int b)
{
    void* v;
    if (a) {
        v = sub_60b970((void*)a);
    } else {
        v = 0;
    }
    void** p = (void**)field1c;
    void* fn = *(void**)((char*)*p + 0xc);
    typedef void (__thiscall *Fn)(void*, void*, int);
    ((Fn)fn)(field1c, v, b);
}
