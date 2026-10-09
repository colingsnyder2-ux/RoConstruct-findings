// from server: 91% by colin
// roc 2007-08 00412bc0  unit: VCContent::?$CComAggObject  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412bc0
//
// 00412bc0  53                   push ebx
// 00412bc1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00412bc5  56                   push esi
// 00412bc6  57                   push edi
// 00412bc7  6881000000           push 0x81
// 00412bcc  53                   push ebx
// 00412bcd  8bf9                 mov edi, ecx
// 00412bcf  ff15a0e97700         call dword ptr [0x77e9a0]
// 00412bd5  8bf0                 mov esi, eax
// 00412bd7  83c408               add esp, 8
// 00412bda  81fe80000000         cmp esi, 0x80
// 00412be0  7608                 jbe 0x412bea
// 00412be2  5f                   pop edi
// 00412be3  5e                   pop esi
// 00412be4  33c0                 xor eax, eax
// 00412be6  5b                   pop ebx
// 00412be7  c20400               ret 4
// 00412bea  56                   push esi
// 00412beb  53                   push ebx
// 00412bec  8d8722010000         lea eax, [edi + 0x122]
// 00412bf2  6881000000           push 0x81
// 00412bf7  50                   push eax
// 00412bf8  ff15cce67700         call dword ptr [0x77e6cc]
// 00412bfe  50                   push eax
// 00412bff  e8dceafeff           call 0x4016e0
// 00412c04  83c414               add esp, 0x14
// 00412c07  89b734120000         mov dword ptr [edi + 0x1234], esi
// 00412c0d  5f                   pop edi
// 00412c0e  5e                   pop esi
// 00412c0f  b801000000           mov eax, 1
// 00412c14  5b                   pop ebx
// 00412c15  c20400               ret 4

typedef const char* LPCSTR;
struct VCContent_CComAggObject {
    char pad[0x122];
    char field_122[0x1112];
    int field_1234;
    int m(LPCSTR lpString);
};

extern "C" {
    unsigned int __cdecl strnlen(const char* str, unsigned int maxlen);
    int __cdecl _mbsnbcpy_s(char* dest, unsigned int destSize, const char* src, unsigned int count);
}

int VCContent_CComAggObject::m(LPCSTR lpString)
{
    unsigned int len = strnlen(lpString, 0x81);
    if (len > 0x80)
        return 0;
    _mbsnbcpy_s(field_122, 0x81, lpString, len);
    field_1234 = len;
    return 1;
}
