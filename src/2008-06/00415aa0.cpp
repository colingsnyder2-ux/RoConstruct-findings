// from server: 73% by colin
// roc 2008-06 00415aa0  unit: CopyVerb  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415aa0
//
// 00415aa0  56                   push esi
// 00415aa1  57                   push edi
// 00415aa2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00415aa6  8bf1                 mov esi, ecx
// 00415aa8  85ff                 test edi, edi
// 00415aaa  750a                 jne 0x415ab6
// 00415aac  5f                   pop edi
// 00415aad  b803400080           mov eax, 0x80004003
// 00415ab2  5e                   pop esi
// 00415ab3  c20400               ret 4
// 00415ab6  57                   push edi
// 00415ab7  ff151c298000         call dword ptr [0x80291c]
// 00415abd  85c0                 test eax, eax
// 00415abf  7c1a                 jl 0x415adb
// 00415ac1  6a10                 push 0x10
// 00415ac3  56                   push esi
// 00415ac4  6a10                 push 0x10
// 00415ac6  57                   push edi
// 00415ac7  ff15ac288000         call dword ptr [0x8028ac]
// 00415acd  50                   push eax
// 00415ace  e8adbbfeff           call 0x401680
// 00415ad3  83c414               add esp, 0x14
// 00415ad6  33c0                 xor eax, eax
// 00415ad8  668906               mov word ptr [esi], ax
// 00415adb  5f                   pop edi
// 00415adc  5e                   pop esi
// 00415add  c20400               ret 4

extern "C" long __stdcall VariantClear(void* pvarg);
extern "C" int __cdecl memcpy_s(void* dest, unsigned int destSize, const void* src, unsigned int count);

struct CopyVerb {
    long doIt(void* dataState);
};

long CopyVerb::doIt(void* dataState)
{
    if (dataState == 0) {
        return (long)0x80004003;
    }
    long hr = VariantClear(dataState);
    if (hr >= 0) {
        memcpy_s(this, 0x10, dataState, 0x10);
        *(unsigned short*)this = 0;
        return 0;
    }
    return hr;
}
