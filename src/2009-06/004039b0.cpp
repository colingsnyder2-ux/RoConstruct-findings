// roc 2009-06 004039b0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004039b0
//
// 004039b0  53                   push ebx
// 004039b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004039b5  56                   push esi
// 004039b6  57                   push edi
// 004039b7  6881000000           push 0x81
// 004039bc  53                   push ebx
// 004039bd  8bf9                 mov edi, ecx
// 004039bf  ff158ce98900         call dword ptr [0x89e98c]
// 004039c5  8bf0                 mov esi, eax
// 004039c7  83c408               add esp, 8
// 004039ca  81fe80000000         cmp esi, 0x80
// 004039d0  7608                 jbe 0x4039da
// 004039d2  5f                   pop edi
// 004039d3  5e                   pop esi
// 004039d4  33c0                 xor eax, eax
// 004039d6  5b                   pop ebx
// 004039d7  c20400               ret 4
// 004039da  56                   push esi
// 004039db  53                   push ebx
// 004039dc  8d8722010000         lea eax, [edi + 0x122]
// 004039e2  6881000000           push 0x81
// 004039e7  50                   push eax
// 004039e8  ff15a0e98900         call dword ptr [0x89e9a0]
// 004039ee  50                   push eax
// 004039ef  e82cf3ffff           call 0x402d20
// 004039f4  83c414               add esp, 0x14
// 004039f7  89b734120000         mov dword ptr [edi + 0x1234], esi
// 004039fd  5f                   pop edi
// 004039fe  5e                   pop esi
// 004039ff  b801000000           mov eax, 1
// 00403a04  5b                   pop ebx
// 00403a05  c20400               ret 4
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
