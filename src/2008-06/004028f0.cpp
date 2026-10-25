// from server: 100% by king_originala
// roc 2008-06 004028f0  unit: VCWorkspace::?$CComAggObject  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004028f0
//
// 004028f0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004028f4  85c9                 test ecx, ecx
// 004028f6  7508                 jne 0x402900
// 004028f8  b803400080           mov eax, 0x80004003
// 004028fd  c20c00               ret 0xc
// 00402900  8b442408             mov eax, dword ptr [esp + 8]
// 00402904  56                   push esi
// 00402905  33f6                 xor esi, esi
// 00402907  c70100000000         mov dword ptr [ecx], 0
// 0040290d  3930                 cmp dword ptr [eax], esi
// 0040290f  752b                 jne 0x40293c
// 00402911  397004               cmp dword ptr [eax + 4], esi
// 00402914  7526                 jne 0x40293c
// 00402916  817808c0000000       cmp dword ptr [eax + 8], 0xc0
// 0040291d  751d                 jne 0x40293c
// 0040291f  81780c00000046       cmp dword ptr [eax + 0xc], 0x46000000
// 00402926  7514                 jne 0x40293c
// 00402928  8b442408             mov eax, dword ptr [esp + 8]
// 0040292c  8901                 mov dword ptr [ecx], eax
// 0040292e  8b08                 mov ecx, dword ptr [eax]
// 00402930  8b5104               mov edx, dword ptr [ecx + 4]
// 00402933  50                   push eax
// 00402934  ffd2                 call edx
// 00402936  8bc6                 mov eax, esi
// 00402938  5e                   pop esi
// 00402939  c20c00               ret 0xc
// 0040293c  51                   push ecx
// 0040293d  50                   push eax
// 0040293e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00402942  68a8ae8000           push 0x80aea8
// 00402947  83c008               add eax, 8
// 0040294a  50                   push eax
// 0040294b  e830f9ffff           call 0x402280
// 00402950  8bf0                 mov esi, eax
// 00402952  5e                   pop esi
// 00402953  c20c00               ret 0xc

struct IID {
    unsigned long words[4];
};

struct Interface;

struct VTable {
    long (__stdcall *QueryInterface)(Interface *, const IID &, void **);
    unsigned long (__stdcall *AddRef)(Interface *);
};

struct Interface {
    VTable *vtable;
};

extern const unsigned char interfaceMap[];
extern "C" long __stdcall InternalQueryInterface(
    void *, const void *, const IID &, void **);

long __stdcall QueryInterface(Interface *object, const IID &iid, void **output)
{
    if (!output)
        return (long)0x80004003UL;

    *output = 0;
    long result = 0;

    if (iid.words[0] == 0 &&
        iid.words[1] == 0 &&
        iid.words[2] == 0x000000C0UL &&
        iid.words[3] == 0x46000000UL)
    {
        *output = object;
        object->vtable->AddRef(object);
    }
    else
    {
        result = InternalQueryInterface(
            reinterpret_cast<unsigned char *>(object) + 8,
            interfaceMap, iid, output);
    }

    return result;
}
