// roc 2008-06 00722df0  unit: CXTPRibbonBarControlQuickAccessPopup  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722df0
//
// 00722df0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00722df6  56                   push esi
// 00722df7  e8d420f9ff           call 0x6b4ed0
// 00722dfc  8bb014010000         mov esi, dword ptr [eax + 0x114]
// 00722e02  8bce                 mov ecx, esi
// 00722e04  6bc90d               imul ecx, ecx, 0xd
// 00722e07  b8e9a28b2e           mov eax, 0x2e8ba2e9
// 00722e0c  f7e9                 imul ecx
// 00722e0e  8b442408             mov eax, dword ptr [esp + 8]
// 00722e12  c1fa02               sar edx, 2
// 00722e15  8bca                 mov ecx, edx
// 00722e17  c1e91f               shr ecx, 0x1f
// 00722e1a  03ca                 add ecx, edx
// 00722e1c  897004               mov dword ptr [eax + 4], esi
// 00722e1f  8908                 mov dword ptr [eax], ecx
// 00722e21  5e                   pop esi
// 00722e22  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetSize@CXTPRibbonBarControlQuickAccessPopup@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
