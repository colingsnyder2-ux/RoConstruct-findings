// roc 2011-06 00865970  unit: CXTPTabClientWnd  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865970
//
// 00865970  56                   push esi
// 00865971  8bf1                 mov esi, ecx
// 00865973  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0086597a  741c                 je 0x865998
// 0086597c  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00865982  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00865988  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086598c  8b11                 mov edx, dword ptr [ecx]
// 0086598e  8b5238               mov edx, dword ptr [edx + 0x38]
// 00865991  6a01                 push 1
// 00865993  50                   push eax
// 00865994  6a00                 push 0
// 00865996  ffd2                 call edx
// 00865998  8bce                 mov ecx, esi
// 0086599a  e88f4cfaff           call 0x80a62e
// 0086599f  5e                   pop esi
// 008659a0  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNcCalcSize@CXTPTabClientWnd@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
