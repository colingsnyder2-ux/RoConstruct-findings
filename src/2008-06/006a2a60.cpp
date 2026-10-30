// from server: 100% by auto
// roc 2008-06 006a2a60  unit: CXTPCommandBars  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2a60
//
// 006a2a60  8b442408             mov eax, dword ptr [esp + 8]
// 006a2a64  83f803               cmp eax, 3
// 006a2a67  7717                 ja 0x6a2a80
// 006a2a69  8b848190000000       mov eax, dword ptr [ecx + eax*4 + 0x90]
// 006a2a70  50                   push eax
// 006a2a71  8b442408             mov eax, dword ptr [esp + 8]
// 006a2a75  6a00                 push 0
// 006a2a77  50                   push eax
// 006a2a78  e883ffffff           call 0x6a2a00
// 006a2a7d  c20800               ret 8
// 006a2a80  33c0                 xor eax, eax
// 006a2a82  50                   push eax
// 006a2a83  50                   push eax
// 006a2a84  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a2a88  50                   push eax
// 006a2a89  e872ffffff           call 0x6a2a00
// 006a2a8e  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?DockCommandBar@CXTPCommandBars@@QAEHPAVCXTPToolBar@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
