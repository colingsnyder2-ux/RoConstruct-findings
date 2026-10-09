// roc 2009-12 00475540  unit: DxUserInput  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00475540
//
// 00475540  56                   push esi
// 00475541  8bf1                 mov esi, ecx
// 00475543  8b4604               mov eax, dword ptr [esi + 4]
// 00475546  57                   push edi
// 00475547  33ff                 xor edi, edi
// 00475549  897e10               mov dword ptr [esi + 0x10], edi
// 0047554c  3bc7                 cmp eax, edi
// 0047554e  740c                 je 0x47555c
// 00475550  50                   push eax
// 00475551  e8b0e53700           call 0x7f3b06
// 00475556  83c404               add esp, 4
// 00475559  897e04               mov dword ptr [esi + 4], edi
// 0047555c  897e08               mov dword ptr [esi + 8], edi
// 0047555f  897e0c               mov dword ptr [esi + 0xc], edi
// 00475562  33c0                 xor eax, eax
// 00475564  b9e4040000           mov ecx, 0x4e4
// 00475569  5f                   pop edi
// 0047556a  668906               mov word ptr [esi], ax
// 0047556d  66894e02             mov word ptr [esi + 2], cx
// 00475571  5e                   pop esi
// 00475572  c3                   ret 
// copied from an identical function in another client (function ?reset@DxUserInput@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
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
