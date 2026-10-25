// from server: 100% by colin
// roc 2008-06 007ae4b0  unit: RBX::RenderNew::TextureProxy  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ae4b0
//
// 007ae4b0  8b442408             mov eax, dword ptr [esp + 8]
// 007ae4b4  56                   push esi
// 007ae4b5  6a00                 push 0
// 007ae4b7  8bf1                 mov esi, ecx
// 007ae4b9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007ae4bd  50                   push eax
// 007ae4be  51                   push ecx
// 007ae4bf  8bce                 mov ecx, esi
// 007ae4c1  e86a39daff           call 0x551e30
// 007ae4c6  d9ee                 fldz 
// 007ae4c8  d95e60               fstp dword ptr [esi + 0x60]
// 007ae4cb  c706d84b8700         mov dword ptr [esi], 0x874bd8
// 007ae4d1  8bc6                 mov eax, esi
// 007ae4d3  5e                   pop esi
// 007ae4d4  c20800               ret 8

struct Base {
    virtual void f();
    unsigned char padding[92];
    Base(int, int, int);
};

struct S : Base {
    float value;
    virtual void f();
    S(int, int);
};

S::S(int a, int b) : Base(a, b, 0), value(0.0f)
{
}
