// roc 2012-06 009e7cd0  unit: CXTPStatusBar  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e7cd0
//
// 009e7cd0  56                   push esi
// 009e7cd1  57                   push edi
// 009e7cd2  33ff                 xor edi, edi
// 009e7cd4  57                   push edi
// 009e7cd5  8bf1                 mov esi, ecx
// 009e7cd7  e8a4fdffff           call 0x9e7a80
// 009e7cdc  85c0                 test eax, eax
// 009e7cde  7c16                 jl 0x9e7cf6
// 009e7ce0  50                   push eax
// 009e7ce1  8bce                 mov ecx, esi
// 009e7ce3  e808fdffff           call 0x9e79f0
// 009e7ce8  8d4830               lea ecx, [eax + 0x30]
// 009e7ceb  ff155846b200         call dword ptr [0xb24658]
// 009e7cf1  5f                   pop edi
// 009e7cf2  5e                   pop esi
// 009e7cf3  c20800               ret 8
// 009e7cf6  8bc7                 mov eax, edi
// 009e7cf8  5f                   pop edi
// 009e7cf9  5e                   pop esi
// 009e7cfa  c20800               ret 8
// copied from an identical function in another client (function ?OnGetTextLength@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp