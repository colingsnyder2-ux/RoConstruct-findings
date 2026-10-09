// from server: 83% by colin
// roc 2007-08 00693c60  unit: CXTPStatusBar  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693c60
//
// 00693c60  56                   push esi
// 00693c61  57                   push edi
// 00693c62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00693c66  57                   push edi
// 00693c67  8bf1                 mov esi, ecx
// 00693c69  ff1534d47700         call dword ptr [0x77d434]
// 00693c6f  8b4704               mov eax, dword ptr [edi + 4]
// 00693c72  894604               mov dword ptr [esi + 4], eax
// 00693c75  8b4f08               mov ecx, dword ptr [edi + 8]
// 00693c78  894e08               mov dword ptr [esi + 8], ecx
// 00693c7b  8b570c               mov edx, dword ptr [edi + 0xc]
// 00693c7e  89560c               mov dword ptr [esi + 0xc], edx
// 00693c81  8b4710               mov eax, dword ptr [edi + 0x10]
// 00693c84  894610               mov dword ptr [esi + 0x10], eax
// 00693c87  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00693c8a  894e14               mov dword ptr [esi + 0x14], ecx
// 00693c8d  8b5718               mov edx, dword ptr [edi + 0x18]
// 00693c90  895618               mov dword ptr [esi + 0x18], edx
// 00693c93  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00693c96  89461c               mov dword ptr [esi + 0x1c], eax
// 00693c99  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00693c9c  894e20               mov dword ptr [esi + 0x20], ecx
// 00693c9f  8b5724               mov edx, dword ptr [edi + 0x24]
// 00693ca2  8d4728               lea eax, [edi + 0x28]
// 00693ca5  895624               mov dword ptr [esi + 0x24], edx
// 00693ca8  8b08                 mov ecx, dword ptr [eax]
// 00693caa  894e28               mov dword ptr [esi + 0x28], ecx
// 00693cad  8b5004               mov edx, dword ptr [eax + 4]
// 00693cb0  89562c               mov dword ptr [esi + 0x2c], edx
// 00693cb3  8b4808               mov ecx, dword ptr [eax + 8]
// 00693cb6  894e30               mov dword ptr [esi + 0x30], ecx
// 00693cb9  8b500c               mov edx, dword ptr [eax + 0xc]
// 00693cbc  5f                   pop edi
// 00693cbd  895634               mov dword ptr [esi + 0x34], edx
// 00693cc0  8bc6                 mov eax, esi
// 00693cc2  5e                   pop esi
// 00693cc3  c20400               ret 4

struct CXTPStatusBar {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int field24;
    int field28;
    int field2C;
    int field30;
    int field34;
    CXTPStatusBar* CopyFrom(const CXTPStatusBar* other);
};

extern "C" void (__stdcall *sub_77D434)(void*);

CXTPStatusBar* CXTPStatusBar::CopyFrom(const CXTPStatusBar* other) {
    sub_77D434((void*)other);
    field4 = other->field4;
    field8 = other->field8;
    fieldC = other->fieldC;
    field10 = other->field10;
    field14 = other->field14;
    field18 = other->field18;
    field1C = other->field1C;
    field20 = other->field20;
    field24 = other->field24;
    *(int*)&field28 = *(const int*)&other->field28;
    *(int*)&field2C = *(const int*)&other->field2C;
    *(int*)&field30 = *(const int*)&other->field30;
    *(int*)&field34 = *(const int*)&other->field34;
    return this;
}
