// from server: 100% by king_originala
// roc 2008-06 00416c30  unit: VCContent::?$CComAggObject  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416c30
//
// 00416c30  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00416c34  85c9                 test ecx, ecx
// 00416c36  7508                 jne 0x416c40
// 00416c38  b803400080           mov eax, 0x80004003
// 00416c3d  c20c00               ret 0xc
// 00416c40  8b442408             mov eax, dword ptr [esp + 8]
// 00416c44  56                   push esi
// 00416c45  33f6                 xor esi, esi
// 00416c47  c70100000000         mov dword ptr [ecx], 0
// 00416c4d  3930                 cmp dword ptr [eax], esi
// 00416c4f  752b                 jne 0x416c7c
// 00416c51  397004               cmp dword ptr [eax + 4], esi
// 00416c54  7526                 jne 0x416c7c
// 00416c56  817808c0000000       cmp dword ptr [eax + 8], 0xc0
// 00416c5d  751d                 jne 0x416c7c
// 00416c5f  81780c00000046       cmp dword ptr [eax + 0xc], 0x46000000
// 00416c66  7514                 jne 0x416c7c
// 00416c68  8b442408             mov eax, dword ptr [esp + 8]
// 00416c6c  8901                 mov dword ptr [ecx], eax
// 00416c6e  8b08                 mov ecx, dword ptr [eax]
// 00416c70  8b5104               mov edx, dword ptr [ecx + 4]
// 00416c73  50                   push eax
// 00416c74  ffd2                 call edx
// 00416c76  8bc6                 mov eax, esi
// 00416c78  5e                   pop esi
// 00416c79  c20c00               ret 0xc
// 00416c7c  51                   push ecx
// 00416c7d  50                   push eax
// 00416c7e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00416c82  68d0ea8000           push 0x80ead0
// 00416c87  83c008               add eax, 8
// 00416c8a  50                   push eax
// 00416c8b  e8f0b5feff           call 0x402280
// 00416c90  8bf0                 mov esi, eax
// 00416c92  5e                   pop esi
// 00416c93  c20c00               ret 0xc

struct Interface
{
    unsigned long (__stdcall **vtable)(Interface *);
};

struct IID
{
    unsigned long words[4];
};

extern const unsigned char interfaceMap[];

extern "C" long __stdcall queryInterface(
    void *, const unsigned char *, const IID *, void **);

long __stdcall internalQueryInterface(
    Interface *object, const IID *iid, void **result)
{
    if (!result)
        return (long)0x80004003UL;

    *result = 0;
    long status = 0;

    if (iid->words[0] == 0 &&
        iid->words[1] == 0 &&
        iid->words[2] == 0x000000C0UL &&
        iid->words[3] == 0x46000000UL)
    {
        *result = object;
        object->vtable[1](object);
    }
    else
    {
        status = queryInterface(
            (char *)object + 8, interfaceMap, iid, result);
    }

    return status;
}
