// roc 2007-08 004f9f80  unit: G3D::Lighting  size: 954 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f9f80
//
// 004f9f80  83ec14               sub esp, 0x14
// 004f9f83  53                   push ebx
// 004f9f84  55                   push ebp
// 004f9f85  56                   push esi
// 004f9f86  8b742424             mov esi, dword ptr [esp + 0x24]
// 004f9f8a  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f9f8d  57                   push edi
// 004f9f8e  8bf9                 mov edi, ecx
// 004f9f90  33db                 xor ebx, ebx
// 004f9f92  8d8fb8010000         lea ecx, [edi + 0x1b8]
// 004f9f98  89442420             mov dword ptr [esp + 0x20], eax
// 004f9f9c  895c2414             mov dword ptr [esp + 0x14], ebx
// 004f9fa0  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004f9fa4  895c2418             mov dword ptr [esp + 0x18], ebx
// 004f9fa8  e813e20000           call 0x5081c0
// 004f9fad  53                   push ebx
// 004f9fae  8bce                 mov ecx, esi
// 004f9fb0  e84b9cf7ff           call 0x473c00
// 004f9fb5  53                   push ebx
// 004f9fb6  8bce                 mov ecx, esi
// 004f9fb8  e89398f7ff           call 0x473850
// 004f9fbd  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 004f9fc1  55                   push ebp
// 004f9fc2  8bce                 mov ecx, esi
// 004f9fc4  e847daf7ff           call 0x477a10
// 004f9fc9  385f70               cmp byte ptr [edi + 0x70], bl
// 004f9fcc  740d                 je 0x4f9fdb
// 004f9fce  56                   push esi
// 004f9fcf  e8bc450000           call 0x4fe590
// 004f9fd4  8bc8                 mov ecx, eax
// 004f9fd6  e8a54d2100           call 0x70ed80
// 004f9fdb  8d8ff0020000         lea ecx, [edi + 0x2f0]
// 004f9fe1  51                   push ecx
// 004f9fe2  8bce                 mov ecx, esi
// 004f9fe4  e8d798f7ff           call 0x4738c0
// 004f9fe9  399fec020000         cmp dword ptr [edi + 0x2ec], ebx
// 004f9fef  7409                 je 0x4f9ffa
// 004f9ff1  385f6f               cmp byte ptr [edi + 0x6f], bl
// 004f9ff4  7404                 je 0x4f9ffa
// 004f9ff6  32c0                 xor al, al
// 004f9ff8  eb05                 jmp 0x4f9fff
// 004f9ffa  b801000000           mov eax, 1
// 004f9fff  bb01000000           mov ebx, 1
// 004fa004  53                   push ebx
// 004fa005  53                   push ebx
// 004fa006  50                   push eax
// 004fa007  8bce                 mov ecx, esi
// 004fa009  e802f7f7ff           call 0x479710
// 004fa00e  8b8fec020000         mov ecx, dword ptr [edi + 0x2ec]
// 004fa014  85c9                 test ecx, ecx
// 004fa016  7413                 je 0x4fa02b
// 004fa018  807f6f00             cmp byte ptr [edi + 0x6f], 0
// 004fa01c  740d                 je 0x4fa02b
// 004fa01e  8d97f8030000         lea edx, [edi + 0x3f8]
// 004fa024  52                   push edx
// 004fa025  56                   push esi
// 004fa026  e8759d2300           call 0x733da0
// 004fa02b  55                   push ebp
// 004fa02c  56                   push esi
// 004fa02d  8bcf                 mov ecx, edi
// 004fa02f  e88cfeffff           call 0x4f9ec0
// 004fa034  015e78               add dword ptr [esi + 0x78], ebx
// 004fa037  399e4c040000         cmp dword ptr [esi + 0x44c], ebx
// 004fa03d  7414                 je 0x4fa053
// 004fa03f  68011d0000           push 0x1d01
// 004fa044  899e4c040000         mov dword ptr [esi + 0x44c], ebx
// 004fa04a  ff1504eb7700         call dword ptr [0x77eb04]
// 004fa050  015e70               add dword ptr [esi + 0x70], ebx
// 004fa053  6a03                 push 3
// 004fa055  8bce                 mov ecx, esi
// 004fa057  e87499f7ff           call 0x4739d0
// 004fa05c  dd0528b17800         fld qword ptr [0x78b128]
// 004fa062  83ec08               sub esp, 8
// 004fa065  dd1c24               fstp qword ptr [esp]
// 004fa068  6a00                 push 0
// 004fa06a  8bce                 mov ecx, esi
// 004fa06c  e85f9cf7ff           call 0x473cd0
// 004fa071  8bce                 mov ecx, esi
// 004fa073  e818f6f7ff           call 0x479690
// 004fa078  0fb6476e             movzx eax, byte ptr [edi + 0x6e]
// 004fa07c  50                   push eax
// 004fa07d  56                   push esi
// 004fa07e  8bcf                 mov ecx, edi
// 004fa080  e83bd8ffff           call 0x4f78c0
// 004fa085  6a00                 push 0
// 004fa087  53                   push ebx
// 004fa088  56                   push esi
// 004fa089  e812baffff           call 0x4f5aa0
// 004fa08e  83c40c               add esp, 0xc
// 004fa091  80bfe802000000       cmp byte ptr [edi + 0x2e8], 0
// 004fa098  7514                 jne 0x4fa0ae
// 004fa09a  8b6e3c               mov ebp, dword ptr [esi + 0x3c]
// 004fa09d  56                   push esi
// 004fa09e  8bcf                 mov ecx, edi
// 004fa0a0  e8ebdaffff           call 0x4f7b90
// 004fa0a5  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004fa0a8  2bc5                 sub eax, ebp
// 004fa0aa  8944241c             mov dword ptr [esp + 0x1c], eax
// 004fa0ae  56                   push esi
// 004fa0af  e85c9cffff           call 0x4f3d10
// 004fa0b4  83c404               add esp, 4
// 004fa0b7  8bce                 mov ecx, esi
// 004fa0b9  e812f6f7ff           call 0x4796d0
// 004fa0be  807f6c00             cmp byte ptr [edi + 0x6c], 0
// 004fa0c2  0f843b010000         je 0x4fa203
// 004fa0c8  8bce                 mov ecx, esi
// 004fa0ca  e8c1f5f7ff           call 0x479690
// 004fa0cf  015e78               add dword ptr [esi + 0x78], ebx
// 004fa0d2  80bee103000000       cmp byte ptr [esi + 0x3e1], 0
// 004fa0d9  7412                 je 0x4fa0ed
// 004fa0db  015e70               add dword ptr [esi + 0x70], ebx
// 004fa0de  6a00                 push 0
// 004fa0e0  ff1508eb7700         call dword ptr [0x77eb08]
// 004fa0e6  c686e103000000       mov byte ptr [esi + 0x3e1], 0
// 004fa0ed  6a03                 push 3
// 004fa0ef  8bce                 mov ecx, esi
// 004fa0f1  e8da98f7ff           call 0x4739d0
// 004fa0f6  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 004fa0fc  33c0                 xor eax, eax
// 004fa0fe  394150               cmp dword ptr [ecx + 0x50], eax
// 004fa101  89442428             mov dword ptr [esp + 0x28], eax
// 004fa105  0f8eef000000         jle 0x4fa1fa
// 004fa10b  89442410             mov dword ptr [esp + 0x10], eax
// 004fa10f  90                   nop 
// 004fa110  837c242800           cmp dword ptr [esp + 0x28], 0
// 004fa115  7e0c                 jle 0x4fa123
// 004fa117  53                   push ebx
// 004fa118  6a00                 push 0
// 004fa11a  6a00                 push 0
// 004fa11c  8bce                 mov ecx, esi
// 004fa11e  e8edf5f7ff           call 0x479710
// 004fa123  8b9784000000         mov edx, dword ptr [edi + 0x84]
// 004fa129  8b6a4c               mov ebp, dword ptr [edx + 0x4c]
// 004fa12c  036c2410             add ebp, dword ptr [esp + 0x10]
// 004fa130  807f6d00             cmp byte ptr [edi + 0x6d], 0
// 004fa134  7420                 je 0x4fa156
// 004fa136  6a02                 push 2
// 004fa138  6a02                 push 2
// 004fa13a  6a02                 push 2
// 004fa13c  8bce                 mov ecx, esi
// 004fa13e  e82da0f7ff           call 0x474170
// 004fa143  8bce                 mov ecx, esi
// 004fa145  e826a3f7ff           call 0x474470
// 004fa14a  55                   push ebp
// 004fa14b  6a00                 push 0
// 004fa14d  8bce                 mov ecx, esi
// 004fa14f  e80cb7f7ff           call 0x475860
// 004fa154  eb09                 jmp 0x4fa15f
// 004fa156  53                   push ebx
// 004fa157  56                   push esi
// 004fa158  8bcf                 mov ecx, edi
// 004fa15a  e861d7ffff           call 0x4f78c0
// 004fa15f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004fa163  8b5e3c               mov ebx, dword ptr [esi + 0x3c]
// 004fa166  55                   push ebp
// 004fa167  50                   push eax
// 004fa168  56                   push esi
// 004fa169  8bcf                 mov ecx, edi
// 004fa16b  e800f4ffff           call 0x4f9570
// 004fa170  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004fa173  2bcb                 sub ecx, ebx
// 004fa175  014c2414             add dword ptr [esp + 0x14], ecx
// 004fa179  80bfe802000000       cmp byte ptr [edi + 0x2e8], 0
// 004fa180  7554                 jne 0x4fa1d6
// 004fa182  6a00                 push 0
// 004fa184  8bce                 mov ecx, esi
// 004fa186  e8759af7ff           call 0x473c00
// 004fa18b  6a03                 push 3
// 004fa18d  8bce                 mov ecx, esi
// 004fa18f  e83c98f7ff           call 0x4739d0
// 004fa194  d9ee                 fldz 
// 004fa196  8b6e3c               mov ebp, dword ptr [esi + 0x3c]
// 004fa199  83ec08               sub esp, 8
// 004fa19c  8bce                 mov ecx, esi
// 004fa19e  dd1c24               fstp qword ptr [esp]
// 004fa1a1  e85aa8f7ff           call 0x474a00
// 004fa1a6  6a05                 push 5
// 004fa1a8  8bce                 mov ecx, esi
// 004fa1aa  e8819af7ff           call 0x473c30
// 004fa1af  6a00                 push 0
// 004fa1b1  6a01                 push 1
// 004fa1b3  56                   push esi
// 004fa1b4  e8e7b8ffff           call 0x4f5aa0
// 004fa1b9  83c40c               add esp, 0xc
// 004fa1bc  56                   push esi
// 004fa1bd  8bcf                 mov ecx, edi
// 004fa1bf  e8ccd9ffff           call 0x4f7b90
// 004fa1c4  56                   push esi
// 004fa1c5  e8469bffff           call 0x4f3d10
// 004fa1ca  8b563c               mov edx, dword ptr [esi + 0x3c]
// 004fa1cd  2bd5                 sub edx, ebp
// 004fa1cf  83c404               add esp, 4
// 004fa1d2  01542418             add dword ptr [esp + 0x18], edx
// 004fa1d6  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fa1da  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 004fa1e0  8344241050           add dword ptr [esp + 0x10], 0x50
// 004fa1e5  83c001               add eax, 1
// 004fa1e8  3b4150               cmp eax, dword ptr [ecx + 0x50]
// 004fa1eb  89442428             mov dword ptr [esp + 0x28], eax
// 004fa1ef  bb01000000           mov ebx, 1
// 004fa1f4  0f8c16ffffff         jl 0x4fa110
// 004fa1fa  8bce                 mov ecx, esi
// 004fa1fc  e8cff4f7ff           call 0x4796d0
// 004fa201  eb14                 jmp 0x4fa217
// 004fa203  8daf10020000         lea ebp, [edi + 0x210]
// 004fa209  8bcd                 mov ecx, ebp
// 004fa20b  e8b0df0000           call 0x5081c0
// 004fa210  8bcd                 mov ecx, ebp
// 004fa212  e8b9e00000           call 0x5082d0
// 004fa217  8bce                 mov ecx, esi
// 004fa219  e872f4f7ff           call 0x479690
// 004fa21e  6a00                 push 0
// 004fa220  53                   push ebx
// 004fa221  56                   push esi
// 004fa222  e879b8ffff           call 0x4f5aa0
// 004fa227  83c40c               add esp, 0xc
// 004fa22a  56                   push esi
// 004fa22b  8bcf                 mov ecx, edi
// 004fa22d  e88edfffff           call 0x4f81c0
// 004fa232  56                   push esi
// 004fa233  e8d89affff           call 0x4f3d10
// 004fa238  83c404               add esp, 4
// 004fa23b  8bce                 mov ecx, esi
// 004fa23d  e88ef4f7ff           call 0x4796d0
// 004fa242  8bce                 mov ecx, esi
// 004fa244  e847f4f7ff           call 0x479690
// 004fa249  53                   push ebx
// 004fa24a  56                   push esi
// 004fa24b  8bcf                 mov ecx, edi
// 004fa24d  e86ed6ffff           call 0x4f78c0
// 004fa252  6a00                 push 0
// 004fa254  53                   push ebx
// 004fa255  56                   push esi
// 004fa256  e845b8ffff           call 0x4f5aa0
// 004fa25b  83c40c               add esp, 0xc
// 004fa25e  56                   push esi
// 004fa25f  8bcf                 mov ecx, edi
// 004fa261  e89ad9ffff           call 0x4f7c00
// 004fa266  56                   push esi
// 004fa267  e8a49affff           call 0x4f3d10
// 004fa26c  83c404               add esp, 4
// 004fa26f  8bce                 mov ecx, esi
// 004fa271  e85af4f7ff           call 0x4796d0
// 004fa276  8b8fec020000         mov ecx, dword ptr [edi + 0x2ec]
// 004fa27c  85c9                 test ecx, ecx
// 004fa27e  7413                 je 0x4fa293
// 004fa280  807f6f00             cmp byte ptr [edi + 0x6f], 0
// 004fa284  740d                 je 0x4fa293
// 004fa286  8d97f8030000         lea edx, [edi + 0x3f8]
// 004fa28c  52                   push edx
// 004fa28d  56                   push esi
// 004fa28e  e8ad8f2300           call 0x733240
// 004fa293  807f7200             cmp byte ptr [edi + 0x72], 0
// 004fa297  740d                 je 0x4fa2a6
// 004fa299  56                   push esi
// 004fa29a  e881430000           call 0x4fe620
// 004fa29f  8bc8                 mov ecx, eax
// 004fa2a1  e8fa4b0000           call 0x4feea0
// 004fa2a6  807f7000             cmp byte ptr [edi + 0x70], 0
// 004fa2aa  740d                 je 0x4fa2b9
// 004fa2ac  56                   push esi
// 004fa2ad  e8de420000           call 0x4fe590
// 004fa2b2  8bc8                 mov ecx, eax
// 004fa2b4  e827742300           call 0x7316e0
// 004fa2b9  8d8fb8010000         lea ecx, [edi + 0x1b8]
// 004fa2bf  e80ce00000           call 0x5082d0
// 004fa2c4  8bce                 mov ecx, esi
// 004fa2c6  e845acf7ff           call 0x474f10
// 004fa2cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004fa2cf  8b542418             mov edx, dword ptr [esp + 0x18]
// 004fa2d3  8987d4020000         mov dword ptr [edi + 0x2d4], eax
// 004fa2d9  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004fa2dc  2b442420             sub eax, dword ptr [esp + 0x20]
// 004fa2e0  898fdc020000         mov dword ptr [edi + 0x2dc], ecx
// 004fa2e6  8987d8020000         mov dword ptr [edi + 0x2d8], eax
// 004fa2ec  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fa2f0  8bce                 mov ecx, esi
// 004fa2f2  8997e0020000         mov dword ptr [edi + 0x2e0], edx
// 004fa2f8  8987e4020000         mov dword ptr [edi + 0x2e4], eax
// 004fa2fe  e8fd34f2ff           call 0x41d800
// 004fa303  8bce                 mov ecx, esi
// 004fa305  8987c4020000         mov dword ptr [edi + 0x2c4], eax
// 004fa30b  e810acf7ff           call 0x474f20
// 004fa310  8bce                 mov ecx, esi
// 004fa312  8987cc020000         mov dword ptr [edi + 0x2cc], eax
// 004fa318  e833cf0500           call 0x557250
// 004fa31d  8bce                 mov ecx, esi
// 004fa31f  8987c0020000         mov dword ptr [edi + 0x2c0], eax
// 004fa325  e816cf0500           call 0x557240
// 004fa32a  8987c8020000         mov dword ptr [edi + 0x2c8], eax
// 004fa330  5f                   pop edi
// 004fa331  5e                   pop esi
// 004fa332  5d                   pop ebp
// 004fa333  5b                   pop ebx
// 004fa334  83c414               add esp, 0x14
// 004fa337  c20800               ret 8
// library rbxgs-render/RenderScene.cpp (function ?render@RenderScene@Render@RBX@@QAEXPAVRenderDevice@G3D@@ABVGCamera@5@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
