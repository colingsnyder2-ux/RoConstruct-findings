// roc 2007-03 00613150  unit: seg_00610000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00613150
//
// 00613150  64a100000000         mov eax, dword ptr fs:[0]
// 00613156  6aff                 push -1
// 00613158  68926f7500           push 0x756f92
// 0061315d  50                   push eax
// 0061315e  64892500000000       mov dword ptr fs:[0], esp
// 00613165  83ec44               sub esp, 0x44
// 00613168  57                   push edi
// 00613169  8bf9                 mov edi, ecx
// 0061316b  817f08feffff3f       cmp dword ptr [edi + 8], 0x3ffffffe
// 00613172  7259                 jb 0x6131cd
// 00613174  68903f7800           push 0x783f90
// 00613179  8d4c2408             lea ecx, [esp + 8]
// 0061317d  ff1578e77700         call dword ptr [0x77e778]
// 00613183  8d4c2420             lea ecx, [esp + 0x20]
// 00613187  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0061318f  ff1560e97700         call dword ptr [0x77e960]
// 00613195  8d442404             lea eax, [esp + 4]
// 00613199  50                   push eax
// 0061319a  8d4c2430             lea ecx, [esp + 0x30]
// 0061319e  c644245401           mov byte ptr [esp + 0x54], 1
// 006131a3  c7442424383e7800     mov dword ptr [esp + 0x24], 0x783e38
// 006131ab  ff157ce77700         call dword ptr [0x77e77c]
// 006131b1  6870f78300           push 0x83f770
// 006131b6  8d4c2424             lea ecx, [esp + 0x24]
// 006131ba  51                   push ecx
// 006131bb  c644245800           mov byte ptr [esp + 0x58], 0
// 006131c0  c7442428443e7800     mov dword ptr [esp + 0x28], 0x783e44
// 006131c8  e861be0000           call 0x61f02e
// 006131cd  8b542464             mov edx, dword ptr [esp + 0x64]
// 006131d1  8b4704               mov eax, dword ptr [edi + 4]
// 006131d4  53                   push ebx
// 006131d5  55                   push ebp
// 006131d6  56                   push esi
// 006131d7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 006131db  6a00                 push 0
// 006131dd  52                   push edx
// 006131de  50                   push eax
// 006131df  56                   push esi
// 006131e0  50                   push eax
// 006131e1  e8ca97fdff           call 0x5ec9b0
// 006131e6  8be8                 mov ebp, eax
// 006131e8  8b4704               mov eax, dword ptr [edi + 4]
// 006131eb  bb01000000           mov ebx, 1
// 006131f0  015f08               add dword ptr [edi + 8], ebx
// 006131f3  3bf0                 cmp esi, eax
// 006131f5  7510                 jne 0x613207
// 006131f7  896804               mov dword ptr [eax + 4], ebp
// 006131fa  8b4704               mov eax, dword ptr [edi + 4]
// 006131fd  8928                 mov dword ptr [eax], ebp
// 006131ff  8b4f04               mov ecx, dword ptr [edi + 4]
// 00613202  896908               mov dword ptr [ecx + 8], ebp
// 00613205  eb22                 jmp 0x613229
// 00613207  807c246800           cmp byte ptr [esp + 0x68], 0
// 0061320c  740d                 je 0x61321b
// 0061320e  892e                 mov dword ptr [esi], ebp
// 00613210  8b4704               mov eax, dword ptr [edi + 4]
// 00613213  3b30                 cmp esi, dword ptr [eax]
// 00613215  7512                 jne 0x613229
// 00613217  8928                 mov dword ptr [eax], ebp
// 00613219  eb0e                 jmp 0x613229
// 0061321b  896e08               mov dword ptr [esi + 8], ebp
// 0061321e  8b4704               mov eax, dword ptr [edi + 4]
// 00613221  3b7008               cmp esi, dword ptr [eax + 8]
// 00613224  7503                 jne 0x613229
// 00613226  896808               mov dword ptr [eax + 8], ebp
// 00613229  8b5504               mov edx, dword ptr [ebp + 4]
// 0061322c  807a1000             cmp byte ptr [edx + 0x10], 0
// 00613230  8d4504               lea eax, [ebp + 4]
// 00613233  8bf5                 mov esi, ebp
// 00613235  0f85ea000000         jne 0x613325
// 0061323b  eb03                 jmp 0x613240
// 0061323d  8d4900               lea ecx, [ecx]
// 00613240  8b08                 mov ecx, dword ptr [eax]
// 00613242  8b5104               mov edx, dword ptr [ecx + 4]
// 00613245  3b0a                 cmp ecx, dword ptr [edx]
// 00613247  7551                 jne 0x61329a
// 00613249  8b5208               mov edx, dword ptr [edx + 8]
// 0061324c  807a1000             cmp byte ptr [edx + 0x10], 0
// 00613250  7519                 jne 0x61326b
// 00613252  885910               mov byte ptr [ecx + 0x10], bl
// 00613255  885a10               mov byte ptr [edx + 0x10], bl
// 00613258  8b10                 mov edx, dword ptr [eax]
// 0061325a  8b4a04               mov ecx, dword ptr [edx + 4]
// 0061325d  c6411000             mov byte ptr [ecx + 0x10], 0
// 00613261  8b10                 mov edx, dword ptr [eax]
// 00613263  8b7204               mov esi, dword ptr [edx + 4]
// 00613266  e9aa000000           jmp 0x613315
// 0061326b  3b7108               cmp esi, dword ptr [ecx + 8]
// 0061326e  750a                 jne 0x61327a
// 00613270  8bf1                 mov esi, ecx
// 00613272  56                   push esi
// 00613273  8bcf                 mov ecx, edi
// 00613275  e826feffff           call 0x6130a0
// 0061327a  8b4604               mov eax, dword ptr [esi + 4]
// 0061327d  885810               mov byte ptr [eax + 0x10], bl
// 00613280  8b4e04               mov ecx, dword ptr [esi + 4]
// 00613283  8b5104               mov edx, dword ptr [ecx + 4]
// 00613286  c6421000             mov byte ptr [edx + 0x10], 0
// 0061328a  8b4604               mov eax, dword ptr [esi + 4]
// 0061328d  8b4804               mov ecx, dword ptr [eax + 4]
// 00613290  51                   push ecx
// 00613291  8bcf                 mov ecx, edi
// 00613293  e8688cf9ff           call 0x5abf00
// 00613298  eb7b                 jmp 0x613315
// 0061329a  8b12                 mov edx, dword ptr [edx]
// 0061329c  807a1000             cmp byte ptr [edx + 0x10], 0
// 006132a0  7516                 jne 0x6132b8
// 006132a2  885910               mov byte ptr [ecx + 0x10], bl
// 006132a5  885a10               mov byte ptr [edx + 0x10], bl
// 006132a8  8b10                 mov edx, dword ptr [eax]
// 006132aa  8b4a04               mov ecx, dword ptr [edx + 4]
// 006132ad  c6411000             mov byte ptr [ecx + 0x10], 0
// 006132b1  8b10                 mov edx, dword ptr [eax]
// 006132b3  8b7204               mov esi, dword ptr [edx + 4]
// 006132b6  eb5d                 jmp 0x613315
// 006132b8  3b31                 cmp esi, dword ptr [ecx]
// 006132ba  750a                 jne 0x6132c6
// 006132bc  8bf1                 mov esi, ecx
// 006132be  56                   push esi
// 006132bf  8bcf                 mov ecx, edi
// 006132c1  e83a8cf9ff           call 0x5abf00
// 006132c6  8b4604               mov eax, dword ptr [esi + 4]
// 006132c9  885810               mov byte ptr [eax + 0x10], bl
// 006132cc  8b4e04               mov ecx, dword ptr [esi + 4]
// 006132cf  8b5104               mov edx, dword ptr [ecx + 4]
// 006132d2  c6421000             mov byte ptr [edx + 0x10], 0
// 006132d6  8b4604               mov eax, dword ptr [esi + 4]
// 006132d9  8b4004               mov eax, dword ptr [eax + 4]
// 006132dc  8b4808               mov ecx, dword ptr [eax + 8]
// 006132df  8b11                 mov edx, dword ptr [ecx]
// 006132e1  895008               mov dword ptr [eax + 8], edx
// 006132e4  8b11                 mov edx, dword ptr [ecx]
// 006132e6  807a1100             cmp byte ptr [edx + 0x11], 0
// 006132ea  7503                 jne 0x6132ef
// 006132ec  894204               mov dword ptr [edx + 4], eax
// 006132ef  8b5004               mov edx, dword ptr [eax + 4]
// 006132f2  895104               mov dword ptr [ecx + 4], edx
// 006132f5  8b5704               mov edx, dword ptr [edi + 4]
// 006132f8  3b4204               cmp eax, dword ptr [edx + 4]
// 006132fb  7505                 jne 0x613302
// 006132fd  894a04               mov dword ptr [edx + 4], ecx
// 00613300  eb0e                 jmp 0x613310
// 00613302  8b5004               mov edx, dword ptr [eax + 4]
// 00613305  3b02                 cmp eax, dword ptr [edx]
// 00613307  7504                 jne 0x61330d
// 00613309  890a                 mov dword ptr [edx], ecx
// 0061330b  eb03                 jmp 0x613310
// 0061330d  894a08               mov dword ptr [edx + 8], ecx
// 00613310  8901                 mov dword ptr [ecx], eax
// 00613312  894804               mov dword ptr [eax + 4], ecx
// 00613315  8b4e04               mov ecx, dword ptr [esi + 4]
// 00613318  80791000             cmp byte ptr [ecx + 0x10], 0
// 0061331c  8d4604               lea eax, [esi + 4]
// 0061331f  0f841bffffff         je 0x613240
// 00613325  8b5704               mov edx, dword ptr [edi + 4]
// 00613328  8b4204               mov eax, dword ptr [edx + 4]
// 0061332b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0061332f  885810               mov byte ptr [eax + 0x10], bl
// 00613332  8b442464             mov eax, dword ptr [esp + 0x64]
// 00613336  5e                   pop esi
// 00613337  896804               mov dword ptr [eax + 4], ebp
// 0061333a  5d                   pop ebp
// 0061333b  8938                 mov dword ptr [eax], edi
// 0061333d  5b                   pop ebx
// 0061333e  5f                   pop edi
// 0061333f  64890d00000000       mov dword ptr fs:[0], ecx
// 00613346  83c450               add esp, 0x50
// 00613349  c21000               ret 0x10
// library rbxgs/tool\ToolsArrow.cpp (function ?_Insert@?$_Tree@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVInstance@RBX@@U?$less@PAVInstance@RBX@@@std@@V?$allocator@PAVInstance@RBX@@@4@$0A@@std@@@2@ABQAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
