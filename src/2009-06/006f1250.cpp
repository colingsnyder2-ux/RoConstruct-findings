// roc 2009-06 006f1250  unit: seg_006f0000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f1250
//
// 006f1250  83ec50               sub esp, 0x50
// 006f1253  53                   push ebx
// 006f1254  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 006f1258  8b4340               mov eax, dword ptr [ebx + 0x40]
// 006f125b  56                   push esi
// 006f125c  6a50                 push 0x50
// 006f125e  83c010               add eax, 0x10
// 006f1261  50                   push eax
// 006f1262  8d4c2410             lea ecx, [esp + 0x10]
// 006f1266  51                   push ecx
// 006f1267  e8547efdff           call 0x6c90c0
// 006f126c  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 006f1270  8b4304               mov eax, dword ptr [ebx + 4]
// 006f1273  52                   push edx
// 006f1274  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006f1277  50                   push eax
// 006f1278  8d4c241c             lea ecx, [esp + 0x1c]
// 006f127c  51                   push ecx
// 006f127d  68c4c28e00           push 0x8ec2c4
// 006f1282  52                   push edx
// 006f1283  e8187efdff           call 0x6c90a0
// 006f1288  8bf0                 mov esi, eax
// 006f128a  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 006f1291  83c420               add esp, 0x20
// 006f1294  85c0                 test eax, eax
// 006f1296  743c                 je 0x6f12d4
// 006f1298  3d1c010000           cmp eax, 0x11c
// 006f129d  7c18                 jl 0x6f12b7
// 006f129f  3d1e010000           cmp eax, 0x11e
// 006f12a4  7f11                 jg 0x6f12b7
// 006f12a6  6a00                 push 0
// 006f12a8  e883feffff           call 0x6f1130
// 006f12ad  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 006f12b0  8b00                 mov eax, dword ptr [eax]
// 006f12b2  83c404               add esp, 4
// 006f12b5  eb0a                 jmp 0x6f12c1
// 006f12b7  50                   push eax
// 006f12b8  53                   push ebx
// 006f12b9  e832ffffff           call 0x6f11f0
// 006f12be  83c408               add esp, 8
// 006f12c1  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 006f12c4  50                   push eax
// 006f12c5  56                   push esi
// 006f12c6  68ece18e00           push 0x8ee1ec
// 006f12cb  51                   push ecx
// 006f12cc  e8cf7dfdff           call 0x6c90a0
// 006f12d1  83c410               add esp, 0x10
// 006f12d4  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006f12d7  6a03                 push 3
// 006f12d9  52                   push edx
// 006f12da  e80120fdff           call 0x6c32e0
// 006f12df  83c408               add esp, 8
// 006f12e2  5e                   pop esi
// 006f12e3  5b                   pop ebx
// 006f12e4  83c450               add esp, 0x50
// 006f12e7  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_lexerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
