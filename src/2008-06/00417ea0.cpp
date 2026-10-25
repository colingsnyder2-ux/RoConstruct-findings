// from server: 100% by king_originala
// roc 2008-06 00417ea0  unit: VCLuaFunction::?$CComObject  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417ea0
//
// 00417ea0  56                   push esi
// 00417ea1  8bf1                 mov esi, ecx
// 00417ea3  c70600ec8000         mov dword ptr [esi], 0x80ec00
// 00417ea9  c74604d8eb8000       mov dword ptr [esi + 4], 0x80ebd8
// 00417eb0  c74608010000c0       mov dword ptr [esi + 8], 0xc0000001
// 00417eb7  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00417ebd  8b01                 mov eax, dword ptr [ecx]
// 00417ebf  8b5008               mov edx, dword ptr [eax + 8]
// 00417ec2  ffd2                 call edx
// 00417ec4  8bce                 mov ecx, esi
// 00417ec6  e855f2ffff           call 0x417120
// 00417ecb  f644240801           test byte ptr [esp + 8], 1
// 00417ed0  7409                 je 0x417edb
// 00417ed2  56                   push esi
// 00417ed3  e8a2872800           call 0x6a067a
// 00417ed8  83c404               add esp, 4
// 00417edb  8bc6                 mov eax, esi
// 00417edd  5e                   pop esi
// 00417ede  c20400               ret 4

struct Manager {
    virtual void slot0();
    virtual void slot1();
    virtual void release();
};

extern Manager* manager;
extern void* table0[];
extern void* table1[];
extern "C" void __cdecl freeObject(void*);

struct S {
    void* vptr0;
    void* vptr1;
    unsigned int state;

    void cleanup();
    S* destroy(unsigned int flags);
};

S* S::destroy(unsigned int flags)
{
    vptr0 = table0;
    vptr1 = table1;
    state = 0xC0000001u;
    manager->release();
    cleanup();
    if (flags & 1)
        freeObject(this);
    return this;
}
