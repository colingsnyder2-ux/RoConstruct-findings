// roc 2009-06 00780580  unit: CXTPStatusBar  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00780580
//
// 00780580  56                   push esi
// 00780581  57                   push edi
// 00780582  33ff                 xor edi, edi
// 00780584  57                   push edi
// 00780585  8bf1                 mov esi, ecx
// 00780587  e8a4fdffff           call 0x780330
// 0078058c  85c0                 test eax, eax
// 0078058e  7c16                 jl 0x7805a6
// 00780590  50                   push eax
// 00780591  8bce                 mov ecx, esi
// 00780593  e808fdffff           call 0x7802a0
// 00780598  8d4830               lea ecx, [eax + 0x30]
// 0078059b  ff1554fb8900         call dword ptr [0x89fb54]
// 007805a1  5f                   pop edi
// 007805a2  5e                   pop esi
// 007805a3  c20800               ret 8
// 007805a6  8bc7                 mov eax, edi
// 007805a8  5f                   pop edi
// 007805a9  5e                   pop esi
// 007805aa  c20800               ret 8
// copied from an identical function in another client (function ?OnGetTextLength@CXTPStatusBar@@IAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp