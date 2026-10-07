// roc 2011-06 00829d40  unit: CXTPCommandBars  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829d40
//
// 00829d40  8b442408             mov eax, dword ptr [esp + 8]
// 00829d44  83f803               cmp eax, 3
// 00829d47  7717                 ja 0x829d60
// 00829d49  8b848190000000       mov eax, dword ptr [ecx + eax*4 + 0x90]
// 00829d50  50                   push eax
// 00829d51  8b442408             mov eax, dword ptr [esp + 8]
// 00829d55  6a00                 push 0
// 00829d57  50                   push eax
// 00829d58  e883ffffff           call 0x829ce0
// 00829d5d  c20800               ret 8
// 00829d60  33c0                 xor eax, eax
// 00829d62  50                   push eax
// 00829d63  50                   push eax
// 00829d64  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00829d68  50                   push eax
// 00829d69  e872ffffff           call 0x829ce0
// 00829d6e  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?DockCommandBar@CXTPCommandBars@@QAEHPAVCXTPToolBar@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
