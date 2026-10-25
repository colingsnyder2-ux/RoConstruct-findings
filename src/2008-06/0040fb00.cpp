// from server: 100% by king_originala
// roc 2008-06 0040fb00  unit: VCBrowserViewExternal::?$CComAggObject  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040fb00
//
// 0040fb00  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040fb04  85c9                 test ecx, ecx
// 0040fb06  7508                 jne 0x40fb10
// 0040fb08  b803400080           mov eax, 0x80004003
// 0040fb0d  c20c00               ret 0xc
// 0040fb10  8b442408             mov eax, dword ptr [esp + 8]
// 0040fb14  56                   push esi
// 0040fb15  33f6                 xor esi, esi
// 0040fb17  c70100000000         mov dword ptr [ecx], 0
// 0040fb1d  3930                 cmp dword ptr [eax], esi
// 0040fb1f  752b                 jne 0x40fb4c
// 0040fb21  397004               cmp dword ptr [eax + 4], esi
// 0040fb24  7526                 jne 0x40fb4c
// 0040fb26  817808c0000000       cmp dword ptr [eax + 8], 0xc0
// 0040fb2d  751d                 jne 0x40fb4c
// 0040fb2f  81780c00000046       cmp dword ptr [eax + 0xc], 0x46000000
// 0040fb36  7514                 jne 0x40fb4c
// 0040fb38  8b442408             mov eax, dword ptr [esp + 8]
// 0040fb3c  8901                 mov dword ptr [ecx], eax
// 0040fb3e  8b08                 mov ecx, dword ptr [eax]
// 0040fb40  8b5104               mov edx, dword ptr [ecx + 4]
// 0040fb43  50                   push eax
// 0040fb44  ffd2                 call edx
// 0040fb46  8bc6                 mov eax, esi
// 0040fb48  5e                   pop esi
// 0040fb49  c20c00               ret 0xc
// 0040fb4c  51                   push ecx
// 0040fb4d  50                   push eax
// 0040fb4e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040fb52  684cd68000           push 0x80d64c
// 0040fb57  83c008               add eax, 8
// 0040fb5a  50                   push eax
// 0040fb5b  e82027ffff           call 0x402280
// 0040fb60  8bf0                 mov esi, eax
// 0040fb62  5e                   pop esi
// 0040fb63  c20c00               ret 0xc

struct IID {
    unsigned long words[4];
};

extern unsigned char interfaceMap[];
extern "C" long __stdcall queryInterface(
    void* object, const void* map, const IID& iid, void** result);

struct S {
    virtual long __stdcall QueryInterface(const IID& iid, void** result);
    virtual unsigned long __stdcall AddRef();
};

long __stdcall S::QueryInterface(const IID& iid, void** result)
{
    if (!result)
        return (long)0x80004003UL;

    *result = 0;
    long status = 0;

    if (iid.words[0] == 0 &&
        iid.words[1] == 0 &&
        iid.words[2] == 0x000000C0UL &&
        iid.words[3] == 0x46000000UL)
    {
        *result = this;
        AddRef();
    }
    else
    {
        status = queryInterface(
            (unsigned char*)this + 8, interfaceMap, iid, result);
    }

    return status;
}
