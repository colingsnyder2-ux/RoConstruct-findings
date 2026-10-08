// from server: 100% by colin
// roc 2007-08 004665f0  unit: DxUserInput  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004665f0
//
// 004665f0  56                   push esi
// 004665f1  8bf1                 mov esi, ecx
// 004665f3  8b4604               mov eax, dword ptr [esi + 4]
// 004665f6  57                   push edi
// 004665f7  33ff                 xor edi, edi
// 004665f9  3bc7                 cmp eax, edi
// 004665fb  897e10               mov dword ptr [esi + 0x10], edi
// 004665fe  740c                 je 0x46660c
// 00466600  50                   push eax
// 00466601  e820991c00           call 0x62ff26
// 00466606  83c404               add esp, 4
// 00466609  897e04               mov dword ptr [esi + 4], edi
// 0046660c  66893e               mov word ptr [esi], di
// 0046660f  897e08               mov dword ptr [esi + 8], edi
// 00466612  897e0c               mov dword ptr [esi + 0xc], edi
// 00466615  5f                   pop edi
// 00466616  66c74602e404         mov word ptr [esi + 2], 0x4e4
// 0046661c  5e                   pop esi
// 0046661d  c3                   ret 

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
