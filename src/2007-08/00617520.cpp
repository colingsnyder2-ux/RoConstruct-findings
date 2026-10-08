// from server: 100% by auto
// roc 2007-08 00617520  unit: seg_00610000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00617520
//
// 00617520  83ec50               sub esp, 0x50
// 00617523  53                   push ebx
// 00617524  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00617528  8b4340               mov eax, dword ptr [ebx + 0x40]
// 0061752b  56                   push esi
// 0061752c  6a50                 push 0x50
// 0061752e  83c010               add eax, 0x10
// 00617531  50                   push eax
// 00617532  8d4c2410             lea ecx, [esp + 0x10]
// 00617536  51                   push ecx
// 00617537  e87479ffff           call 0x60eeb0
// 0061753c  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00617540  8b4304               mov eax, dword ptr [ebx + 4]
// 00617543  52                   push edx
// 00617544  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00617547  50                   push eax
// 00617548  8d4c241c             lea ecx, [esp + 0x1c]
// 0061754c  51                   push ecx
// 0061754d  6878977b00           push 0x7b9778
// 00617552  52                   push edx
// 00617553  e83879ffff           call 0x60ee90
// 00617558  8bf0                 mov esi, eax
// 0061755a  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00617561  83c420               add esp, 0x20
// 00617564  85c0                 test eax, eax
// 00617566  743c                 je 0x6175a4
// 00617568  3d1c010000           cmp eax, 0x11c
// 0061756d  7c18                 jl 0x617587
// 0061756f  3d1e010000           cmp eax, 0x11e
// 00617574  7f11                 jg 0x617587
// 00617576  6a00                 push 0
// 00617578  e883feffff           call 0x617400
// 0061757d  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 00617580  8b00                 mov eax, dword ptr [eax]
// 00617582  83c404               add esp, 4
// 00617585  eb0a                 jmp 0x617591
// 00617587  50                   push eax
// 00617588  53                   push ebx
// 00617589  e832ffffff           call 0x6174c0
// 0061758e  83c408               add esp, 8
// 00617591  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00617594  50                   push eax
// 00617595  56                   push esi
// 00617596  685c397c00           push 0x7c395c
// 0061759b  51                   push ecx
// 0061759c  e8ef78ffff           call 0x60ee90
// 006175a1  83c410               add esp, 0x10
// 006175a4  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006175a7  6a03                 push 3
// 006175a9  52                   push edx
// 006175aa  e871eafaff           call 0x5c6020
// 006175af  83c408               add esp, 8
// 006175b2  5e                   pop esi
// 006175b3  5b                   pop ebx
// 006175b4  83c450               add esp, 0x50
// 006175b7  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_lexerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
