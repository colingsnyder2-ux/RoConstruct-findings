// from server: 100% by king_originala
// roc 2008-06 00408770  unit: VCApp::?$CComAggObject  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408770
//
// 00408770  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00408774  85c9                 test ecx, ecx
// 00408776  7508                 jne 0x408780
// 00408778  b803400080           mov eax, 0x80004003
// 0040877d  c20c00               ret 0xc
// 00408780  8b442408             mov eax, dword ptr [esp + 8]
// 00408784  56                   push esi
// 00408785  33f6                 xor esi, esi
// 00408787  c70100000000         mov dword ptr [ecx], 0
// 0040878d  3930                 cmp dword ptr [eax], esi
// 0040878f  752b                 jne 0x4087bc
// 00408791  397004               cmp dword ptr [eax + 4], esi
// 00408794  7526                 jne 0x4087bc
// 00408796  817808c0000000       cmp dword ptr [eax + 8], 0xc0
// 0040879d  751d                 jne 0x4087bc
// 0040879f  81780c00000046       cmp dword ptr [eax + 0xc], 0x46000000
// 004087a6  7514                 jne 0x4087bc
// 004087a8  8b442408             mov eax, dword ptr [esp + 8]
// 004087ac  8901                 mov dword ptr [ecx], eax
// 004087ae  8b08                 mov ecx, dword ptr [eax]
// 004087b0  8b5104               mov edx, dword ptr [ecx + 4]
// 004087b3  50                   push eax
// 004087b4  ffd2                 call edx
// 004087b6  8bc6                 mov eax, esi
// 004087b8  5e                   pop esi
// 004087b9  c20c00               ret 0xc
// 004087bc  51                   push ecx
// 004087bd  50                   push eax
// 004087be  8b442410             mov eax, dword ptr [esp + 0x10]
// 004087c2  6820b48000           push 0x80b420
// 004087c7  83c008               add eax, 8
// 004087ca  50                   push eax
// 004087cb  e8b09affff           call 0x402280
// 004087d0  8bf0                 mov esi, eax
// 004087d2  5e                   pop esi
// 004087d3  c20c00               ret 0xc

typedef unsigned long (__stdcall *AddRefFunction)(void *);

struct InterfaceId
{
    unsigned long words[4];
};

extern const char queryMap[];

extern "C" long __stdcall sub_402280(
    void *, const void *, const InterfaceId *, void **);

long __stdcall sub_408770(void *object, const InterfaceId *iid, void **result)
{
    if (!result)
        return (long)0x80004003;

    *result = 0;
    long status = 0;

    if (iid->words[0] == 0 &&
        iid->words[1] == 0 &&
        iid->words[2] == 0xC0 &&
        iid->words[3] == 0x46000000)
    {
        *result = object;
        (*(AddRefFunction **)object)[1](object);
    }
    else
    {
        status = sub_402280(
            (char *)object + 8, queryMap, iid, result);
    }

    return status;
}
