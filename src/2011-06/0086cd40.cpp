// roc 2011-06 0086cd40  unit: CXTPStatusBar  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086cd40
//
// 0086cd40  56                   push esi
// 0086cd41  57                   push edi
// 0086cd42  33ff                 xor edi, edi
// 0086cd44  57                   push edi
// 0086cd45  8bf1                 mov esi, ecx
// 0086cd47  e8a4fdffff           call 0x86caf0
// 0086cd4c  85c0                 test eax, eax
// 0086cd4e  7c16                 jl 0x86cd66
// 0086cd50  50                   push eax
// 0086cd51  8bce                 mov ecx, esi
// 0086cd53  e808fdffff           call 0x86ca60
// 0086cd58  8d4830               lea ecx, [eax + 0x30]
// 0086cd5b  ff15a826a400         call dword ptr [0xa426a8]
// 0086cd61  5f                   pop edi
// 0086cd62  5e                   pop esi
// 0086cd63  c20800               ret 8
// 0086cd66  8bc7                 mov eax, edi
// 0086cd68  5f                   pop edi
// 0086cd69  5e                   pop esi
// 0086cd6a  c20800               ret 8
// copied from an identical function in another client (function ?OnGetTextLength@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp