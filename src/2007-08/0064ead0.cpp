// from server: 52% by colin
// roc 2007-08 0064ead0  unit: CXTPToolBar::CControlButtonHide  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ead0
//
// 0064ead0  56                   push esi
// 0064ead1  8bf1                 mov esi, ecx
// 0064ead3  e888b90700           call 0x6ca460
// 0064ead8  33c0                 xor eax, eax
// 0064eada  898668010000         mov dword ptr [esi + 0x168], eax
// 0064eae0  89866c010000         mov dword ptr [esi + 0x16c], eax
// 0064eae6  c70614707c00         mov dword ptr [esi], 0x7c7014
// 0064eaec  c74620b46f7c00       mov dword ptr [esi + 0x20], 0x7c6fb4
// 0064eaf3  8bc6                 mov eax, esi
// 0064eaf5  5e                   pop esi
// 0064eaf6  c3                   ret 

struct CXTPToolBar_CControlButtonHide {
    char pad[0x168];
    int field_168;
    int field_16c;
    void base_init();
    CXTPToolBar_CControlButtonHide();
};

void CXTPToolBar_CControlButtonHide::base_init() {
}

CXTPToolBar_CControlButtonHide::CXTPToolBar_CControlButtonHide() {
    base_init();
    field_168 = 0;
    field_16c = 0;
    *(int*)this = 0x7c7014;
    *(int*)((char*)this + 0x20) = 0x7c6fb4;
}
