// roc 2009-06 007b8760  unit: CXTPRibbonBarControlQuickAccessPopup  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b8760
//
// 007b8760  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007b8766  56                   push esi
// 007b8767  e8e44cf7ff           call 0x72d450
// 007b876c  8bb014010000         mov esi, dword ptr [eax + 0x114]
// 007b8772  8bce                 mov ecx, esi
// 007b8774  6bc90d               imul ecx, ecx, 0xd
// 007b8777  b8e9a28b2e           mov eax, 0x2e8ba2e9
// 007b877c  f7e9                 imul ecx
// 007b877e  8b442408             mov eax, dword ptr [esp + 8]
// 007b8782  c1fa02               sar edx, 2
// 007b8785  8bca                 mov ecx, edx
// 007b8787  c1e91f               shr ecx, 0x1f
// 007b878a  03ca                 add ecx, edx
// 007b878c  897004               mov dword ptr [eax + 4], esi
// 007b878f  8908                 mov dword ptr [eax], ecx
// 007b8791  5e                   pop esi
// 007b8792  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetSize@CXTPRibbonBarControlQuickAccessPopup@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
