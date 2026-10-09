// from server: 84% by colin
// roc 2007-08 00412d00  unit: VCContent::?$CComAggObject  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412d00
//
// 00412d00  53                   push ebx
// 00412d01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00412d05  56                   push esi
// 00412d06  57                   push edi
// 00412d07  6801080000           push 0x801
// 00412d0c  53                   push ebx
// 00412d0d  8bf9                 mov edi, ecx
// 00412d0f  ff15a0e97700         call dword ptr [0x77e9a0]
// 00412d15  8bf0                 mov esi, eax
// 00412d17  83c408               add esp, 8
// 00412d1a  81fe00080000         cmp esi, 0x800
// 00412d20  7608                 jbe 0x412d2a
// 00412d22  5f                   pop edi
// 00412d23  5e                   pop esi
// 00412d24  33c0                 xor eax, eax
// 00412d26  5b                   pop ebx
// 00412d27  c20400               ret 4
// 00412d2a  56                   push esi
// 00412d2b  53                   push ebx
// 00412d2c  8d87250a0000         lea eax, [edi + 0xa25]
// 00412d32  6801080000           push 0x801
// 00412d37  50                   push eax
// 00412d38  ff15cce67700         call dword ptr [0x77e6cc]
// 00412d3e  50                   push eax
// 00412d3f  e89ce9feff           call 0x4016e0
// 00412d44  83c414               add esp, 0x14
// 00412d47  89b740120000         mov dword ptr [edi + 0x1240], esi
// 00412d4d  5f                   pop edi
// 00412d4e  5e                   pop esi
// 00412d4f  b801000000           mov eax, 1
// 00412d54  5b                   pop ebx
// 00412d55  c20400               ret 4

extern "C" unsigned long __stdcall strnlen(const char*, unsigned long);
extern "C" int __cdecl _mbsnbcpy_s(char*, unsigned long, const char*, unsigned long);

struct VCContent_CComAggObject
{
    char pad[0xa25];
    char buf[0x801];
    char pad2[0x1240 - 0xa25 - 0x801];
    unsigned long len;
    int SetContent(const char* src);
};

int VCContent_CComAggObject::SetContent(const char* src)
{
    unsigned long n = strnlen(src, 0x801);
    if (n > 0x800)
        return 0;
    _mbsnbcpy_s(this->buf, 0x801, src, n);
    this->len = n;
    return 1;
}
