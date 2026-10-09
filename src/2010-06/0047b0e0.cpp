// roc 2010-06 0047b0e0  unit: DxUserInput  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047b0e0
//
// 0047b0e0  56                   push esi
// 0047b0e1  8bf1                 mov esi, ecx
// 0047b0e3  8b4604               mov eax, dword ptr [esi + 4]
// 0047b0e6  57                   push edi
// 0047b0e7  33ff                 xor edi, edi
// 0047b0e9  897e10               mov dword ptr [esi + 0x10], edi
// 0047b0ec  3bc7                 cmp eax, edi
// 0047b0ee  740c                 je 0x47b0fc
// 0047b0f0  50                   push eax
// 0047b0f1  e850cb3200           call 0x7a7c46
// 0047b0f6  83c404               add esp, 4
// 0047b0f9  897e04               mov dword ptr [esi + 4], edi
// 0047b0fc  897e08               mov dword ptr [esi + 8], edi
// 0047b0ff  897e0c               mov dword ptr [esi + 0xc], edi
// 0047b102  33c0                 xor eax, eax
// 0047b104  b9e4040000           mov ecx, 0x4e4
// 0047b109  5f                   pop edi
// 0047b10a  668906               mov word ptr [esi], ax
// 0047b10d  66894e02             mov word ptr [esi + 2], cx
// 0047b111  5e                   pop esi
// 0047b112  c3                   ret 
// copied from an identical function in another client (function ?reset@DxUserInput@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
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
