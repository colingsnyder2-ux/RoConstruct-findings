// roc 2008-06 00515470  unit: seg_00510000  size: 778 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00515470
//
// 00515470  64a100000000         mov eax, dword ptr fs:[0]
// 00515476  6aff                 push -1
// 00515478  683bc67c00           push 0x7cc63b
// 0051547d  50                   push eax
// 0051547e  64892500000000       mov dword ptr fs:[0], esp
// 00515485  81ece4000000         sub esp, 0xe4
// 0051548b  56                   push esi
// 0051548c  8bb424f8000000       mov esi, dword ptr [esp + 0xf8]
// 00515493  6816b78000           push 0x80b716
// 00515498  56                   push esi
// 00515499  ff156c238000         call dword ptr [0x80236c]
// 0051549f  83c408               add esp, 8
// 005154a2  84c0                 test al, al
// 005154a4  0f85ba020000         jne 0x515764
// 005154aa  55                   push ebp
// 005154ab  57                   push edi
// 005154ac  8d4c2434             lea ecx, [esp + 0x34]
// 005154b0  ff1560248000         call dword ptr [0x802460]
// 005154b6  8b4614               mov eax, dword ptr [esi + 0x14]
// 005154b9  33ed                 xor ebp, ebp
// 005154bb  8d78ff               lea edi, [eax - 1]
// 005154be  89ac24f8000000       mov dword ptr [esp + 0xf8], ebp
// 005154c5  3bf8                 cmp edi, eax
// 005154c7  7606                 jbe 0x5154cf
// 005154c9  ff1590288000         call dword ptr [0x802890]
// 005154cf  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 005154d3  7205                 jb 0x5154da
// 005154d5  8b4604               mov eax, dword ptr [esi + 4]
// 005154d8  eb03                 jmp 0x5154dd
// 005154da  8d4604               lea eax, [esi + 4]
// 005154dd  8a0438               mov al, byte ptr [eax + edi]
// 005154e0  8b3de4238000         mov edi, dword ptr [0x8023e4]
// 005154e6  3c2f                 cmp al, 0x2f
// 005154e8  743b                 je 0x515525
// 005154ea  3c5c                 cmp al, 0x5c
// 005154ec  7437                 je 0x515525
// 005154ee  680c7a8200           push 0x827a0c
// 005154f3  8d442454             lea eax, [esp + 0x54]
// 005154f7  56                   push esi
// 005154f8  50                   push eax
// 005154f9  ffd7                 call edi
// 005154fb  83c40c               add esp, 0xc
// 005154fe  50                   push eax
// 005154ff  8d4c2438             lea ecx, [esp + 0x38]
// 00515503  c68424fc00000001     mov byte ptr [esp + 0xfc], 1
// 0051550b  ff150c248000         call dword ptr [0x80240c]
// 00515511  8d4c2450             lea ecx, [esp + 0x50]
// 00515515  c68424f800000000     mov byte ptr [esp + 0xf8], 0
// 0051551d  ff1568248000         call dword ptr [0x802468]
// 00515523  eb0b                 jmp 0x515530
// 00515525  56                   push esi
// 00515526  8d4c2438             lea ecx, [esp + 0x38]
// 0051552a  ff150c248000         call dword ptr [0x80240c]
// 00515530  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00515534  53                   push ebx
// 00515535  49                   dec ecx
// 00515536  51                   push ecx
// 00515537  55                   push ebp
// 00515538  8d54245c             lea edx, [esp + 0x5c]
// 0051553c  52                   push edx
// 0051553d  8d4c2444             lea ecx, [esp + 0x44]
// 00515541  ff15e0238000         call dword ptr [0x8023e0]
// 00515547  50                   push eax
// 00515548  c684240001000002     mov byte ptr [esp + 0x100], 2
// 00515550  e83bf8ffff           call 0x514d90
// 00515555  83c404               add esp, 4
// 00515558  8d4c2454             lea ecx, [esp + 0x54]
// 0051555c  8ad8                 mov bl, al
// 0051555e  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 00515566  ff1568248000         call dword ptr [0x802468]
// 0051556c  84db                 test bl, bl
// 0051556e  0f85d8010000         jne 0x51574c
// 00515574  8d8c2484000000       lea ecx, [esp + 0x84]
// 0051557b  ff1560248000         call dword ptr [0x802460]
// 00515581  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00515588  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 00515590  ff1560248000         call dword ptr [0x802460]
// 00515596  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0051559d  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 005155a5  ff1560248000         call dword ptr [0x802460]
// 005155ab  896c2414             mov dword ptr [esp + 0x14], ebp
// 005155af  896c2418             mov dword ptr [esp + 0x18], ebp
// 005155b3  896c2410             mov dword ptr [esp + 0x10], ebp
// 005155b7  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 005155be  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 005155c6  ff1560248000         call dword ptr [0x802460]
// 005155cc  8d8424a0000000       lea eax, [esp + 0xa0]
// 005155d3  50                   push eax
// 005155d4  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 005155db  51                   push ecx
// 005155dc  8d542418             lea edx, [esp + 0x18]
// 005155e0  52                   push edx
// 005155e1  8d842490000000       lea eax, [esp + 0x90]
// 005155e8  50                   push eax
// 005155e9  8d4c2448             lea ecx, [esp + 0x48]
// 005155ed  51                   push ecx
// 005155ee  c684241001000007     mov byte ptr [esp + 0x110], 7
// 005155f6  e815f9ffff           call 0x514f10
// 005155fb  688cca8100           push 0x81ca8c
// 00515600  8d94249c000000       lea edx, [esp + 0x9c]
// 00515607  52                   push edx
// 00515608  8d442438             lea eax, [esp + 0x38]
// 0051560c  50                   push eax
// 0051560d  ffd7                 call edi
// 0051560f  83c420               add esp, 0x20
// 00515612  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00515616  c68424fc00000008     mov byte ptr [esp + 0xfc], 8
// 0051561e  0f8eb1000000         jle 0x5156d5
// 00515624  8b3d68238000         mov edi, dword ptr [0x802368]
// 0051562a  33f6                 xor esi, esi
// 0051562c  8d642400             lea esp, [esp]
// 00515630  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00515634  8d040e               lea eax, [esi + ecx]
// 00515637  50                   push eax
// 00515638  8d542458             lea edx, [esp + 0x58]
// 0051563c  680c7a8200           push 0x827a0c
// 00515641  52                   push edx
// 00515642  ffd7                 call edi
// 00515644  83c40c               add esp, 0xc
// 00515647  50                   push eax
// 00515648  8d4c2420             lea ecx, [esp + 0x20]
// 0051564c  c684240001000009     mov byte ptr [esp + 0x100], 9
// 00515654  ff1550248000         call dword ptr [0x802450]
// 0051565a  8d4c2454             lea ecx, [esp + 0x54]
// 0051565e  c68424fc00000008     mov byte ptr [esp + 0xfc], 8
// 00515666  ff1568248000         call dword ptr [0x802468]
// 0051566c  8d44241c             lea eax, [esp + 0x1c]
// 00515670  6816b78000           push 0x80b716
// 00515675  50                   push eax
// 00515676  ff156c238000         call dword ptr [0x80236c]
// 0051567c  83c408               add esp, 8
// 0051567f  84c0                 test al, al
// 00515681  7544                 jne 0x5156c7
// 00515683  8b442420             mov eax, dword ptr [esp + 0x20]
// 00515687  bb10000000           mov ebx, 0x10
// 0051568c  395c2434             cmp dword ptr [esp + 0x34], ebx
// 00515690  7304                 jae 0x515696
// 00515692  8d442420             lea eax, [esp + 0x20]
// 00515696  8d4c2454             lea ecx, [esp + 0x54]
// 0051569a  51                   push ecx
// 0051569b  50                   push eax
// 0051569c  ff1570278000         call dword ptr [0x802770]
// 005156a2  83c408               add esp, 8
// 005156a5  83f8ff               cmp eax, -1
// 005156a8  0f95c0               setne al
// 005156ab  84c0                 test al, al
// 005156ad  7518                 jne 0x5156c7
// 005156af  8b442420             mov eax, dword ptr [esp + 0x20]
// 005156b3  395c2434             cmp dword ptr [esp + 0x34], ebx
// 005156b7  7304                 jae 0x5156bd
// 005156b9  8d442420             lea eax, [esp + 0x20]
// 005156bd  50                   push eax
// 005156be  ff156c278000         call dword ptr [0x80276c]
// 005156c4  83c404               add esp, 4
// 005156c7  45                   inc ebp
// 005156c8  83c61c               add esi, 0x1c
// 005156cb  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 005156cf  0f8c5bffffff         jl 0x515630
// 005156d5  8d4c241c             lea ecx, [esp + 0x1c]
// 005156d9  c68424fc00000007     mov byte ptr [esp + 0xfc], 7
// 005156e1  ff1568248000         call dword ptr [0x802468]
// 005156e7  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 005156ee  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 005156f6  ff1568248000         call dword ptr [0x802468]
// 005156fc  8d4c2410             lea ecx, [esp + 0x10]
// 00515700  c68424fc00000005     mov byte ptr [esp + 0xfc], 5
// 00515708  e8c32fffff           call 0x5086d0
// 0051570d  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 00515714  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 0051571c  ff1568248000         call dword ptr [0x802468]
// 00515722  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00515729  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 00515731  ff1568248000         call dword ptr [0x802468]
// 00515737  8d8c2484000000       lea ecx, [esp + 0x84]
// 0051573e  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 00515746  ff1568248000         call dword ptr [0x802468]
// 0051574c  8d4c2438             lea ecx, [esp + 0x38]
// 00515750  c78424fc000000ffffffff mov dword ptr [esp + 0xfc], 0xffffffff
// 0051575b  ff1568248000         call dword ptr [0x802468]
// 00515761  5b                   pop ebx
// 00515762  5f                   pop edi
// 00515763  5d                   pop ebp
// 00515764  8b8c24e8000000       mov ecx, dword ptr [esp + 0xe8]
// 0051576b  5e                   pop esi
// 0051576c  64890d00000000       mov dword ptr fs:[0], ecx
// 00515773  81c4f0000000         add esp, 0xf0
// 00515779  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?createDirectory@G3D@@YAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
