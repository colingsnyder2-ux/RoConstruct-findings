// roc 2010-06 0080f5b0  unit: CXTPStatusBar  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080f5b0
//
// 0080f5b0  56                   push esi
// 0080f5b1  57                   push edi
// 0080f5b2  33ff                 xor edi, edi
// 0080f5b4  57                   push edi
// 0080f5b5  8bf1                 mov esi, ecx
// 0080f5b7  e8a4fdffff           call 0x80f360
// 0080f5bc  85c0                 test eax, eax
// 0080f5be  7c16                 jl 0x80f5d6
// 0080f5c0  50                   push eax
// 0080f5c1  8bce                 mov ecx, esi
// 0080f5c3  e808fdffff           call 0x80f2d0
// 0080f5c8  8d4830               lea ecx, [eax + 0x30]
// 0080f5cb  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0080f5d1  5f                   pop edi
// 0080f5d2  5e                   pop esi
// 0080f5d3  c20800               ret 8
// 0080f5d6  8bc7                 mov eax, edi
// 0080f5d8  5f                   pop edi
// 0080f5d9  5e                   pop esi
// 0080f5da  c20800               ret 8
// copied from an identical function in another client (function ?OnGetTextLength@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp