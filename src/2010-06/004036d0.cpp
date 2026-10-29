// roc 2010-06 004036d0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004036d0
//
// 004036d0  53                   push ebx
// 004036d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004036d5  56                   push esi
// 004036d6  57                   push edi
// 004036d7  6881000000           push 0x81
// 004036dc  53                   push ebx
// 004036dd  8bf9                 mov edi, ecx
// 004036df  ff15c0a89e00         call dword ptr [0x9ea8c0]
// 004036e5  8bf0                 mov esi, eax
// 004036e7  83c408               add esp, 8
// 004036ea  81fe80000000         cmp esi, 0x80
// 004036f0  7608                 jbe 0x4036fa
// 004036f2  5f                   pop edi
// 004036f3  5e                   pop esi
// 004036f4  33c0                 xor eax, eax
// 004036f6  5b                   pop ebx
// 004036f7  c20400               ret 4
// 004036fa  56                   push esi
// 004036fb  53                   push ebx
// 004036fc  8d8722010000         lea eax, [edi + 0x122]
// 00403702  6881000000           push 0x81
// 00403707  50                   push eax
// 00403708  ff15d4a89e00         call dword ptr [0x9ea8d4]
// 0040370e  50                   push eax
// 0040370f  e82cf3ffff           call 0x402a40
// 00403714  83c414               add esp, 0x14
// 00403717  89b734120000         mov dword ptr [edi + 0x1234], esi
// 0040371d  5f                   pop edi
// 0040371e  5e                   pop esi
// 0040371f  b801000000           mov eax, 1
// 00403724  5b                   pop ebx
// 00403725  c20400               ret 4
// copied from an identical function in another client (function ?func@FactoryProduct@ns_ROCX000000@@QAEHPAD@Z)

namespace ns_ROCX000000 {
// from server: 100% by atomic.potato
extern "C" unsigned int (__cdecl * const strnlen)(const char* str, unsigned int maxlen);
extern "C" int (__cdecl * const _mbsnbcpy_s)(unsigned char* dst, unsigned int sizeInBytes, const unsigned char* src, unsigned int count);
extern "C" int __cdecl sub_4029F0(int code);

struct FactoryProduct {
    int func(char* src);
};

int FactoryProduct::func(char* src) {
    unsigned int n = strnlen(src, 0x81);
    if (n > 0x80) {
        return 0;
    }
    sub_4029F0(_mbsnbcpy_s((unsigned char*)this + 0x122, 0x81, (const unsigned char*)src, n));
    *(unsigned int*)((char*)this + 0x1234) = n;
    return 1;
}
}