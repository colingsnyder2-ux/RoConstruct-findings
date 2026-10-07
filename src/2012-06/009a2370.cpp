// roc 2012-06 009a2370  unit: CXTPCommandBars  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2370
//
// 009a2370  8b442408             mov eax, dword ptr [esp + 8]
// 009a2374  83f803               cmp eax, 3
// 009a2377  7717                 ja 0x9a2390
// 009a2379  8b848190000000       mov eax, dword ptr [ecx + eax*4 + 0x90]
// 009a2380  50                   push eax
// 009a2381  8b442408             mov eax, dword ptr [esp + 8]
// 009a2385  6a00                 push 0
// 009a2387  50                   push eax
// 009a2388  e883ffffff           call 0x9a2310
// 009a238d  c20800               ret 8
// 009a2390  33c0                 xor eax, eax
// 009a2392  50                   push eax
// 009a2393  50                   push eax
// 009a2394  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009a2398  50                   push eax
// 009a2399  e872ffffff           call 0x9a2310
// 009a239e  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?DockCommandBar@CXTPCommandBars@@QAEHPAVCXTPToolBar@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
