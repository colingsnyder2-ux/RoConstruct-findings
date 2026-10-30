// roc 2010-06 0082cd30  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082cd30
//
// 0082cd30  83ec10               sub esp, 0x10
// 0082cd33  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082cd37  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 0082cd3d  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 0082cd43  890c24               mov dword ptr [esp], ecx
// 0082cd46  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0082cd4c  894c2408             mov dword ptr [esp + 8], ecx
// 0082cd50  89542404             mov dword ptr [esp + 4], edx
// 0082cd54  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 0082cd5a  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0082cd60  8d0c24               lea ecx, [esp]
// 0082cd63  51                   push ecx
// 0082cd64  50                   push eax
// 0082cd65  89542414             mov dword ptr [esp + 0x14], edx
// 0082cd69  e812ffffff           call 0x82cc80
// 0082cd6e  f7d8                 neg eax
// 0082cd70  1bc0                 sbb eax, eax
// 0082cd72  f7d8                 neg eax
// 0082cd74  83c418               add esp, 0x18
// 0082cd77  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetDrawImageFlags@@YAKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
