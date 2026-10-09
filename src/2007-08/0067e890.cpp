// from server: 42% by colin
// roc 2007-08 0067e890  unit: CXTPControlRecentFileList  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067e890
//
// 0067e890  56                   push esi
// 0067e891  8bf1                 mov esi, ecx
// 0067e893  e878dffbff           call 0x63c810
// 0067e898  b805000000           mov eax, 5
// 0067e89d  898668010000         mov dword ptr [esi + 0x168], eax
// 0067e8a3  b904000000           mov ecx, 4
// 0067e8a8  b80c000000           mov eax, 0xc
// 0067e8ad  898e6c010000         mov dword ptr [esi + 0x16c], ecx
// 0067e8b3  8bc8                 mov ecx, eax
// 0067e8b5  898670010000         mov dword ptr [esi + 0x170], eax
// 0067e8bb  b81c000000           mov eax, 0x1c
// 0067e8c0  898e74010000         mov dword ptr [esi + 0x174], ecx
// 0067e8c6  8bc8                 mov ecx, eax
// 0067e8c8  898680010000         mov dword ptr [esi + 0x180], eax
// 0067e8ce  c7060ce97c00         mov dword ptr [esi], 0x7ce90c
// 0067e8d4  c74620ace87c00       mov dword ptr [esi + 0x20], 0x7ce8ac
// 0067e8db  c7869801000000000000 mov dword ptr [esi + 0x198], 0
// 0067e8e5  898e84010000         mov dword ptr [esi + 0x184], ecx
// 0067e8eb  8bc6                 mov eax, esi
// 0067e8ed  5e                   pop esi
// 0067e8ee  c3                   ret 

struct CXTPControlRecentFileList {
    char pad[0x168];
    int field_168;
    int field_16c;
    int field_170;
    int field_174;
    char pad2[0x180 - 0x178];
    int field_180;
    int field_184;
    char pad3[0x198 - 0x188];
    int field_198;
    void sub_63c810();
    CXTPControlRecentFileList* init();
};

void CXTPControlRecentFileList::sub_63c810() {
}

CXTPControlRecentFileList* CXTPControlRecentFileList::init() {
    sub_63c810();
    field_168 = 5;
    field_16c = 4;
    field_170 = 0xc;
    field_174 = 0xc;
    field_180 = 0x1c;
    *(int*)this = 0x7ce90c;
    *(int*)((char*)this + 0x20) = 0x7ce8ac;
    field_198 = 0;
    field_184 = 0x1c;
    return this;
}
