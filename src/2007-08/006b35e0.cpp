// from server: 89% by colin
// roc 2007-08 006b35e0  unit: CXTPControlGallery  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b35e0
//
// 006b35e0  56                   push esi
// 006b35e1  8bf1                 mov esi, ecx
// 006b35e3  83be1802000000       cmp dword ptr [esi + 0x218], 0
// 006b35ea  7414                 je 0x6b3600
// 006b35ec  6811100000           push 0x1011
// 006b35f1  e8aa8ef8ff           call 0x63c4a0
// 006b35f6  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 006b3600  8b442408             mov eax, dword ptr [esp + 8]
// 006b3604  50                   push eax
// 006b3605  8bce                 mov ecx, esi
// 006b3607  e864d9fbff           call 0x670f70
// 006b360c  5e                   pop esi
// 006b360d  c20400               ret 4

struct CXTPControlGallery {
    char pad[0x218];
    int field_218;
    void func(int);
};

extern "C" void __stdcall sub_0063c4a0(int);
extern "C" void __stdcall sub_00670f70();

void CXTPControlGallery::func(int a) {
    if (this->field_218 != 0) {
        sub_0063c4a0(0x1011);
        this->field_218 = 0;
    }
    sub_00670f70();
}
