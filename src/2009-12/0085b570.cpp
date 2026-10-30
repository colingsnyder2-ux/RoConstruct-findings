// roc 2009-12 0085b570  unit: CXTPStatusBar  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b570
//
// 0085b570  53                   push ebx
// 0085b571  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0085b575  57                   push edi
// 0085b576  8bf9                 mov edi, ecx
// 0085b578  85db                 test ebx, ebx
// 0085b57a  7507                 jne 0x85b583
// 0085b57c  5f                   pop edi
// 0085b57d  33c0                 xor eax, eax
// 0085b57f  5b                   pop ebx
// 0085b580  c20800               ret 8
// 0085b583  55                   push ebp
// 0085b584  56                   push esi
// 0085b585  33f6                 xor esi, esi
// 0085b587  56                   push esi
// 0085b588  e803feffff           call 0x85b390
// 0085b58d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0085b591  85c0                 test eax, eax
// 0085b593  7c31                 jl 0x85b5c6
// 0085b595  50                   push eax
// 0085b596  8bcf                 mov ecx, edi
// 0085b598  e863fdffff           call 0x85b300
// 0085b59d  8d7830               lea edi, [eax + 0x30]
// 0085b5a0  8bcf                 mov ecx, edi
// 0085b5a2  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0085b5a8  8bf0                 mov esi, eax
// 0085b5aa  3bf3                 cmp esi, ebx
// 0085b5ac  7e03                 jle 0x85b5b1
// 0085b5ae  8d73ff               lea esi, [ebx - 1]
// 0085b5b1  8bcf                 mov ecx, edi
// 0085b5b3  ff1580de9800         call dword ptr [0x98de80]
// 0085b5b9  56                   push esi
// 0085b5ba  50                   push eax
// 0085b5bb  56                   push esi
// 0085b5bc  55                   push ebp
// 0085b5bd  ff157cb79800         call dword ptr [0x98b77c]
// 0085b5c3  83c410               add esp, 0x10
// 0085b5c6  c6042e00             mov byte ptr [esi + ebp], 0
// 0085b5ca  8d4601               lea eax, [esi + 1]
// 0085b5cd  5e                   pop esi
// 0085b5ce  5d                   pop ebp
// 0085b5cf  5f                   pop edi
// 0085b5d0  5b                   pop ebx
// 0085b5d1  c20800               ret 8
// copied from an identical function in another client (function ?OnGetText@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp