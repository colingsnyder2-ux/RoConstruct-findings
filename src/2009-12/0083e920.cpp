// roc 2009-12 0083e920  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083e920
//
// 0083e920  8b542408             mov edx, dword ptr [esp + 8]
// 0083e924  85d2                 test edx, edx
// 0083e926  7434                 je 0x83e95c
// 0083e928  817a0886000000       cmp dword ptr [edx + 8], 0x86
// 0083e92f  752b                 jne 0x83e95c
// 0083e931  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 0083e937  85c0                 test eax, eax
// 0083e939  7403                 je 0x83e93e
// 0083e93b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083e93e  39420c               cmp dword ptr [edx + 0xc], eax
// 0083e941  7519                 jne 0x83e95c
// 0083e943  837a0400             cmp dword ptr [edx + 4], 0
// 0083e947  7413                 je 0x83e95c
// 0083e949  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0083e94c  6a00                 push 0
// 0083e94e  6a00                 push 0
// 0083e950  6830810000           push 0x8130
// 0083e955  50                   push eax
// 0083e956  ff15b8cb9800         call dword ptr [0x98cbb8]
// 0083e95c  b801000000           mov eax, 1
// 0083e961  c20800               ret 8
// copied from an identical function in another client (function ?Check@CXTPCustomizeSheet@ns_ROCX000010@@QAEHHPAX@Z)

namespace ns_ROCX000010 {
// from server: 100% by tester
extern "C" __declspec(dllimport) int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct CXTPCustomizeSheet {
    char pad[0x20];
    void* field_20;
    char pad2[0x90];
    void* field_b4;
    int Check(int unused, void* p);
};

int CXTPCustomizeSheet::Check(int unused, void* p) {
    if (p != 0) {
        if (*(unsigned int*)((char*)p + 8) == 0x86) {
            void* v = field_b4;
            if (v != 0) {
                v = *(void**)((char*)v + 0x20);
            }
            if (*(void**)((char*)p + 0xc) == v) {
                if (*(void**)((char*)p + 4) != 0) {
                    PostMessageA(field_20, 0x8130, 0, 0);
                }
            }
        }
    }
    return 1;
}
}
