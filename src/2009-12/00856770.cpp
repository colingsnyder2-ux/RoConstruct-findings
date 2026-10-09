// roc 2009-12 00856770  unit: CXTPTabClientWnd  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856770
//
// 00856770  56                   push esi
// 00856771  8bf1                 mov esi, ecx
// 00856773  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0085677a  741c                 je 0x856798
// 0085677c  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00856782  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 00856788  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085678c  8b11                 mov edx, dword ptr [ecx]
// 0085678e  8b5238               mov edx, dword ptr [edx + 0x38]
// 00856791  6a01                 push 1
// 00856793  50                   push eax
// 00856794  6a00                 push 0
// 00856796  ffd2                 call edx
// 00856798  8bce                 mov ecx, esi
// 0085679a  e891d6f9ff           call 0x7f3e30
// 0085679f  5e                   pop esi
// 008567a0  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNcCalcSize@CXTPTabClientWnd@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
