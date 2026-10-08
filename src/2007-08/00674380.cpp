// from server: 90% by colin
// roc 2007-08 00674380  unit: CXTPCustomizeSheet  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00674380
//
// 00674380  8b542408             mov edx, dword ptr [esp + 8]
// 00674384  85d2                 test edx, edx
// 00674386  7434                 je 0x6743bc
// 00674388  817a0886000000       cmp dword ptr [edx + 8], 0x86
// 0067438f  752b                 jne 0x6743bc
// 00674391  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 00674397  85c0                 test eax, eax
// 00674399  7403                 je 0x67439e
// 0067439b  8b4020               mov eax, dword ptr [eax + 0x20]
// 0067439e  39420c               cmp dword ptr [edx + 0xc], eax
// 006743a1  7519                 jne 0x6743bc
// 006743a3  837a0400             cmp dword ptr [edx + 4], 0
// 006743a7  7413                 je 0x6743bc
// 006743a9  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006743ac  6a00                 push 0
// 006743ae  6a00                 push 0
// 006743b0  6830810000           push 0x8130
// 006743b5  50                   push eax
// 006743b6  ff15d0ec7700         call dword ptr [0x77ecd0]
// 006743bc  b801000000           mov eax, 1
// 006743c1  c20800               ret 8

extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct CXTPCustomizeSheet {
    char pad[0x20];
    void* field20;
    char pad2[0xb4 - 0x24];
    void* fieldb4;
    int func(void* p, int);
};

int CXTPCustomizeSheet::func(void* p, int) {
    int* q = (int*)p;
    if (q != 0 && q[2] == 0x86) {
        void* v = fieldb4;
        if (v != 0)
            v = *(void**)((char*)v + 0x20);
        if (q[3] == (int)v && q[1] != 0) {
            PostMessageA(field20, 0x8130, 0, 0);
        }
    }
    return 1;
}
