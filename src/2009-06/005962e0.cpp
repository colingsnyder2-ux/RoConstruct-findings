// roc 2009-06 005962e0  unit: seg_00590000  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005962e0
//
// 005962e0  81ec04020000         sub esp, 0x204
// 005962e6  55                   push ebp
// 005962e7  8bac2410020000       mov ebp, dword ptr [esp + 0x210]
// 005962ee  56                   push esi
// 005962ef  8bb42410020000       mov esi, dword ptr [esp + 0x210]
// 005962f6  8b4668               mov eax, dword ptr [esi + 0x68]
// 005962f9  a801                 test al, 1
// 005962fb  0f85ac000000         jne 0x5963ad
// 00596301  685c298d00           push 0x8d295c
// 00596306  56                   push esi
// 00596307  e8547effff           call 0x58e160
// 0059630c  83c408               add esp, 8
// 0059630f  0fb78618010000       movzx eax, word ptr [esi + 0x118]
// 00596316  53                   push ebx
// 00596317  57                   push edi
// 00596318  8bbc2420020000       mov edi, dword ptr [esp + 0x220]
// 0059631f  8bdf                 mov ebx, edi
// 00596321  d1eb                 shr ebx, 1
// 00596323  3bd8                 cmp ebx, eax
// 00596325  0f850b010000         jne 0x596436
// 0059632b  81fb00010000         cmp ebx, 0x100
// 00596331  0f87ff000000         ja 0x596436
// 00596337  33ff                 xor edi, edi
// 00596339  85db                 test ebx, ebx
// 0059633b  7643                 jbe 0x596380
// 0059633d  8d4900               lea ecx, [ecx]
// 00596340  6a02                 push 2
// 00596342  8d4c2414             lea ecx, [esp + 0x14]
// 00596346  51                   push ecx
// 00596347  56                   push esi
// 00596348  e8b329ffff           call 0x588d00
// 0059634d  6a02                 push 2
// 0059634f  8d542420             lea edx, [esp + 0x20]
// 00596353  52                   push edx
// 00596354  56                   push esi
// 00596355  e866b5feff           call 0x5818c0
// 0059635a  668b442428           mov ax, word ptr [esp + 0x28]
// 0059635f  660fb6c8             movzx cx, al
// 00596363  ba00010000           mov edx, 0x100
// 00596368  660fafca             imul cx, dx
// 0059636c  660fb6c4             movzx ax, ah
// 00596370  6603c8               add cx, ax
// 00596373  66894c7c2c           mov word ptr [esp + edi*2 + 0x2c], cx
// 00596378  47                   inc edi
// 00596379  83c418               add esp, 0x18
// 0059637c  3bfb                 cmp edi, ebx
// 0059637e  72c0                 jb 0x596340
// 00596380  6a00                 push 0
// 00596382  56                   push esi
// 00596383  e858e8ffff           call 0x594be0
// 00596388  83c408               add esp, 8
// 0059638b  85c0                 test eax, eax
// 0059638d  0f85b8000000         jne 0x59644b
// 00596393  8d4c2414             lea ecx, [esp + 0x14]
// 00596397  51                   push ecx
// 00596398  55                   push ebp
// 00596399  56                   push esi
// 0059639a  e881a4feff           call 0x580820
// 0059639f  83c40c               add esp, 0xc
// 005963a2  5f                   pop edi
// 005963a3  5b                   pop ebx
// 005963a4  5e                   pop esi
// 005963a5  5d                   pop ebp
// 005963a6  81c404020000         add esp, 0x204
// 005963ac  c3                   ret 
// 005963ad  a804                 test al, 4
// 005963af  7425                 je 0x5963d6
// 005963b1  6844298d00           push 0x8d2944
// 005963b6  56                   push esi
// 005963b7  e8547effff           call 0x58e210
// 005963bc  8b842420020000       mov eax, dword ptr [esp + 0x220]
// 005963c3  50                   push eax
// 005963c4  56                   push esi
// 005963c5  e816e8ffff           call 0x594be0
// 005963ca  83c410               add esp, 0x10
// 005963cd  5e                   pop esi
// 005963ce  5d                   pop ebp
// 005963cf  81c404020000         add esp, 0x204
// 005963d5  c3                   ret 
// 005963d6  a802                 test al, 2
// 005963d8  7525                 jne 0x5963ff
// 005963da  6828298d00           push 0x8d2928
// 005963df  56                   push esi
// 005963e0  e82b7effff           call 0x58e210
// 005963e5  8b8c2420020000       mov ecx, dword ptr [esp + 0x220]
// 005963ec  51                   push ecx
// 005963ed  56                   push esi
// 005963ee  e8ede7ffff           call 0x594be0
// 005963f3  83c410               add esp, 0x10
// 005963f6  5e                   pop esi
// 005963f7  5d                   pop ebp
// 005963f8  81c404020000         add esp, 0x204
// 005963fe  c3                   ret 
// 005963ff  85ed                 test ebp, ebp
// 00596401  0f8408ffffff         je 0x59630f
// 00596407  f6450840             test byte ptr [ebp + 8], 0x40
// 0059640b  0f84fefeffff         je 0x59630f
// 00596411  6810298d00           push 0x8d2910
// 00596416  56                   push esi
// 00596417  e8f47dffff           call 0x58e210
// 0059641c  8b942420020000       mov edx, dword ptr [esp + 0x220]
// 00596423  52                   push edx
// 00596424  56                   push esi
// 00596425  e8b6e7ffff           call 0x594be0
// 0059642a  83c410               add esp, 0x10
// 0059642d  5e                   pop esi
// 0059642e  5d                   pop ebp
// 0059642f  81c404020000         add esp, 0x204
// 00596435  c3                   ret 
// 00596436  68f4288d00           push 0x8d28f4
// 0059643b  56                   push esi
// 0059643c  e8cf7dffff           call 0x58e210
// 00596441  57                   push edi
// 00596442  56                   push esi
// 00596443  e898e7ffff           call 0x594be0
// 00596448  83c410               add esp, 0x10
// 0059644b  5f                   pop edi
// 0059644c  5b                   pop ebx
// 0059644d  5e                   pop esi
// 0059644e  5d                   pop ebp
// 0059644f  81c404020000         add esp, 0x204
// 00596455  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_hIST)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
