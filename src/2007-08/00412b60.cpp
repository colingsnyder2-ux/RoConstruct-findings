// from server: 84% by colin
// roc 2007-08 00412b60  unit: VCContent::?$CComAggObject  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412b60
//
// 00412b60  53                   push ebx
// 00412b61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00412b65  56                   push esi
// 00412b66  57                   push edi
// 00412b67  6801010000           push 0x101
// 00412b6c  53                   push ebx
// 00412b6d  8bf9                 mov edi, ecx
// 00412b6f  ff15a0e97700         call dword ptr [0x77e9a0]
// 00412b75  8bf0                 mov esi, eax
// 00412b77  83c408               add esp, 8
// 00412b7a  81fe00010000         cmp esi, 0x100
// 00412b80  7608                 jbe 0x412b8a
// 00412b82  5f                   pop edi
// 00412b83  5e                   pop esi
// 00412b84  33c0                 xor eax, eax
// 00412b86  5b                   pop ebx
// 00412b87  c20400               ret 4
// 00412b8a  56                   push esi
// 00412b8b  53                   push ebx
// 00412b8c  8d4721               lea eax, [edi + 0x21]
// 00412b8f  6801010000           push 0x101
// 00412b94  50                   push eax
// 00412b95  ff15cce67700         call dword ptr [0x77e6cc]
// 00412b9b  50                   push eax
// 00412b9c  e83febfeff           call 0x4016e0
// 00412ba1  83c414               add esp, 0x14
// 00412ba4  89b730120000         mov dword ptr [edi + 0x1230], esi
// 00412baa  5f                   pop edi
// 00412bab  5e                   pop esi
// 00412bac  b801000000           mov eax, 1
// 00412bb1  5b                   pop ebx
// 00412bb2  c20400               ret 4

extern "C" unsigned long __stdcall strnlen(const char*, unsigned long);
extern "C" int __cdecl _mbsnbcpy_s(char*, unsigned long, const char*, unsigned long);

struct VCContent_CComAggObject
{
    char pad[0x21];
    char buf[0x101];
    char pad2[0x1230 - 0x21 - 0x101];
    int field_0x1230;
    int SetContent(const char* src);
};

int VCContent_CComAggObject::SetContent(const char* src)
{
    unsigned long len = strnlen(src, 0x101);
    if (len > 0x100)
        return 0;
    _mbsnbcpy_s(buf, 0x101, src, len);
    field_0x1230 = (int)len;
    return 1;
}
