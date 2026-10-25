// from server: 100% by king_originala
// roc 2008-06 0040f510  unit: VCBrowserViewExternal::?$CComObject  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f510
//
// 0040f510  56                   push esi
// 0040f511  8bf1                 mov esi, ecx
// 0040f513  57                   push edi
// 0040f514  c70638d68000         mov dword ptr [esi], 0x80d638
// 0040f51a  c7460420d68000       mov dword ptr [esi + 4], 0x80d620
// 0040f521  8d7e08               lea edi, [esi + 8]
// 0040f524  c707fcd58000         mov dword ptr [edi], 0x80d5fc
// 0040f52a  c74614d4d58000       mov dword ptr [esi + 0x14], 0x80d5d4
// 0040f531  c74618010000c0       mov dword ptr [esi + 0x18], 0xc0000001
// 0040f538  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0040f53e  8b01                 mov eax, dword ptr [ecx]
// 0040f540  8b5008               mov edx, dword ptr [eax + 8]
// 0040f543  ffd2                 call edx
// 0040f545  8bcf                 mov ecx, edi
// 0040f547  e844f4ffff           call 0x40e990
// 0040f54c  f644240c01           test byte ptr [esp + 0xc], 1
// 0040f551  7409                 je 0x40f55c
// 0040f553  56                   push esi
// 0040f554  e821112900           call 0x6a067a
// 0040f559  83c404               add esp, 4
// 0040f55c  5f                   pop edi
// 0040f55d  8bc6                 mov eax, esi
// 0040f55f  5e                   pop esi
// 0040f560  c20400               ret 4

extern int table0[];
extern int table4[];
extern int table8[];
extern int table20[];

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void release() = 0;
};

extern Interface* globalObject;
extern "C" void __cdecl deallocate(void*);

struct Part {
    int* table;
    int reserved[2];
    void destroy();
};

struct S {
    int* table0;
    int* table4;
    Part part;
    int* table20;
    unsigned int state;
    S* destroy(unsigned int flags);
};

S* S::destroy(unsigned int flags)
{
    this->table0 = ::table0;
    this->table4 = ::table4;
    part.table = table8;
    this->table20 = ::table20;
    state = 0xC0000001U;
    globalObject->release();
    part.destroy();
    if (flags & 1)
        deallocate(this);
    return this;
}
