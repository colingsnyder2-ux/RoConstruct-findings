// roc 2012-06 00a1edb0  unit: CXTPRibbonBar  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1edb0
//
// 00a1edb0  83b91401000000       cmp dword ptr [ecx + 0x114], 0
// 00a1edb7  7509                 jne 0xa1edc2
// 00a1edb9  83b91801000000       cmp dword ptr [ecx + 0x118], 0
// 00a1edc0  7418                 je 0xa1edda
// 00a1edc2  8b9114010000         mov edx, dword ptr [ecx + 0x114]
// 00a1edc8  8b442404             mov eax, dword ptr [esp + 4]
// 00a1edcc  8b8918010000         mov ecx, dword ptr [ecx + 0x118]
// 00a1edd2  8910                 mov dword ptr [eax], edx
// 00a1edd4  894804               mov dword ptr [eax + 4], ecx
// 00a1edd7  c20400               ret 4
// 00a1edda  e8d13ff7ff           call 0x992db0
// 00a1eddf  8bc8                 mov ecx, eax
// 00a1ede1  e82a8cf6ff           call 0x987a10
// 00a1ede6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a1edea  8901                 mov dword ptr [ecx], eax
// 00a1edec  894104               mov dword ptr [ecx + 4], eax
// 00a1edef  8bc1                 mov eax, ecx
// 00a1edf1  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?GetButtonSize@CXTPRibbonBar@@UBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
