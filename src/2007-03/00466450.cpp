// roc 2007-03 00466450  unit: seg_00460000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00466450
//
// 00466450  56                   push esi
// 00466451  8bf1                 mov esi, ecx
// 00466453  8b4604               mov eax, dword ptr [esi + 4]
// 00466456  57                   push edi
// 00466457  33ff                 xor edi, edi
// 00466459  3bc7                 cmp eax, edi
// 0046645b  897e10               mov dword ptr [esi + 0x10], edi
// 0046645e  740c                 je 0x46646c
// 00466460  50                   push eax
// 00466461  e84e7f1b00           call 0x61e3b4
// 00466466  83c404               add esp, 4
// 00466469  897e04               mov dword ptr [esi + 4], edi
// 0046646c  66893e               mov word ptr [esi], di
// 0046646f  897e08               mov dword ptr [esi + 8], edi
// 00466472  897e0c               mov dword ptr [esi + 0xc], edi
// 00466475  5f                   pop edi
// 00466476  66c74602e404         mov word ptr [esi + 2], 0x4e4
// 0046647c  5e                   pop esi
// 0046647d  c3                   ret 
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
