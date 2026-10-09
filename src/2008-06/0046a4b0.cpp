// roc 2008-06 0046a4b0  unit: DxUserInput  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a4b0
//
// 0046a4b0  56                   push esi
// 0046a4b1  8bf1                 mov esi, ecx
// 0046a4b3  8b4604               mov eax, dword ptr [esi + 4]
// 0046a4b6  57                   push edi
// 0046a4b7  33ff                 xor edi, edi
// 0046a4b9  897e10               mov dword ptr [esi + 0x10], edi
// 0046a4bc  3bc7                 cmp eax, edi
// 0046a4be  740c                 je 0x46a4cc
// 0046a4c0  50                   push eax
// 0046a4c1  e884642300           call 0x6a094a
// 0046a4c6  83c404               add esp, 4
// 0046a4c9  897e04               mov dword ptr [esi + 4], edi
// 0046a4cc  897e08               mov dword ptr [esi + 8], edi
// 0046a4cf  897e0c               mov dword ptr [esi + 0xc], edi
// 0046a4d2  33c0                 xor eax, eax
// 0046a4d4  b9e4040000           mov ecx, 0x4e4
// 0046a4d9  5f                   pop edi
// 0046a4da  668906               mov word ptr [esi], ax
// 0046a4dd  66894e02             mov word ptr [esi + 2], cx
// 0046a4e1  5e                   pop esi
// 0046a4e2  c3                   ret 
// copied from an identical function in another client (function ?reset@DxUserInput@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
struct DxUserInput {
    unsigned short field0;
    unsigned short field2;
    void* field4;
    int field8;
    int fieldC;
    int field10;
    void reset();
};

extern "C" void __cdecl free_ptr(void* p);

void DxUserInput::reset() {
    void* p = this->field4;
    this->field10 = 0;
    if (p != 0) {
        free_ptr(p);
        this->field4 = 0;
    }
    this->field0 = 0;
    this->field8 = 0;
    this->fieldC = 0;
    this->field2 = 0x4e4;
}
}
