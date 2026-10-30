// roc 2009-06 00780510  unit: CXTPStatusBar  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00780510
//
// 00780510  53                   push ebx
// 00780511  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00780515  57                   push edi
// 00780516  8bf9                 mov edi, ecx
// 00780518  85db                 test ebx, ebx
// 0078051a  7507                 jne 0x780523
// 0078051c  5f                   pop edi
// 0078051d  33c0                 xor eax, eax
// 0078051f  5b                   pop ebx
// 00780520  c20800               ret 8
// 00780523  55                   push ebp
// 00780524  56                   push esi
// 00780525  33f6                 xor esi, esi
// 00780527  56                   push esi
// 00780528  e803feffff           call 0x780330
// 0078052d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00780531  85c0                 test eax, eax
// 00780533  7c31                 jl 0x780566
// 00780535  50                   push eax
// 00780536  8bcf                 mov ecx, edi
// 00780538  e863fdffff           call 0x7802a0
// 0078053d  8d7830               lea edi, [eax + 0x30]
// 00780540  8bcf                 mov ecx, edi
// 00780542  ff1554fb8900         call dword ptr [0x89fb54]
// 00780548  8bf0                 mov esi, eax
// 0078054a  3bf3                 cmp esi, ebx
// 0078054c  7e03                 jle 0x780551
// 0078054e  8d73ff               lea esi, [ebx - 1]
// 00780551  8bcf                 mov ecx, edi
// 00780553  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00780559  56                   push esi
// 0078055a  50                   push eax
// 0078055b  56                   push esi
// 0078055c  55                   push ebp
// 0078055d  ff1590e98900         call dword ptr [0x89e990]
// 00780563  83c410               add esp, 0x10
// 00780566  c6042e00             mov byte ptr [esi + ebp], 0
// 0078056a  8d4601               lea eax, [esi + 1]
// 0078056d  5e                   pop esi
// 0078056e  5d                   pop ebp
// 0078056f  5f                   pop edi
// 00780570  5b                   pop ebx
// 00780571  c20800               ret 8
// copied from an identical function in another client (function ?OnGetText@CXTPStatusBar@@IAEJIJ@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp