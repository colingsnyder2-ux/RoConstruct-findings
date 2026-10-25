// from server: 100% by tester
// roc 2008-06 006eb160  unit: CXTPCustomizeSheet  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006eb160
//
// 006eb160  8b542408             mov edx, dword ptr [esp + 8]
// 006eb164  85d2                 test edx, edx
// 006eb166  7434                 je 0x6eb19c
// 006eb168  817a0886000000       cmp dword ptr [edx + 8], 0x86
// 006eb16f  752b                 jne 0x6eb19c
// 006eb171  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 006eb177  85c0                 test eax, eax
// 006eb179  7403                 je 0x6eb17e
// 006eb17b  8b4020               mov eax, dword ptr [eax + 0x20]
// 006eb17e  39420c               cmp dword ptr [edx + 0xc], eax
// 006eb181  7519                 jne 0x6eb19c
// 006eb183  837a0400             cmp dword ptr [edx + 4], 0
// 006eb187  7413                 je 0x6eb19c
// 006eb189  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006eb18c  6a00                 push 0
// 006eb18e  6a00                 push 0
// 006eb190  6830810000           push 0x8130
// 006eb195  50                   push eax
// 006eb196  ff150c2e8000         call dword ptr [0x802e0c]
// 006eb19c  b801000000           mov eax, 1
// 006eb1a1  c20800               ret 8

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
