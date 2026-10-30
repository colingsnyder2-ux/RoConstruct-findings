// from server: 100% by auto
// roc 2008-06 00702e00  unit: CXTPTabClientWnd  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702e00
//
// 00702e00  56                   push esi
// 00702e01  8bf1                 mov esi, ecx
// 00702e03  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00702e0a  741c                 je 0x702e28
// 00702e0c  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00702e12  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00702e18  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00702e1c  8b11                 mov edx, dword ptr [ecx]
// 00702e1e  8b5238               mov edx, dword ptr [edx + 0x38]
// 00702e21  6a01                 push 1
// 00702e23  50                   push eax
// 00702e24  6a00                 push 0
// 00702e26  ffd2                 call edx
// 00702e28  8bce                 mov ecx, esi
// 00702e2a  e839def9ff           call 0x6a0c68
// 00702e2f  5e                   pop esi
// 00702e30  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNcCalcSize@CXTPTabClientWnd@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
