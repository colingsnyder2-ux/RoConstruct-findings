// roc 2008-06 00664170  unit: RBX::FilterStairs  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00664170
//
// 00664170  83ec50               sub esp, 0x50
// 00664173  53                   push ebx
// 00664174  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00664178  8b4340               mov eax, dword ptr [ebx + 0x40]
// 0066417b  56                   push esi
// 0066417c  6a50                 push 0x50
// 0066417e  83c010               add eax, 0x10
// 00664181  50                   push eax
// 00664182  8d4c2410             lea ecx, [esp + 0x10]
// 00664186  51                   push ecx
// 00664187  e854e9fbff           call 0x622ae0
// 0066418c  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00664190  8b4304               mov eax, dword ptr [ebx + 4]
// 00664193  52                   push edx
// 00664194  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00664197  50                   push eax
// 00664198  8d4c241c             lea ecx, [esp + 0x1c]
// 0066419c  51                   push ecx
// 0066419d  68104a8400           push 0x844a10
// 006641a2  52                   push edx
// 006641a3  e818e9fbff           call 0x622ac0
// 006641a8  8bf0                 mov esi, eax
// 006641aa  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 006641b1  83c420               add esp, 0x20
// 006641b4  85c0                 test eax, eax
// 006641b6  743c                 je 0x6641f4
// 006641b8  3d1c010000           cmp eax, 0x11c
// 006641bd  7c18                 jl 0x6641d7
// 006641bf  3d1e010000           cmp eax, 0x11e
// 006641c4  7f11                 jg 0x6641d7
// 006641c6  6a00                 push 0
// 006641c8  e883feffff           call 0x664050
// 006641cd  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 006641d0  8b00                 mov eax, dword ptr [eax]
// 006641d2  83c404               add esp, 4
// 006641d5  eb0a                 jmp 0x6641e1
// 006641d7  50                   push eax
// 006641d8  53                   push ebx
// 006641d9  e832ffffff           call 0x664110
// 006641de  83c408               add esp, 8
// 006641e1  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 006641e4  50                   push eax
// 006641e5  56                   push esi
// 006641e6  68acca8400           push 0x84caac
// 006641eb  51                   push ecx
// 006641ec  e8cfe8fbff           call 0x622ac0
// 006641f1  83c410               add esp, 0x10
// 006641f4  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006641f7  6a03                 push 3
// 006641f9  52                   push edx
// 006641fa  e851defbff           call 0x622050
// 006641ff  83c408               add esp, 8
// 00664202  5e                   pop esi
// 00664203  5b                   pop ebx
// 00664204  83c450               add esp, 0x50
// 00664207  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_lexerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
