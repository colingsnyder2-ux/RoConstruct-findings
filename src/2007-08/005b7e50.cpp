// from server: 62% by colin
// roc 2007-08 005b7e50  unit: seg_005b0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7e50

extern "C" void* __cdecl sub_00573890(void*);
extern "C" void __cdecl sub_005b9630(void*, void*, void*);

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
    void* r = sub_00573890(q);
    sub_005b9630((char*)r + 0x28, b, c);
}
