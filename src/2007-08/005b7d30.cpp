// from server: 62% by colin
// roc 2007-08 005b7d30  unit: RBX::$03::?$SurfaceDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7d30

extern "C" void* __cdecl sub_573890(void*);
extern "C" void __cdecl sub_5b9630(void*, void*, void*);

struct SurfaceDescriptor
{
    void assign(void* a, void* b, void* c);
};

void SurfaceDescriptor::assign(void* a, void* b, void* c)
{
    void* p = a;
    void* q;
    if (p != 0)
        q = (char*)p - 4;
    else
        q = 0;
    void* r = sub_573890(q);
    sub_5b9630((char*)r + 8, b, c);
}
