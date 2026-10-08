// from server: 56% by colin
// roc 2007-08 00415d50  unit: VCContent::?$CComContainedObject  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00415d50
//
// 00415d50  57                   push edi
// 00415d51  8b7c2408             mov edi, dword ptr [esp + 8]
// 00415d55  85ff                 test edi, edi
// 00415d57  742a                 je 0x415d83
// 00415d59  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00415d5d  85c0                 test eax, eax
// 00415d5f  7422                 je 0x415d83
// 00415d61  56                   push esi
// 00415d62  50                   push eax
// 00415d63  ff1528ec7700         call dword ptr [0x77ec28]
// 00415d69  0fb7f0               movzx esi, ax
// 00415d6c  8d44240c             lea eax, [esp + 0xc]
// 00415d70  50                   push eax
// 00415d71  8d4f20               lea ecx, [edi + 0x20]
// 00415d74  89742410             mov dword ptr [esp + 0x10], esi
// 00415d78  e823e8ffff           call 0x4145a0
// 00415d7d  0fb7c6               movzx eax, si
// 00415d80  5e                   pop esi
// 00415d81  5f                   pop edi
// 00415d82  c3                   ret 
// 00415d83  33c0                 xor eax, eax
// 00415d85  5f                   pop edi
// 00415d86  c3                   ret 

extern "C" unsigned short __stdcall RegisterClassExA(const void*);
extern void func_004145a0(void*, unsigned short*);

struct VCContent_CComContainedObject {
    char pad[0x20];
    int field20;
    static unsigned short method(const void* p1, const void* p2);
};

unsigned short VCContent_CComContainedObject::method(const void* p1, const void* p2)
{
    if (p1 == 0)
        return 0;
    if (p2 == 0)
        return 0;
    unsigned short r = RegisterClassExA(p2);
    unsigned short tmp = r;
    func_004145a0((char*)p1 + 0x20, &tmp);
    return r;
}
