// from server: 81% by colin
// roc 2007-08 00671270  unit: CXTPToolBar::CControlButtonExpand  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671270
//
// 00671270  56                   push esi
// 00671271  8bf1                 mov esi, ecx
// 00671273  8b4608               mov eax, dword ptr [esi + 8]
// 00671276  85c0                 test eax, eax
// 00671278  57                   push edi
// 00671279  bf01000000           mov edi, 1
// 0067127e  740f                 je 0x67128f
// 00671280  837e0c02             cmp dword ptr [esi + 0xc], 2
// 00671284  7509                 jne 0x67128f
// 00671286  50                   push eax
// 00671287  ff15dcd27700         call dword ptr [0x77d2dc]
// 0067128d  8bf8                 mov edi, eax
// 0067128f  8d4e04               lea ecx, [esi + 4]
// 00671292  c7460800000000       mov dword ptr [esi + 8], 0
// 00671299  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006712a0  ff1558d57700         call dword ptr [0x77d558]
// 006712a6  8bc7                 mov eax, edi
// 006712a8  5f                   pop edi
// 006712a9  5e                   pop esi
// 006712aa  c3                   ret 

extern "C" int __stdcall FreeLibrary(void*);
extern "C" void __stdcall sub_77D558();

struct CXTPToolBar_CControlButtonExpand {
    char pad0[4];
    int field_4;
    int field_8;
    int field_C;
    int Release();
};

int CXTPToolBar_CControlButtonExpand::Release()
{
    int result = 1;
    if (field_8 != 0 && field_C == 2)
        result = FreeLibrary((void*)field_8);
    field_8 = 0;
    field_C = 0;
    sub_77D558();
    return result;
}
