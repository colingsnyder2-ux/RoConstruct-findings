// from server: 100% by king_originala
// roc 2008-06 00418880  unit: VCLuaFunction::?$CComAggObject  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00418880
//
// 00418880  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00418884  85c9                 test ecx, ecx
// 00418886  7508                 jne 0x418890
// 00418888  b803400080           mov eax, 0x80004003
// 0041888d  c20c00               ret 0xc
// 00418890  8b442408             mov eax, dword ptr [esp + 8]
// 00418894  56                   push esi
// 00418895  33f6                 xor esi, esi
// 00418897  c70100000000         mov dword ptr [ecx], 0
// 0041889d  3930                 cmp dword ptr [eax], esi
// 0041889f  752b                 jne 0x4188cc
// 004188a1  397004               cmp dword ptr [eax + 4], esi
// 004188a4  7526                 jne 0x4188cc
// 004188a6  817808c0000000       cmp dword ptr [eax + 8], 0xc0
// 004188ad  751d                 jne 0x4188cc
// 004188af  81780c00000046       cmp dword ptr [eax + 0xc], 0x46000000
// 004188b6  7514                 jne 0x4188cc
// 004188b8  8b442408             mov eax, dword ptr [esp + 8]
// 004188bc  8901                 mov dword ptr [ecx], eax
// 004188be  8b08                 mov ecx, dword ptr [eax]
// 004188c0  8b5104               mov edx, dword ptr [ecx + 4]
// 004188c3  50                   push eax
// 004188c4  ffd2                 call edx
// 004188c6  8bc6                 mov eax, esi
// 004188c8  5e                   pop esi
// 004188c9  c20c00               ret 0xc
// 004188cc  51                   push ecx
// 004188cd  50                   push eax
// 004188ce  8b442410             mov eax, dword ptr [esp + 0x10]
// 004188d2  6814ec8000           push 0x80ec14
// 004188d7  83c008               add eax, 8
// 004188da  50                   push eax
// 004188db  e8a099feff           call 0x402280
// 004188e0  8bf0                 mov esi, eax
// 004188e2  5e                   pop esi
// 004188e3  c20c00               ret 0xc

struct IID
{
    unsigned long words[4];
};

struct Interface;

struct InterfaceTable
{
    long (__stdcall *query)(Interface*, const IID&, void**);
    unsigned long (__stdcall *addRef)(Interface*);
};

struct Interface
{
    InterfaceTable* table;
};

extern unsigned char interfaceMap[];
extern "C" long __stdcall internalQueryInterface(
    void*, const void*, const IID&, void**);

long __stdcall queryInterface(Interface* object, const IID& iid, void** result)
{
    if (!result)
        return (long)0x80004003UL;

    *result = 0;
    long status = 0;

    if (iid.words[0] == 0 &&
        iid.words[1] == 0 &&
        iid.words[2] == 0x000000c0UL &&
        iid.words[3] == 0x46000000UL)
    {
        *result = object;
        object->table->addRef(object);
    }
    else
    {
        status = internalQueryInterface(
            (unsigned char*)object + 8, interfaceMap, iid, result);
    }

    return status;
}
