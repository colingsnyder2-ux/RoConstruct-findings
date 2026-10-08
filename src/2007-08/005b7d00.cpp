// from server: 48% by colin
// roc 2007-08 005b7d00  unit: RBX::$00::?$SurfaceDescriptor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7d00

extern "C" void* __cdecl sub_573890(void* p);
extern "C" void __cdecl sub_5b9630(void* self, int a, int b);

struct SurfaceDescriptor
{
    void assign(int a, int b, int c);
};

void SurfaceDescriptor::assign(int a, int b, int c)
{
    int* p = (int*)a;
    int* q;
    if (p)
        q = p - 1;
    else
        q = 0;
    void* r = sub_573890(q);
    sub_5b9630(r, b, c);
}
