// from server: 100% by colin
// roc 2007-08 005d4a30  unit: RBX::VTool::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d4a30
//
// 005d4a30  56                   push esi
// 005d4a31  8bf1                 mov esi, ecx
// 005d4a33  e838feffff           call 0x5d4870
// 005d4a38  c7068cb67b00         mov dword ptr [esi], 0x7bb68c
// 005d4a3e  c7460480b67b00       mov dword ptr [esi + 4], 0x7bb680
// 005d4a45  c7461078b67b00       mov dword ptr [esi + 0x10], 0x7bb678
// 005d4a4c  c7461468b67b00       mov dword ptr [esi + 0x14], 0x7bb668
// 005d4a53  c7462c58b67b00       mov dword ptr [esi + 0x2c], 0x7bb658
// 005d4a5a  c7464448b67b00       mov dword ptr [esi + 0x44], 0x7bb648
// 005d4a61  c7465c38b67b00       mov dword ptr [esi + 0x5c], 0x7bb638
// 005d4a68  c7467428b67b00       mov dword ptr [esi + 0x74], 0x7bb628
// 005d4a6f  c7868c00000018b67b00 mov dword ptr [esi + 0x8c], 0x7bb618
// 005d4a79  c786e800000010b67b00 mov dword ptr [esi + 0xe8], 0x7bb610
// 005d4a83  8bc6                 mov eax, esi
// 005d4a85  5e                   pop esi
// 005d4a86  c3                   ret 

struct FactoryProduct {
    char pad[0x100];
    FactoryProduct();
};

extern "C" void __fastcall sub_5d4870(void*);

FactoryProduct::FactoryProduct() {
    sub_5d4870(this);
    char* p = (char*)this;
    *(int*)(p + 0x00) = 0x7bb68c;
    *(int*)(p + 0x04) = 0x7bb680;
    *(int*)(p + 0x10) = 0x7bb678;
    *(int*)(p + 0x14) = 0x7bb668;
    *(int*)(p + 0x2c) = 0x7bb658;
    *(int*)(p + 0x44) = 0x7bb648;
    *(int*)(p + 0x5c) = 0x7bb638;
    *(int*)(p + 0x74) = 0x7bb628;
    *(int*)(p + 0x8c) = 0x7bb618;
    *(int*)(p + 0xe8) = 0x7bb610;
}
