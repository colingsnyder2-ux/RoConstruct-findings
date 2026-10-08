// roc 2009-06 0077b710  unit: CXTPTabClientWnd  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077b710
//
// 0077b710  56                   push esi
// 0077b711  8bf1                 mov esi, ecx
// 0077b713  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0077b71a  741c                 je 0x77b738
// 0077b71c  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0077b722  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0077b728  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077b72c  8b11                 mov edx, dword ptr [ecx]
// 0077b72e  8b5238               mov edx, dword ptr [edx + 0x38]
// 0077b731  6a01                 push 1
// 0077b733  50                   push eax
// 0077b734  6a00                 push 0
// 0077b736  ffd2                 call edx
// 0077b738  8bce                 mov ecx, esi
// 0077b73a  e8c9d8f9ff           call 0x719008
// 0077b73f  5e                   pop esi
// 0077b740  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNcCalcSize@CXTPTabClientWnd@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
