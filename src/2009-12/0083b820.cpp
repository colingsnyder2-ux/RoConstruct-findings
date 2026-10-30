// roc 2009-12 0083b820  unit: CXTPToolBar::CControlButtonExpand  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083b820
//
// 0083b820  56                   push esi
// 0083b821  8bf1                 mov esi, ecx
// 0083b823  8d4e04               lea ecx, [esi + 4]
// 0083b826  c70650839f00         mov dword ptr [esi], 0x9f8350
// 0083b82c  ff1574de9800         call dword ptr [0x98de74]
// 0083b832  33c0                 xor eax, eax
// 0083b834  894608               mov dword ptr [esi + 8], eax
// 0083b837  89460c               mov dword ptr [esi + 0xc], eax
// 0083b83a  894610               mov dword ptr [esi + 0x10], eax
// 0083b83d  894614               mov dword ptr [esi + 0x14], eax
// 0083b840  894618               mov dword ptr [esi + 0x18], eax
// 0083b843  89461c               mov dword ptr [esi + 0x1c], eax
// 0083b846  894620               mov dword ptr [esi + 0x20], eax
// 0083b849  8bc6                 mov eax, esi
// 0083b84b  5e                   pop esi
// 0083b84c  c3                   ret 
// copied from an identical function in another client (function ??0CXTPModuleHandle@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPSystemHelpers.cpp