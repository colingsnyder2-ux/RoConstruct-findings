// roc 2012-06 009e7c60  unit: CXTPStatusBar  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e7c60
//
// 009e7c60  53                   push ebx
// 009e7c61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009e7c65  57                   push edi
// 009e7c66  8bf9                 mov edi, ecx
// 009e7c68  85db                 test ebx, ebx
// 009e7c6a  7507                 jne 0x9e7c73
// 009e7c6c  5f                   pop edi
// 009e7c6d  33c0                 xor eax, eax
// 009e7c6f  5b                   pop ebx
// 009e7c70  c20800               ret 8
// 009e7c73  55                   push ebp
// 009e7c74  56                   push esi
// 009e7c75  33f6                 xor esi, esi
// 009e7c77  56                   push esi
// 009e7c78  e803feffff           call 0x9e7a80
// 009e7c7d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 009e7c81  85c0                 test eax, eax
// 009e7c83  7c31                 jl 0x9e7cb6
// 009e7c85  50                   push eax
// 009e7c86  8bcf                 mov ecx, edi
// 009e7c88  e863fdffff           call 0x9e79f0
// 009e7c8d  8d7830               lea edi, [eax + 0x30]
// 009e7c90  8bcf                 mov ecx, edi
// 009e7c92  ff155846b200         call dword ptr [0xb24658]
// 009e7c98  8bf0                 mov esi, eax
// 009e7c9a  3bf3                 cmp esi, ebx
// 009e7c9c  7e03                 jle 0x9e7ca1
// 009e7c9e  8d73ff               lea esi, [ebx - 1]
// 009e7ca1  8bcf                 mov ecx, edi
// 009e7ca3  ff159847b200         call dword ptr [0xb24798]
// 009e7ca9  56                   push esi
// 009e7caa  50                   push eax
// 009e7cab  56                   push esi
// 009e7cac  55                   push ebp
// 009e7cad  ff15fc29b200         call dword ptr [0xb229fc]
// 009e7cb3  83c410               add esp, 0x10
// 009e7cb6  c6042e00             mov byte ptr [esi + ebp], 0
// 009e7cba  8d4601               lea eax, [esi + 1]
// 009e7cbd  5e                   pop esi
// 009e7cbe  5d                   pop ebp
// 009e7cbf  5f                   pop edi
// 009e7cc0  5b                   pop ebx
// 009e7cc1  c20800               ret 8
// copied from an identical function in another client (function ?OnGetText@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp