// from server: 95% by colin
// roc 2007-08 006692b0  unit: CXTPColorManager  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006692b0
//
// 006692b0  56                   push esi
// 006692b1  8bf1                 mov esi, ecx
// 006692b3  8d4e04               lea ecx, [esi + 4]
// 006692b6  c70684a67c00         mov dword ptr [esi], 0x7ca684
// 006692bc  e8dff1ffff           call 0x6684a0
// 006692c1  8d4e10               lea ecx, [esi + 0x10]
// 006692c4  e8d7f1ffff           call 0x6684a0
// 006692c9  d9059c7e7900         fld dword ptr [0x797e9c]
// 006692cf  8b442408             mov eax, dword ptr [esp + 8]
// 006692d3  d95e1c               fstp dword ptr [esi + 0x1c]
// 006692d6  50                   push eax
// 006692d7  8bce                 mov ecx, esi
// 006692d9  e8e2fbffff           call 0x668ec0
// 006692de  8bc6                 mov eax, esi
// 006692e0  5e                   pop esi
// 006692e1  c20400               ret 4

struct CXTPColorManager {
    void *vtable;
    char pad1[0x0C];
    char field10[0x0C];
    float field1C;

    CXTPColorManager *Construct(int arg);
};

extern "C" void __fastcall sub_6684A0(void *);
extern "C" void __fastcall sub_668EC0(void *, int);

extern float dword_797E9C;

CXTPColorManager *CXTPColorManager::Construct(int arg) {
    this->vtable = (void *)0x7CA684;
    sub_6684A0((char *)this + 4);
    sub_6684A0((char *)this + 0x10);
    this->field1C = dword_797E9C;
    sub_668EC0(this, arg);
    return this;
}
