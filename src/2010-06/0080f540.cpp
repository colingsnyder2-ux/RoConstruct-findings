// roc 2010-06 0080f540  unit: CXTPStatusBar  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080f540
//
// 0080f540  53                   push ebx
// 0080f541  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0080f545  57                   push edi
// 0080f546  8bf9                 mov edi, ecx
// 0080f548  85db                 test ebx, ebx
// 0080f54a  7507                 jne 0x80f553
// 0080f54c  5f                   pop edi
// 0080f54d  33c0                 xor eax, eax
// 0080f54f  5b                   pop ebx
// 0080f550  c20800               ret 8
// 0080f553  55                   push ebp
// 0080f554  56                   push esi
// 0080f555  33f6                 xor esi, esi
// 0080f557  56                   push esi
// 0080f558  e803feffff           call 0x80f360
// 0080f55d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0080f561  85c0                 test eax, eax
// 0080f563  7c31                 jl 0x80f596
// 0080f565  50                   push eax
// 0080f566  8bcf                 mov ecx, edi
// 0080f568  e863fdffff           call 0x80f2d0
// 0080f56d  8d7830               lea edi, [eax + 0x30]
// 0080f570  8bcf                 mov ecx, edi
// 0080f572  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0080f578  8bf0                 mov esi, eax
// 0080f57a  3bf3                 cmp esi, ebx
// 0080f57c  7e03                 jle 0x80f581
// 0080f57e  8d73ff               lea esi, [ebx - 1]
// 0080f581  8bcf                 mov ecx, edi
// 0080f583  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0080f589  56                   push esi
// 0080f58a  50                   push eax
// 0080f58b  56                   push esi
// 0080f58c  55                   push ebp
// 0080f58d  ff15c4a89e00         call dword ptr [0x9ea8c4]
// 0080f593  83c410               add esp, 0x10
// 0080f596  c6042e00             mov byte ptr [esi + ebp], 0
// 0080f59a  8d4601               lea eax, [esi + 1]
// 0080f59d  5e                   pop esi
// 0080f59e  5d                   pop ebp
// 0080f59f  5f                   pop edi
// 0080f5a0  5b                   pop ebx
// 0080f5a1  c20800               ret 8
// copied from an identical function in another client (function ?OnGetText@CXTPStatusBar@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp