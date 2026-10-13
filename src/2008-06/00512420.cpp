// roc 2008-06 00512420  unit: G3D::GCamera  size: 361 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00512420
//
// 00512420  6aff                 push -1
// 00512422  68aac47c00           push 0x7cc4aa
// 00512427  64a100000000         mov eax, dword ptr fs:[0]
// 0051242d  50                   push eax
// 0051242e  64892500000000       mov dword ptr fs:[0], esp
// 00512435  83ec08               sub esp, 8
// 00512438  56                   push esi
// 00512439  57                   push edi
// 0051243a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0051243e  33f6                 xor esi, esi
// 00512440  6816b78000           push 0x80b716
// 00512445  8bcf                 mov ecx, edi
// 00512447  8974241c             mov dword ptr [esp + 0x1c], esi
// 0051244b  8974240c             mov dword ptr [esp + 0xc], esi
// 0051244f  ff1558248000         call dword ptr [0x802458]
// 00512455  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00512458  89742418             mov dword ptr [esp + 0x18], esi
// 0051245c  c744240801000000     mov dword ptr [esp + 8], 1
// 00512464  3bc6                 cmp eax, esi
// 00512466  0f8693000000         jbe 0x5124ff
// 0051246c  55                   push ebp
// 0051246d  8d6b04               lea ebp, [ebx + 4]
// 00512470  837b1810             cmp dword ptr [ebx + 0x18], 0x10
// 00512474  7205                 jb 0x51247b
// 00512476  8b4500               mov eax, dword ptr [ebp]
// 00512479  eb02                 jmp 0x51247d
// 0051247b  8bc5                 mov eax, ebp
// 0051247d  8a0430               mov al, byte ptr [eax + esi]
// 00512480  88442410             mov byte ptr [esp + 0x10], al
// 00512484  0fbec0               movsx eax, al
// 00512487  83f85c               cmp eax, 0x5c
// 0051248a  7759                 ja 0x5124e5
// 0051248c  0fb6802c255100       movzx eax, byte ptr [eax + 0x51252c]
// 00512493  ff248514255100       jmp dword ptr [eax*4 + 0x512514]
// 0051249a  68f8878200           push 0x8287f8
// 0051249f  8bcf                 mov ecx, edi
// 005124a1  ff1548248000         call dword ptr [0x802448]
// 005124a7  eb49                 jmp 0x5124f2
// 005124a9  68f4878200           push 0x8287f4
// 005124ae  8bcf                 mov ecx, edi
// 005124b0  ff1548248000         call dword ptr [0x802448]
// 005124b6  eb3a                 jmp 0x5124f2
// 005124b8  68f0878200           push 0x8287f0
// 005124bd  8bcf                 mov ecx, edi
// 005124bf  ff1548248000         call dword ptr [0x802448]
// 005124c5  eb2b                 jmp 0x5124f2
// 005124c7  68ec878200           push 0x8287ec
// 005124cc  8bcf                 mov ecx, edi
// 005124ce  ff1548248000         call dword ptr [0x802448]
// 005124d4  eb1c                 jmp 0x5124f2
// 005124d6  68e8878200           push 0x8287e8
// 005124db  8bcf                 mov ecx, edi
// 005124dd  ff1548248000         call dword ptr [0x802448]
// 005124e3  eb0d                 jmp 0x5124f2
// 005124e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005124e9  51                   push ecx
// 005124ea  8bcf                 mov ecx, edi
// 005124ec  ff15b4248000         call dword ptr [0x8024b4]
// 005124f2  8b4314               mov eax, dword ptr [ebx + 0x14]
// 005124f5  46                   inc esi
// 005124f6  3bc6                 cmp eax, esi
// 005124f8  0f8772ffffff         ja 0x512470
// 005124fe  5d                   pop ebp
// 005124ff  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00512503  8bc7                 mov eax, edi
// 00512505  5f                   pop edi
// 00512506  5e                   pop esi
// 00512507  64890d00000000       mov dword ptr fs:[0], ecx
// 0051250e  83c414               add esp, 0x14
// 00512511  c3                   ret 
// 00512512  8bff                 mov edi, edi
// 00512514  9a245100c72451       lcall 0x5124, 0xc7005124
// 0051251b  00b8245100a9         add byte ptr [eax - 0x56ffaedc], bh
// 00512521  2451                 and al, 0x51
// 00512523  00d6                 add dh, dl
// 00512525  2451                 and al, 0x51
// 00512527  00e5                 add ch, ah
// 00512529  2451                 and al, 0x51
// 0051252b  0000                 add byte ptr [eax], al
// 0051252d  0505050505           add eax, 0x5050505
// 00512532  0505050102           add eax, 0x2010505
// 00512537  0505030505           add eax, 0x5050305
// 0051253c  0505050505           add eax, 0x5050505
// 00512541  0505050505           add eax, 0x5050505
// 00512546  0505050505           add eax, 0x5050505
// 0051254b  0505050505           add eax, 0x5050505
// 00512550  0505050505           add eax, 0x5050505
// 00512555  0505050505           add eax, 0x5050505
// 0051255a  0505050505           add eax, 0x5050505
// 0051255f  0505050505           add eax, 0x5050505
// 00512564  0505050505           add eax, 0x5050505
// 00512569  0505050505           add eax, 0x5050505
// 0051256e  0505050505           add eax, 0x5050505
// 00512573  0505050505           add eax, 0x5050505
// 00512578  0505050505           add eax, 0x5050505
// 0051257d  0505050505           add eax, 0x5050505
// 00512582  0505050505           add eax, 0x5050505
// library g3d-6.09-rbx2008/G3Dcpp\TextOutput.cpp (function ?escape@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextOutput.cpp
