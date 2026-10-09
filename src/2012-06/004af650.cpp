// roc 2012-06 004af650  unit: VerbBinderJob  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004af650
//
// 004af650  56                   push esi
// 004af651  8bf1                 mov esi, ecx
// 004af653  8b4604               mov eax, dword ptr [esi + 4]
// 004af656  57                   push edi
// 004af657  33ff                 xor edi, edi
// 004af659  897e10               mov dword ptr [esi + 0x10], edi
// 004af65c  3bc7                 cmp eax, edi
// 004af65e  740c                 je 0x4af66c
// 004af660  50                   push eax
// 004af661  e8542d4d00           call 0x9823ba
// 004af666  83c404               add esp, 4
// 004af669  897e04               mov dword ptr [esi + 4], edi
// 004af66c  897e08               mov dword ptr [esi + 8], edi
// 004af66f  897e0c               mov dword ptr [esi + 0xc], edi
// 004af672  33c0                 xor eax, eax
// 004af674  b9e4040000           mov ecx, 0x4e4
// 004af679  5f                   pop edi
// 004af67a  668906               mov word ptr [esi], ax
// 004af67d  66894e02             mov word ptr [esi + 2], cx
// 004af681  5e                   pop esi
// 004af682  c3                   ret 
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
