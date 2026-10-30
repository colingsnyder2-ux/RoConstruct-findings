// roc 2011-06 008a6c70  unit: CXTPRibbonBarControlQuickAccessPopup  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6c70
//
// 008a6c70  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 008a6c76  56                   push esi
// 008a6c77  e8d43ef7ff           call 0x81ab50
// 008a6c7c  8bb014010000         mov esi, dword ptr [eax + 0x114]
// 008a6c82  8bce                 mov ecx, esi
// 008a6c84  6bc90d               imul ecx, ecx, 0xd
// 008a6c87  b8e9a28b2e           mov eax, 0x2e8ba2e9
// 008a6c8c  f7e9                 imul ecx
// 008a6c8e  8b442408             mov eax, dword ptr [esp + 8]
// 008a6c92  c1fa02               sar edx, 2
// 008a6c95  8bca                 mov ecx, edx
// 008a6c97  c1e91f               shr ecx, 0x1f
// 008a6c9a  03ca                 add ecx, edx
// 008a6c9c  897004               mov dword ptr [eax + 4], esi
// 008a6c9f  8908                 mov dword ptr [eax], ecx
// 008a6ca1  5e                   pop esi
// 008a6ca2  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetSize@CXTPRibbonBarControlQuickAccessPopup@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
