// roc 2009-12 0085b5e0  unit: CXTPStatusBar  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b5e0
//
// 0085b5e0  56                   push esi
// 0085b5e1  57                   push edi
// 0085b5e2  33ff                 xor edi, edi
// 0085b5e4  57                   push edi
// 0085b5e5  8bf1                 mov esi, ecx
// 0085b5e7  e8a4fdffff           call 0x85b390
// 0085b5ec  85c0                 test eax, eax
// 0085b5ee  7c16                 jl 0x85b606
// 0085b5f0  50                   push eax
// 0085b5f1  8bce                 mov ecx, esi
// 0085b5f3  e808fdffff           call 0x85b300
// 0085b5f8  8d4830               lea ecx, [eax + 0x30]
// 0085b5fb  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0085b601  5f                   pop edi
// 0085b602  5e                   pop esi
// 0085b603  c20800               ret 8
// 0085b606  8bc7                 mov eax, edi
// 0085b608  5f                   pop edi
// 0085b609  5e                   pop esi
// 0085b60a  c20800               ret 8
// copied from an identical function in another client (function ?OnGetTextLength@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp