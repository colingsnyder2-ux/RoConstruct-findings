// from server: 21% by colin
// roc 2008-06 005441a0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005441a0

extern "C" void* __cdecl sub_401670(unsigned int size, void* p);
extern "C" void* __cdecl sub_550E10(void* p, int n);
extern "C" void* __cdecl sub_545A10(void* p, int a, int b, int c, int d, unsigned char e);

struct S {
    void* f(int a, int b, int c, int d, unsigned char e);
};

void* S::f(int a, int b, int c, int d, unsigned char e)
{
    void* p = sub_550E10((char*)this + 0xc, 1);
    void* q = sub_401670(0x18, p);
    void* r;
    if (q != 0)
        r = sub_545A10(q, a, b, c, d, e);
    else
        r = 0;
    return r;
}
