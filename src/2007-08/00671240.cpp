// from server: 88% by colin
// roc 2007-08 00671240  unit: CXTPToolBar::CControlButtonExpand  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671240
//
// 00671240  56                   push esi
// 00671241  8bf1                 mov esi, ecx
// 00671243  8d4e04               lea ecx, [esi + 4]
// 00671246  c70670b67c00         mov dword ptr [esi], 0x7cb670
// 0067124c  ff15acdd7700         call dword ptr [0x77ddac]
// 00671252  33c0                 xor eax, eax
// 00671254  894608               mov dword ptr [esi + 8], eax
// 00671257  89460c               mov dword ptr [esi + 0xc], eax
// 0067125a  894610               mov dword ptr [esi + 0x10], eax
// 0067125d  894614               mov dword ptr [esi + 0x14], eax
// 00671260  894618               mov dword ptr [esi + 0x18], eax
// 00671263  89461c               mov dword ptr [esi + 0x1c], eax
// 00671266  894620               mov dword ptr [esi + 0x20], eax
// 00671269  8bc6                 mov eax, esi
// 0067126b  5e                   pop esi
// 0067126c  c3                   ret 

struct CXTPToolBar_CControlButtonExpand
{
    void* vtable;
    int field_4;
    int field_8;
    int field_C;
    int field_10;
    int field_14;
    int field_18;
    int field_1C;
    int field_20;

    CXTPToolBar_CControlButtonExpand* construct();
};

extern "C" void __stdcall sub_77ddac();

CXTPToolBar_CControlButtonExpand* CXTPToolBar_CControlButtonExpand::construct()
{
    vtable = (void*)0x7cb670;
    sub_77ddac();
    field_8 = 0;
    field_C = 0;
    field_10 = 0;
    field_14 = 0;
    field_18 = 0;
    field_1C = 0;
    field_20 = 0;
    return this;
}
