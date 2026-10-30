// roc 2009-12 00895a70  unit: CXTPRibbonBarControlQuickAccessPopup  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895a70
//
// 00895a70  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00895a76  56                   push esi
// 00895a77  e814ebf6ff           call 0x804590
// 00895a7c  8bb014010000         mov esi, dword ptr [eax + 0x114]
// 00895a82  8bce                 mov ecx, esi
// 00895a84  6bc90d               imul ecx, ecx, 0xd
// 00895a87  b8e9a28b2e           mov eax, 0x2e8ba2e9
// 00895a8c  f7e9                 imul ecx
// 00895a8e  8b442408             mov eax, dword ptr [esp + 8]
// 00895a92  c1fa02               sar edx, 2
// 00895a95  8bca                 mov ecx, edx
// 00895a97  c1e91f               shr ecx, 0x1f
// 00895a9a  03ca                 add ecx, edx
// 00895a9c  897004               mov dword ptr [eax + 4], esi
// 00895a9f  8908                 mov dword ptr [eax], ecx
// 00895aa1  5e                   pop esi
// 00895aa2  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetSize@CXTPRibbonBarControlQuickAccessPopup@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
