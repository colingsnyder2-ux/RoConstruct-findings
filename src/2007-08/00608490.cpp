// from DeepSeek/server: 100% by colin
// roc 2007-08 00608490  unit: RBX::ClumpStage  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608490
//
// 00608490  56                   push esi
// 00608491  57                   push edi
// 00608492  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00608496  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00608499  85c0                 test eax, eax
// 0060849b  8bf1                 mov esi, ecx
// 0060849d  7406                 je 0x6084a5
// 0060849f  50                   push eax
// 006084a0  e80bffffff           call 0x6083b0
// 006084a5  57                   push edi
// 006084a6  8bce                 mov ecx, esi
// 006084a8  e873ffffff           call 0x608420
// 006084ad  56                   push esi
// 006084ae  8bcf                 mov ecx, edi
// 006084b0  e88b0c0000           call 0x609140
// 006084b5  5f                   pop edi
// 006084b6  5e                   pop esi
// 006084b7  c20400               ret 4

struct ClumpStage {
    void sub_6083B0(int);
    void sub_608420(int);
    void sub_609140(int);
    void func(int);
};

void ClumpStage::func(int a) {
    int v = *(int*)(a + 0x6c);
    if (v != 0) {
        sub_6083B0(v);
    }
    sub_608420(a);
    ((ClumpStage*)a)->sub_609140((int)this);
}
