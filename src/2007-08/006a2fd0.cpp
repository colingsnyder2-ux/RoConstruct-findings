// from server: 87% by colin
// roc 2007-08 006a2fd0  unit: PAVCXTPHookManagerHookAble::?$CArray  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2fd0
//
// 006a2fd0  56                   push esi
// 006a2fd1  8bf1                 mov esi, ecx
// 006a2fd3  6a0a                 push 0xa
// 006a2fd5  8d4e14               lea ecx, [esi + 0x14]
// 006a2fd8  c70650357d00         mov dword ptr [esi], 0x7d3550
// 006a2fde  e87dfdffff           call 0x6a2d60
// 006a2fe3  33c0                 xor eax, eax
// 006a2fe5  894604               mov dword ptr [esi + 4], eax
// 006a2fe8  894608               mov dword ptr [esi + 8], eax
// 006a2feb  89460c               mov dword ptr [esi + 0xc], eax
// 006a2fee  894610               mov dword ptr [esi + 0x10], eax
// 006a2ff1  8bc6                 mov eax, esi
// 006a2ff3  5e                   pop esi
// 006a2ff4  c3                   ret 

struct CXTPHookManagerHookAble {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    char pad14[0x14];
    void sub_6A2D60(int);
    CXTPHookManagerHookAble* construct();
};

CXTPHookManagerHookAble* CXTPHookManagerHookAble::construct() {
    vtable = (void*)0x7d3550;
    sub_6A2D60(0xa);
    field4 = 0;
    field8 = 0;
    fieldC = 0;
    field10 = 0;
    return this;
}
