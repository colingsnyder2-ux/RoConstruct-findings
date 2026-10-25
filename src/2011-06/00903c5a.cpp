// from server: 88% by atomic.potato
// roc 2011-06 00903c5a  unit: CXTIconHandle  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00903c5a
//
// 00903c5a  8bff                 mov edi, edi
// 00903c5c  56                   push esi
// 00903c5d  8bf1                 mov esi, ecx
// 00903c5f  8d4e04               lea ecx, [esi + 4]
// 00903c62  e889f9afff           call 0x4035f0
// 00903c67  33c0                 xor eax, eax
// 00903c69  894620               mov dword ptr [esi + 0x20], eax
// 00903c6c  894624               mov dword ptr [esi + 0x24], eax
// 00903c6f  894628               mov dword ptr [esi + 0x28], eax
// 00903c72  8bc6                 mov eax, esi
// 00903c74  5e                   pop esi
// 00903c75  c3                   ret 

struct SubObject
{
    int storage[6];
    void construct();
};

struct CXTIconHandle
{
    int offset0;
    SubObject subobject;
    int offset1C;
    int field20;
    int field24;
    int field28;
    CXTIconHandle *f();
};

CXTIconHandle *CXTIconHandle::f()
{
    subobject.construct();
    field20 = 0;
    field24 = 0;
    field28 = 0;
    return this;
}
