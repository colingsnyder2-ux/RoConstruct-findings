// from server: 100% by tester
// roc 2010-06 007f29e0  unit: CXTPCustomizeSheet  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f29e0
//
// 007f29e0  8b542408             mov edx, dword ptr [esp + 8]
// 007f29e4  85d2                 test edx, edx
// 007f29e6  7434                 je 0x7f2a1c
// 007f29e8  817a0886000000       cmp dword ptr [edx + 8], 0x86
// 007f29ef  752b                 jne 0x7f2a1c
// 007f29f1  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 007f29f7  85c0                 test eax, eax
// 007f29f9  7403                 je 0x7f29fe
// 007f29fb  8b4020               mov eax, dword ptr [eax + 0x20]
// 007f29fe  39420c               cmp dword ptr [edx + 0xc], eax
// 007f2a01  7519                 jne 0x7f2a1c
// 007f2a03  837a0400             cmp dword ptr [edx + 4], 0
// 007f2a07  7413                 je 0x7f2a1c
// 007f2a09  8b4120               mov eax, dword ptr [ecx + 0x20]
// 007f2a0c  6a00                 push 0
// 007f2a0e  6a00                 push 0
// 007f2a10  6830810000           push 0x8130
// 007f2a15  50                   push eax
// 007f2a16  ff1548ba9e00         call dword ptr [0x9eba48]
// 007f2a1c  b801000000           mov eax, 1
// 007f2a21  c20800               ret 8

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
