// roc 2009-12 0079a190  unit: lua_exception  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079a190
//
// 0079a190  56                   push esi
// 0079a191  8b742408             mov esi, dword ptr [esp + 8]
// 0079a195  57                   push edi
// 0079a196  8d44240c             lea eax, [esp + 0xc]
// 0079a19a  50                   push eax
// 0079a19b  56                   push esi
// 0079a19c  ff15f8b89800         call dword ptr [0x98b8f8]
// 0079a1a2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079a1a6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0079a1aa  83c408               add esp, 8
// 0079a1ad  dd1f                 fstp qword ptr [edi]
// 0079a1af  3bc6                 cmp eax, esi
// 0079a1b1  7505                 jne 0x79a1b8
// 0079a1b3  5f                   pop edi
// 0079a1b4  33c0                 xor eax, eax
// 0079a1b6  5e                   pop esi
// 0079a1b7  c3                   ret 
// 0079a1b8  8a08                 mov cl, byte ptr [eax]
// 0079a1ba  80f978               cmp cl, 0x78
// 0079a1bd  7405                 je 0x79a1c4
// 0079a1bf  80f958               cmp cl, 0x58
// 0079a1c2  7529                 jne 0x79a1ed
// 0079a1c4  6a10                 push 0x10
// 0079a1c6  8d4c2410             lea ecx, [esp + 0x10]
// 0079a1ca  51                   push ecx
// 0079a1cb  56                   push esi
// 0079a1cc  ff152cb99800         call dword ptr [0x98b92c]
// 0079a1d2  83c40c               add esp, 0xc
// 0079a1d5  89442410             mov dword ptr [esp + 0x10], eax
// 0079a1d9  db442410             fild dword ptr [esp + 0x10]
// 0079a1dd  85c0                 test eax, eax
// 0079a1df  7d06                 jge 0x79a1e7
// 0079a1e1  dc05d0449a00         fadd qword ptr [0x9a44d0]
// 0079a1e7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0079a1eb  dd1f                 fstp qword ptr [edi]
// 0079a1ed  8a00                 mov al, byte ptr [eax]
// 0079a1ef  84c0                 test al, al
// 0079a1f1  7508                 jne 0x79a1fb
// 0079a1f3  5f                   pop edi
// 0079a1f4  b801000000           mov eax, 1
// 0079a1f9  5e                   pop esi
// 0079a1fa  c3                   ret 
// 0079a1fb  8b3524b89800         mov esi, dword ptr [0x98b824]
// 0079a201  0fb6d0               movzx edx, al
// 0079a204  52                   push edx
// 0079a205  ffd6                 call esi
// 0079a207  83c404               add esp, 4
// 0079a20a  85c0                 test eax, eax
// 0079a20c  7418                 je 0x79a226
// 0079a20e  8bff                 mov edi, edi
// 0079a210  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0079a214  40                   inc eax
// 0079a215  8944240c             mov dword ptr [esp + 0xc], eax
// 0079a219  0fb600               movzx eax, byte ptr [eax]
// 0079a21c  50                   push eax
// 0079a21d  ffd6                 call esi
// 0079a21f  83c404               add esp, 4
// 0079a222  85c0                 test eax, eax
// 0079a224  75ea                 jne 0x79a210
// 0079a226  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0079a22a  33c0                 xor eax, eax
// 0079a22c  3801                 cmp byte ptr [ecx], al
// 0079a22e  5f                   pop edi
// 0079a22f  0f94c0               sete al
// 0079a232  5e                   pop esi
// 0079a233  c3                   ret 
// copied from an identical function in another client (function _luaO_str2d)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lobject.c