// roc 2010-06 0080a6a0  unit: CXTPTabClientWnd  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080a6a0
//
// 0080a6a0  56                   push esi
// 0080a6a1  8bf1                 mov esi, ecx
// 0080a6a3  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0080a6aa  741c                 je 0x80a6c8
// 0080a6ac  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0080a6b2  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0080a6b8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080a6bc  8b11                 mov edx, dword ptr [ecx]
// 0080a6be  8b5238               mov edx, dword ptr [edx + 0x38]
// 0080a6c1  6a01                 push 1
// 0080a6c3  50                   push eax
// 0080a6c4  6a00                 push 0
// 0080a6c6  ffd2                 call edx
// 0080a6c8  8bce                 mov ecx, esi
// 0080a6ca  e8a1d8f9ff           call 0x7a7f70
// 0080a6cf  5e                   pop esi
// 0080a6d0  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNcCalcSize@CXTPTabClientWnd@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
