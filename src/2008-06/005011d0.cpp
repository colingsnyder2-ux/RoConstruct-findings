// roc 2008-06 005011d0  unit: boost::bad_lexical_cast  size: 558 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005011d0
//
// 005011d0  6aff                 push -1
// 005011d2  68e1b27c00           push 0x7cb2e1
// 005011d7  64a100000000         mov eax, dword ptr fs:[0]
// 005011dd  50                   push eax
// 005011de  64892500000000       mov dword ptr fs:[0], esp
// 005011e5  83ec5c               sub esp, 0x5c
// 005011e8  56                   push esi
// 005011e9  33f6                 xor esi, esi
// 005011eb  89742408             mov dword ptr [esp + 8], esi
// 005011ef  803d8aee960000       cmp byte ptr [0x96ee8a], 0
// 005011f6  7409                 je 0x501201
// 005011f8  803d8bee960000       cmp byte ptr [0x96ee8b], 0
// 005011ff  7512                 jne 0x501213
// 00501201  803d88ee960000       cmp byte ptr [0x96ee88], 0
// 00501208  741f                 je 0x501229
// 0050120a  803d89ee960000       cmp byte ptr [0x96ee89], 0
// 00501211  7416                 je 0x501229
// 00501213  d90534c48100         fld dword ptr [0x81c434]
// 00501219  5e                   pop esi
// 0050121a  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0050121e  64890d00000000       mov dword ptr fs:[0], ecx
// 00501225  83c468               add esp, 0x68
// 00501228  c3                   ret 
// 00501229  53                   push ebx
// 0050122a  68e8728200           push 0x8272e8
// 0050122f  8d4c2430             lea ecx, [esp + 0x30]
// 00501233  ff1558248000         call dword ptr [0x802458]
// 00501239  8d44242c             lea eax, [esp + 0x2c]
// 0050123d  bb01000000           mov ebx, 1
// 00501242  50                   push eax
// 00501243  89742470             mov dword ptr [esp + 0x70], esi
// 00501247  895c2410             mov dword ptr [esp + 0x10], ebx
// 0050124b  e810fef6ff           call 0x471060
// 00501250  83c404               add esp, 4
// 00501253  84c0                 test al, al
// 00501255  7532                 jne 0x501289
// 00501257  68d0728200           push 0x8272d0
// 0050125c  8d4c2414             lea ecx, [esp + 0x14]
// 00501260  ff1558248000         call dword ptr [0x802458]
// 00501266  895c246c             mov dword ptr [esp + 0x6c], ebx
// 0050126a  8d4c2410             lea ecx, [esp + 0x10]
// 0050126e  bb03000000           mov ebx, 3
// 00501273  51                   push ecx
// 00501274  895c2410             mov dword ptr [esp + 0x10], ebx
// 00501278  e8e3fdf6ff           call 0x471060
// 0050127d  83c404               add esp, 4
// 00501280  c644240b00           mov byte ptr [esp + 0xb], 0
// 00501285  84c0                 test al, al
// 00501287  7405                 je 0x50128e
// 00501289  c644240b01           mov byte ptr [esp + 0xb], 1
// 0050128e  8974246c             mov dword ptr [esp + 0x6c], esi
// 00501292  f6c302               test bl, 2
// 00501295  7411                 je 0x5012a8
// 00501297  83e3fd               and ebx, 0xfffffffd
// 0050129a  8d4c2410             lea ecx, [esp + 0x10]
// 0050129e  895c240c             mov dword ptr [esp + 0xc], ebx
// 005012a2  ff1568248000         call dword ptr [0x802468]
// 005012a8  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 005012b0  f6c301               test bl, 1
// 005012b3  740d                 je 0x5012c2
// 005012b5  8d4c242c             lea ecx, [esp + 0x2c]
// 005012b9  83e3fe               and ebx, 0xfffffffe
// 005012bc  ff1568248000         call dword ptr [0x802468]
// 005012c2  807c240b00           cmp byte ptr [esp + 0xb], 0
// 005012c7  7417                 je 0x5012e0
// 005012c9  d90534c48100         fld dword ptr [0x81c434]
// 005012cf  5b                   pop ebx
// 005012d0  5e                   pop esi
// 005012d1  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005012d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005012dc  83c468               add esp, 0x68
// 005012df  c3                   ret 
// 005012e0  68b4728200           push 0x8272b4
// 005012e5  8d4c2414             lea ecx, [esp + 0x14]
// 005012e9  ff1558248000         call dword ptr [0x802458]
// 005012ef  8d542410             lea edx, [esp + 0x10]
// 005012f3  be02000000           mov esi, 2
// 005012f8  83cb04               or ebx, 4
// 005012fb  52                   push edx
// 005012fc  89742470             mov dword ptr [esp + 0x70], esi
// 00501300  895c2410             mov dword ptr [esp + 0x10], ebx
// 00501304  e857fdf6ff           call 0x471060
// 00501309  83c404               add esp, 4
// 0050130c  84c0                 test al, al
// 0050130e  7534                 jne 0x501344
// 00501310  689c728200           push 0x82729c
// 00501315  8d4c2430             lea ecx, [esp + 0x30]
// 00501319  ff1558248000         call dword ptr [0x802458]
// 0050131f  8d44242c             lea eax, [esp + 0x2c]
// 00501323  83cb08               or ebx, 8
// 00501326  50                   push eax
// 00501327  c744247003000000     mov dword ptr [esp + 0x70], 3
// 0050132f  895c2410             mov dword ptr [esp + 0x10], ebx
// 00501333  e828fdf6ff           call 0x471060
// 00501338  83c404               add esp, 4
// 0050133b  c644240b00           mov byte ptr [esp + 0xb], 0
// 00501340  84c0                 test al, al
// 00501342  7405                 je 0x501349
// 00501344  c644240b01           mov byte ptr [esp + 0xb], 1
// 00501349  8974246c             mov dword ptr [esp + 0x6c], esi
// 0050134d  f6c308               test bl, 8
// 00501350  7411                 je 0x501363
// 00501352  83e3f7               and ebx, 0xfffffff7
// 00501355  8d4c242c             lea ecx, [esp + 0x2c]
// 00501359  895c240c             mov dword ptr [esp + 0xc], ebx
// 0050135d  ff1568248000         call dword ptr [0x802468]
// 00501363  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 0050136b  f6c304               test bl, 4
// 0050136e  740a                 je 0x50137a
// 00501370  8d4c2410             lea ecx, [esp + 0x10]
// 00501374  ff1568248000         call dword ptr [0x802468]
// 0050137a  807c240b00           cmp byte ptr [esp + 0xb], 0
// 0050137f  7417                 je 0x501398
// 00501381  d90598728200         fld dword ptr [0x827298]
// 00501387  5b                   pop ebx
// 00501388  5e                   pop esi
// 00501389  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0050138d  64890d00000000       mov dword ptr fs:[0], ecx
// 00501394  83c468               add esp, 0x68
// 00501397  c3                   ret 
// 00501398  687c728200           push 0x82727c
// 0050139d  8d4c244c             lea ecx, [esp + 0x4c]
// 005013a1  ff1558248000         call dword ptr [0x802458]
// 005013a7  8d4c2448             lea ecx, [esp + 0x48]
// 005013ab  51                   push ecx
// 005013ac  c744247004000000     mov dword ptr [esp + 0x70], 4
// 005013b4  e8a7fcf6ff           call 0x471060
// 005013b9  83c404               add esp, 4
// 005013bc  8d4c2448             lea ecx, [esp + 0x48]
// 005013c0  8ad8                 mov bl, al
// 005013c2  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 005013ca  ff1568248000         call dword ptr [0x802468]
// 005013d0  84db                 test bl, bl
// 005013d2  7417                 je 0x5013eb
// 005013d4  d90578728200         fld dword ptr [0x827278]
// 005013da  5b                   pop ebx
// 005013db  5e                   pop esi
// 005013dc  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005013e0  64890d00000000       mov dword ptr fs:[0], ecx
// 005013e7  83c468               add esp, 0x68
// 005013ea  c3                   ret 
// 005013eb  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005013ef  d9e8                 fld1 
// 005013f1  5b                   pop ebx
// 005013f2  5e                   pop esi
// 005013f3  64890d00000000       mov dword ptr fs:[0], ecx
// 005013fa  83c468               add esp, 0x68
// 005013fd  c3                   ret 
// library openrbx-client/Rendering\RenderLib\Profiler.cpp (function ?getShaderModel@Render@RBX@@YAMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Profiler.cpp
