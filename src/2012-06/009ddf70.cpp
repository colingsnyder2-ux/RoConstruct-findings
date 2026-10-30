// roc 2012-06 009ddf70  unit: CXTPTabClientWnd  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ddf70
//
// 009ddf70  56                   push esi
// 009ddf71  8bf1                 mov esi, ecx
// 009ddf73  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 009ddf7a  741c                 je 0x9ddf98
// 009ddf7c  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 009ddf82  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 009ddf88  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009ddf8c  8b11                 mov edx, dword ptr [ecx]
// 009ddf8e  8b5238               mov edx, dword ptr [edx + 0x38]
// 009ddf91  6a01                 push 1
// 009ddf93  50                   push eax
// 009ddf94  6a00                 push 0
// 009ddf96  ffd2                 call edx
// 009ddf98  8bce                 mov ecx, esi
// 009ddf9a  e83f47faff           call 0x9826de
// 009ddf9f  5e                   pop esi
// 009ddfa0  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNcCalcSize@CXTPTabClientWnd@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
