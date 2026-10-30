// roc 2012-06 00a1f120  unit: CXTPRibbonBarControlQuickAccessPopup  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1f120
//
// 00a1f120  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00a1f126  56                   push esi
// 00a1f127  e8843cf7ff           call 0x992db0
// 00a1f12c  8bb014010000         mov esi, dword ptr [eax + 0x114]
// 00a1f132  8bce                 mov ecx, esi
// 00a1f134  6bc90d               imul ecx, ecx, 0xd
// 00a1f137  b8e9a28b2e           mov eax, 0x2e8ba2e9
// 00a1f13c  f7e9                 imul ecx
// 00a1f13e  8b442408             mov eax, dword ptr [esp + 8]
// 00a1f142  c1fa02               sar edx, 2
// 00a1f145  8bca                 mov ecx, edx
// 00a1f147  c1e91f               shr ecx, 0x1f
// 00a1f14a  03ca                 add ecx, edx
// 00a1f14c  897004               mov dword ptr [eax + 4], esi
// 00a1f14f  8908                 mov dword ptr [eax], ecx
// 00a1f151  5e                   pop esi
// 00a1f152  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetSize@CXTPRibbonBarControlQuickAccessPopup@@UAE?AVCSize@@PAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
