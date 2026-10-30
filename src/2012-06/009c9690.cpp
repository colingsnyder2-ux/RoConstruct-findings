// roc 2012-06 009c9690  unit: CXTPToolBar::CControlButtonExpand  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9690
//
// 009c9690  56                   push esi
// 009c9691  8bf1                 mov esi, ecx
// 009c9693  8d4e04               lea ecx, [esi + 4]
// 009c9696  c7065039c100         mov dword ptr [esi], 0xc13950
// 009c969c  ff158447b200         call dword ptr [0xb24784]
// 009c96a2  33c0                 xor eax, eax
// 009c96a4  894608               mov dword ptr [esi + 8], eax
// 009c96a7  89460c               mov dword ptr [esi + 0xc], eax
// 009c96aa  894610               mov dword ptr [esi + 0x10], eax
// 009c96ad  894614               mov dword ptr [esi + 0x14], eax
// 009c96b0  894618               mov dword ptr [esi + 0x18], eax
// 009c96b3  89461c               mov dword ptr [esi + 0x1c], eax
// 009c96b6  894620               mov dword ptr [esi + 0x20], eax
// 009c96b9  8bc6                 mov eax, esi
// 009c96bb  5e                   pop esi
// 009c96bc  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Common\XTPSystemHelpers.cpp (function ??0CXTPModuleHandle@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPSystemHelpers.cpp
