// roc 2008-06 006e8130  unit: CXTPToolBar::CControlButtonExpand  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8130
//
// 006e8130  56                   push esi
// 006e8131  8bf1                 mov esi, ecx
// 006e8133  8d4e04               lea ecx, [esi + 4]
// 006e8136  c706506e8500         mov dword ptr [esi], 0x856e50
// 006e813c  ff15043f8000         call dword ptr [0x803f04]
// 006e8142  33c0                 xor eax, eax
// 006e8144  894608               mov dword ptr [esi + 8], eax
// 006e8147  89460c               mov dword ptr [esi + 0xc], eax
// 006e814a  894610               mov dword ptr [esi + 0x10], eax
// 006e814d  894614               mov dword ptr [esi + 0x14], eax
// 006e8150  894618               mov dword ptr [esi + 0x18], eax
// 006e8153  89461c               mov dword ptr [esi + 0x1c], eax
// 006e8156  894620               mov dword ptr [esi + 0x20], eax
// 006e8159  8bc6                 mov eax, esi
// 006e815b  5e                   pop esi
// 006e815c  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Common\XTPSystemHelpers.cpp (function ??0CXTPModuleHandle@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPSystemHelpers.cpp
