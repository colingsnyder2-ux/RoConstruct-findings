// roc 2009-06 0046c6c0  unit: DxUserInput  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046c6c0
//
// 0046c6c0  56                   push esi
// 0046c6c1  8bf1                 mov esi, ecx
// 0046c6c3  8b4604               mov eax, dword ptr [esi + 4]
// 0046c6c6  57                   push edi
// 0046c6c7  33ff                 xor edi, edi
// 0046c6c9  897e10               mov dword ptr [esi + 0x10], edi
// 0046c6cc  3bc7                 cmp eax, edi
// 0046c6ce  740c                 je 0x46c6dc
// 0046c6d0  50                   push eax
// 0046c6d1  e808c62a00           call 0x718cde
// 0046c6d6  83c404               add esp, 4
// 0046c6d9  897e04               mov dword ptr [esi + 4], edi
// 0046c6dc  897e08               mov dword ptr [esi + 8], edi
// 0046c6df  897e0c               mov dword ptr [esi + 0xc], edi
// 0046c6e2  33c0                 xor eax, eax
// 0046c6e4  b9e4040000           mov ecx, 0x4e4
// 0046c6e9  5f                   pop edi
// 0046c6ea  668906               mov word ptr [esi], ax
// 0046c6ed  66894e02             mov word ptr [esi + 2], cx
// 0046c6f1  5e                   pop esi
// 0046c6f2  c3                   ret 
// copied from an identical function in another client (function ?reset@DxUserInput@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
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
