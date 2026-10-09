// from server: 84% by colin
// roc 2007-08 00412ca0  unit: VCContent::?$CComAggObject  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412ca0
//
// 00412ca0  53                   push ebx
// 00412ca1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00412ca5  56                   push esi
// 00412ca6  57                   push edi
// 00412ca7  6801080000           push 0x801
// 00412cac  53                   push ebx
// 00412cad  8bf9                 mov edi, ecx
// 00412caf  ff15a0e97700         call dword ptr [0x77e9a0]
// 00412cb5  8bf0                 mov esi, eax
// 00412cb7  83c408               add esp, 8
// 00412cba  81fe00080000         cmp esi, 0x800
// 00412cc0  7608                 jbe 0x412cca
// 00412cc2  5f                   pop edi
// 00412cc3  5e                   pop esi
// 00412cc4  33c0                 xor eax, eax
// 00412cc6  5b                   pop ebx
// 00412cc7  c20400               ret 4
// 00412cca  56                   push esi
// 00412ccb  53                   push ebx
// 00412ccc  8d8724020000         lea eax, [edi + 0x224]
// 00412cd2  6801080000           push 0x801
// 00412cd7  50                   push eax
// 00412cd8  ff15cce67700         call dword ptr [0x77e6cc]
// 00412cde  50                   push eax
// 00412cdf  e8fce9feff           call 0x4016e0
// 00412ce4  83c414               add esp, 0x14
// 00412ce7  89b73c120000         mov dword ptr [edi + 0x123c], esi
// 00412ced  5f                   pop edi
// 00412cee  5e                   pop esi
// 00412cef  b801000000           mov eax, 1
// 00412cf4  5b                   pop ebx
// 00412cf5  c20400               ret 4

struct VCContent_CComAggObject {
    char pad[0x123c];
    int field_123c;
    int method(int arg);
};

extern "C" unsigned long __stdcall strnlen(const char*, unsigned long);
extern "C" int __cdecl _mbsnbcpy_s(char*, unsigned long, const char*, unsigned long);

int VCContent_CComAggObject::method(int arg)
{
    unsigned long len = strnlen((const char*)arg, 0x801);
    if (len > 0x800)
        return 0;
    _mbsnbcpy_s((char*)this + 0x224, 0x801, (const char*)arg, len);
    field_123c = (int)len;
    return 1;
}
