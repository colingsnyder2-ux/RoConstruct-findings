// roc 2011-06 0086ccd0  unit: CXTPStatusBar  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086ccd0
//
// 0086ccd0  53                   push ebx
// 0086ccd1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0086ccd5  57                   push edi
// 0086ccd6  8bf9                 mov edi, ecx
// 0086ccd8  85db                 test ebx, ebx
// 0086ccda  7507                 jne 0x86cce3
// 0086ccdc  5f                   pop edi
// 0086ccdd  33c0                 xor eax, eax
// 0086ccdf  5b                   pop ebx
// 0086cce0  c20800               ret 8
// 0086cce3  55                   push ebp
// 0086cce4  56                   push esi
// 0086cce5  33f6                 xor esi, esi
// 0086cce7  56                   push esi
// 0086cce8  e803feffff           call 0x86caf0
// 0086cced  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0086ccf1  85c0                 test eax, eax
// 0086ccf3  7c31                 jl 0x86cd26
// 0086ccf5  50                   push eax
// 0086ccf6  8bcf                 mov ecx, edi
// 0086ccf8  e863fdffff           call 0x86ca60
// 0086ccfd  8d7830               lea edi, [eax + 0x30]
// 0086cd00  8bcf                 mov ecx, edi
// 0086cd02  ff15a826a400         call dword ptr [0xa426a8]
// 0086cd08  8bf0                 mov esi, eax
// 0086cd0a  3bf3                 cmp esi, ebx
// 0086cd0c  7e03                 jle 0x86cd11
// 0086cd0e  8d73ff               lea esi, [ebx - 1]
// 0086cd11  8bcf                 mov ecx, edi
// 0086cd13  ff15c82da400         call dword ptr [0xa42dc8]
// 0086cd19  56                   push esi
// 0086cd1a  50                   push eax
// 0086cd1b  56                   push esi
// 0086cd1c  55                   push ebp
// 0086cd1d  ff153c0aa400         call dword ptr [0xa40a3c]
// 0086cd23  83c410               add esp, 0x10
// 0086cd26  c6042e00             mov byte ptr [esi + ebp], 0
// 0086cd2a  8d4601               lea eax, [esi + 1]
// 0086cd2d  5e                   pop esi
// 0086cd2e  5d                   pop ebp
// 0086cd2f  5f                   pop edi
// 0086cd30  5b                   pop ebx
// 0086cd31  c20800               ret 8
// copied from an identical function in another client (function ?OnGetText@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp