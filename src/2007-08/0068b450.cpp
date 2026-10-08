// from server: 100% by auto
// roc 2007-08 0068b450  unit: CXTPTabClientWnd  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b450
//
// 0068b450  56                   push esi
// 0068b451  8bf1                 mov esi, ecx
// 0068b453  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0068b45a  741c                 je 0x68b478
// 0068b45c  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0068b462  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0068b468  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0068b46c  8b11                 mov edx, dword ptr [ecx]
// 0068b46e  8b5238               mov edx, dword ptr [edx + 0x38]
// 0068b471  6a01                 push 1
// 0068b473  50                   push eax
// 0068b474  6a00                 push 0
// 0068b476  ffd2                 call edx
// 0068b478  8bce                 mov ecx, esi
// 0068b47a  e8bf4dfaff           call 0x63023e
// 0068b47f  5e                   pop esi
// 0068b480  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?OnNcCalcSize@CXTPTabClientWnd@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
