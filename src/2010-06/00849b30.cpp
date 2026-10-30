// roc 2010-06 00849b30  unit: CXTPRibbonBarControlQuickAccessPopup  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00849b30
//
// 00849b30  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00849b36  56                   push esi
// 00849b37  e854ebf6ff           call 0x7b8690
// 00849b3c  8bb014010000         mov esi, dword ptr [eax + 0x114]
// 00849b42  8bce                 mov ecx, esi
// 00849b44  6bc90d               imul ecx, ecx, 0xd
// 00849b47  b8e9a28b2e           mov eax, 0x2e8ba2e9
// 00849b4c  f7e9                 imul ecx
// 00849b4e  8b442408             mov eax, dword ptr [esp + 8]
// 00849b52  c1fa02               sar edx, 2
// 00849b55  8bca                 mov ecx, edx
// 00849b57  c1e91f               shr ecx, 0x1f
// 00849b5a  03ca                 add ecx, edx
// 00849b5c  897004               mov dword ptr [eax + 4], esi
// 00849b5f  8908                 mov dword ptr [eax], ecx
// 00849b61  5e                   pop esi
// 00849b62  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetSize@CXTPRibbonBarControlQuickAccessPopup@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
