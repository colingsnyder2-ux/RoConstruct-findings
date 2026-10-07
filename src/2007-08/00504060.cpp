// roc 2007-08 00504060  unit: G3D::Log  size: 1061 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00504060
//
// 00504060  6aff                 push -1
// 00504062  685af57400           push 0x74f55a
// 00504067  64a100000000         mov eax, dword ptr fs:[0]
// 0050406d  50                   push eax
// 0050406e  81ec94000000         sub esp, 0x94
// 00504074  53                   push ebx
// 00504075  56                   push esi
// 00504076  57                   push edi
// 00504077  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050407c  33c4                 xor eax, esp
// 0050407e  50                   push eax
// 0050407f  8d8424a4000000       lea eax, [esp + 0xa4]
// 00504086  64a300000000         mov dword ptr fs:[0], eax
// 0050408c  8bf1                 mov esi, ecx
// 0050408e  68a02c5000           push 0x502ca0
// 00504093  68202c5000           push 0x502c20
// 00504098  6a00                 push 0
// 0050409a  689c027a00           push 0x7a029c
// 0050409f  e8ac460100           call 0x518750
// 005040a4  83c410               add esp, 0x10
// 005040a7  85c0                 test eax, eax
// 005040a9  89442410             mov dword ptr [esp + 0x10], eax
// 005040ad  7551                 jne 0x504100
// 005040af  681c047a00           push 0x7a041c
// 005040b4  8d4c2434             lea ecx, [esp + 0x34]
// 005040b8  ff1598e67700         call dword ptr [0x77e698]
// 005040be  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 005040c5  8d442450             lea eax, [esp + 0x50]
// 005040c9  50                   push eax
// 005040ca  c78424b000000000000000 mov dword ptr [esp + 0xb0], 0
// 005040d5  e896e8ffff           call 0x502970
// 005040da  50                   push eax
// 005040db  8d4c2434             lea ecx, [esp + 0x34]
// 005040df  51                   push ecx
// 005040e0  8d4c2474             lea ecx, [esp + 0x74]
// 005040e4  c68424b400000001     mov byte ptr [esp + 0xb4], 1
// 005040ec  e87fb4f6ff           call 0x46f570
// 005040f1  68a4b48400           push 0x84b4a4
// 005040f6  8d542470             lea edx, [esp + 0x70]
// 005040fa  52                   push edx
// 005040fb  e89eca1200           call 0x630b9e
// 00504100  50                   push eax
// 00504101  e88a130100           call 0x515490
// 00504106  83c404               add esp, 4
// 00504109  85c0                 test eax, eax
// 0050410b  89442414             mov dword ptr [esp + 0x14], eax
// 0050410f  7560                 jne 0x504171
// 00504111  50                   push eax
// 00504112  50                   push eax
// 00504113  8d442418             lea eax, [esp + 0x18]
// 00504117  50                   push eax
// 00504118  e863460100           call 0x518780
// 0050411d  83c40c               add esp, 0xc
// 00504120  681c047a00           push 0x7a041c
// 00504125  8d4c2434             lea ecx, [esp + 0x34]
// 00504129  ff1598e67700         call dword ptr [0x77e698]
// 0050412f  8d4c2450             lea ecx, [esp + 0x50]
// 00504133  51                   push ecx
// 00504134  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0050413b  c78424b000000002000000 mov dword ptr [esp + 0xb0], 2
// 00504146  e825e8ffff           call 0x502970
// 0050414b  50                   push eax
// 0050414c  8d542434             lea edx, [esp + 0x34]
// 00504150  52                   push edx
// 00504151  8d4c2474             lea ecx, [esp + 0x74]
// 00504155  c68424b400000003     mov byte ptr [esp + 0xb4], 3
// 0050415d  e80eb4f6ff           call 0x46f570
// 00504162  68a4b48400           push 0x84b4a4
// 00504167  8d442470             lea eax, [esp + 0x70]
// 0050416b  50                   push eax
// 0050416c  e82dca1200           call 0x630b9e
// 00504171  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00504175  51                   push ecx
// 00504176  e815130100           call 0x515490
// 0050417b  83c404               add esp, 4
// 0050417e  85c0                 test eax, eax
// 00504180  89442420             mov dword ptr [esp + 0x20], eax
// 00504184  7564                 jne 0x5041ea
// 00504186  50                   push eax
// 00504187  8d542418             lea edx, [esp + 0x18]
// 0050418b  52                   push edx
// 0050418c  8d442418             lea eax, [esp + 0x18]
// 00504190  50                   push eax
// 00504191  e8ea450100           call 0x518780
// 00504196  83c40c               add esp, 0xc
// 00504199  681c047a00           push 0x7a041c
// 0050419e  8d4c2434             lea ecx, [esp + 0x34]
// 005041a2  ff1598e67700         call dword ptr [0x77e698]
// 005041a8  8d4c2450             lea ecx, [esp + 0x50]
// 005041ac  51                   push ecx
// 005041ad  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 005041b4  c78424b000000004000000 mov dword ptr [esp + 0xb0], 4
// 005041bf  e8ace7ffff           call 0x502970
// 005041c4  50                   push eax
// 005041c5  8d542434             lea edx, [esp + 0x34]
// 005041c9  52                   push edx
// 005041ca  8d4c2474             lea ecx, [esp + 0x74]
// 005041ce  c68424b400000005     mov byte ptr [esp + 0xb4], 5
// 005041d6  e895b3f6ff           call 0x46f570
// 005041db  68a4b48400           push 0x84b4a4
// 005041e0  8d442470             lea eax, [esp + 0x70]
// 005041e4  50                   push eax
// 005041e5  e8b4c91200           call 0x630b9e
// 005041ea  8bbc24b4000000       mov edi, dword ptr [esp + 0xb4]
// 005041f1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005041f5  6840405000           push 0x504040
// 005041fa  57                   push edi
// 005041fb  51                   push ecx
// 005041fc  e8ef950100           call 0x51d7f0
// 00504201  8b542420             mov edx, dword ptr [esp + 0x20]
// 00504205  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00504209  52                   push edx
// 0050420a  50                   push eax
// 0050420b  e8501e0100           call 0x516060
// 00504210  6a00                 push 0
// 00504212  6a00                 push 0
// 00504214  8d4c2468             lea ecx, [esp + 0x68]
// 00504218  51                   push ecx
// 00504219  8d542438             lea edx, [esp + 0x38]
// 0050421d  52                   push edx
// 0050421e  8d442440             lea eax, [esp + 0x40]
// 00504222  50                   push eax
// 00504223  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00504227  8d4c2454             lea ecx, [esp + 0x54]
// 0050422b  51                   push ecx
// 0050422c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00504230  8d542450             lea edx, [esp + 0x50]
// 00504234  52                   push edx
// 00504235  50                   push eax
// 00504236  51                   push ecx
// 00504237  e834940100           call 0x51d670
// 0050423c  83c438               add esp, 0x38
// 0050423f  837c241804           cmp dword ptr [esp + 0x18], 4
// 00504244  7563                 jne 0x5042a9
// 00504246  8d542420             lea edx, [esp + 0x20]
// 0050424a  52                   push edx
// 0050424b  8d442418             lea eax, [esp + 0x18]
// 0050424f  50                   push eax
// 00504250  8d4c2418             lea ecx, [esp + 0x18]
// 00504254  51                   push ecx
// 00504255  e826450100           call 0x518780
// 0050425a  83c40c               add esp, 0xc
// 0050425d  68e4037a00           push 0x7a03e4
// 00504262  8d4c2434             lea ecx, [esp + 0x34]
// 00504266  ff1598e67700         call dword ptr [0x77e698]
// 0050426c  8d542450             lea edx, [esp + 0x50]
// 00504270  52                   push edx
// 00504271  8bcf                 mov ecx, edi
// 00504273  c78424b000000006000000 mov dword ptr [esp + 0xb0], 6
// 0050427e  e8ede6ffff           call 0x502970
// 00504283  50                   push eax
// 00504284  8d442434             lea eax, [esp + 0x34]
// 00504288  50                   push eax
// 00504289  8d4c2474             lea ecx, [esp + 0x74]
// 0050428d  c68424b400000007     mov byte ptr [esp + 0xb4], 7
// 00504295  e8d6b2f6ff           call 0x46f570
// 0050429a  68a4b48400           push 0x84b4a4
// 0050429f  8d4c2470             lea ecx, [esp + 0x70]
// 005042a3  51                   push ecx
// 005042a4  e8f5c81200           call 0x630b9e
// 005042a9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005042ad  8b542424             mov edx, dword ptr [esp + 0x24]
// 005042b1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005042b5  51                   push ecx
// 005042b6  895608               mov dword ptr [esi + 8], edx
// 005042b9  89460c               mov dword ptr [esi + 0xc], eax
// 005042bc  e87f450100           call 0x518840
// 005042c1  8b542414             mov edx, dword ptr [esp + 0x14]
// 005042c5  52                   push edx
// 005042c6  e8254b0100           call 0x518df0
// 005042cb  83c408               add esp, 8
// 005042ce  837c241803           cmp dword ptr [esp + 0x18], 3
// 005042d3  750d                 jne 0x5042e2
// 005042d5  8b442410             mov eax, dword ptr [esp + 0x10]
// 005042d9  50                   push eax
// 005042da  e8714b0100           call 0x518e50
// 005042df  83c404               add esp, 4
// 005042e2  837c241800           cmp dword ptr [esp + 0x18], 0
// 005042e7  bb08000000           mov ebx, 8
// 005042ec  7513                 jne 0x504301
// 005042ee  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 005042f2  7d0d                 jge 0x504301
// 005042f4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005042f8  51                   push ecx
// 005042f9  e8524b0100           call 0x518e50
// 005042fe  83c404               add esp, 4
// 00504301  8b542414             mov edx, dword ptr [esp + 0x14]
// 00504305  8b442410             mov eax, dword ptr [esp + 0x10]
// 00504309  6a10                 push 0x10
// 0050430b  52                   push edx
// 0050430c  50                   push eax
// 0050430d  e89e920100           call 0x51d5b0
// 00504312  83c40c               add esp, 0xc
// 00504315  85c0                 test eax, eax
// 00504317  740d                 je 0x504326
// 00504319  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050431d  51                   push ecx
// 0050431e  e82d4b0100           call 0x518e50
// 00504323  83c404               add esp, 4
// 00504326  395c241c             cmp dword ptr [esp + 0x1c], ebx
// 0050432a  7d0d                 jge 0x504339
// 0050432c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00504330  52                   push edx
// 00504331  e82a450100           call 0x518860
// 00504336  83c404               add esp, 4
// 00504339  8b442418             mov eax, dword ptr [esp + 0x18]
// 0050433d  83f806               cmp eax, 6
// 00504340  7515                 jne 0x504357
// 00504342  8b460c               mov eax, dword ptr [esi + 0xc]
// 00504345  0faf4608             imul eax, dword ptr [esi + 8]
// 00504349  03c0                 add eax, eax
// 0050434b  03c0                 add eax, eax
// 0050434d  c7461004000000       mov dword ptr [esi + 0x10], 4
// 00504354  50                   push eax
// 00504355  eb79                 jmp 0x5043d0
// 00504357  83f802               cmp eax, 2
// 0050435a  7462                 je 0x5043be
// 0050435c  83f803               cmp eax, 3
// 0050435f  745d                 je 0x5043be
// 00504361  85c0                 test eax, eax
// 00504363  7511                 jne 0x504376
// 00504365  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00504368  0faf4e08             imul ecx, dword ptr [esi + 8]
// 0050436c  c7461001000000       mov dword ptr [esi + 0x10], 1
// 00504373  51                   push ecx
// 00504374  eb5a                 jmp 0x5043d0
// 00504376  68c0037a00           push 0x7a03c0
// 0050437b  8d4c2434             lea ecx, [esp + 0x34]
// 0050437f  ff1598e67700         call dword ptr [0x77e698]
// 00504385  8d542450             lea edx, [esp + 0x50]
// 00504389  52                   push edx
// 0050438a  8bcf                 mov ecx, edi
// 0050438c  899c24b0000000       mov dword ptr [esp + 0xb0], ebx
// 00504393  e8d8e5ffff           call 0x502970
// 00504398  50                   push eax
// 00504399  8d442434             lea eax, [esp + 0x34]
// 0050439d  50                   push eax
// 0050439e  8d4c2474             lea ecx, [esp + 0x74]
// 005043a2  c68424b400000009     mov byte ptr [esp + 0xb4], 9
// 005043aa  e8c1b1f6ff           call 0x46f570
// 005043af  68a4b48400           push 0x84b4a4
// 005043b4  8d4c2470             lea ecx, [esp + 0x70]
// 005043b8  51                   push ecx
// 005043b9  e8e0c71200           call 0x630b9e
// 005043be  8b460c               mov eax, dword ptr [esi + 0xc]
// 005043c1  0faf4608             imul eax, dword ptr [esi + 8]
// 005043c5  8d1440               lea edx, [eax + eax*2]
// 005043c8  c7461003000000       mov dword ptr [esi + 0x10], 3
// 005043cf  52                   push edx
// 005043d0  e83bbcffff           call 0x500010
// 005043d5  894604               mov dword ptr [esi + 4], eax
// 005043d8  8b442414             mov eax, dword ptr [esp + 0x14]
// 005043dc  83c404               add esp, 4
// 005043df  50                   push eax
// 005043e0  e89b440100           call 0x518880
// 005043e5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005043e9  8b542414             mov edx, dword ptr [esp + 0x14]
// 005043ed  51                   push ecx
// 005043ee  52                   push edx
// 005043ef  8bf8                 mov edi, eax
// 005043f1  e80a2c0100           call 0x517000
// 005043f6  83c40c               add esp, 0xc
// 005043f9  85ff                 test edi, edi
// 005043fb  7647                 jbe 0x504444
// 005043fd  8bdf                 mov ebx, edi
// 005043ff  90                   nop 
// 00504400  33ff                 xor edi, edi
// 00504402  397e0c               cmp dword ptr [esi + 0xc], edi
// 00504405  7638                 jbe 0x50443f
// 00504407  eb07                 jmp 0x504410
// 00504409  8da42400000000       lea esp, [esp]
// 00504410  8b4610               mov eax, dword ptr [esi + 0x10]
// 00504413  8b542410             mov edx, dword ptr [esp + 0x10]
// 00504417  0fafc7               imul eax, edi
// 0050441a  0faf4608             imul eax, dword ptr [esi + 8]
// 0050441e  034604               add eax, dword ptr [esi + 4]
// 00504421  6a01                 push 1
// 00504423  6a00                 push 0
// 00504425  8d4c2430             lea ecx, [esp + 0x30]
// 00504429  51                   push ecx
// 0050442a  52                   push edx
// 0050442b  89442438             mov dword ptr [esp + 0x38], eax
// 0050442f  e81c310100           call 0x517550
// 00504434  83c701               add edi, 1
// 00504437  83c410               add esp, 0x10
// 0050443a  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 0050443d  72d1                 jb 0x504410
// 0050443f  83eb01               sub ebx, 1
// 00504442  75bc                 jne 0x504400
// 00504444  8b442414             mov eax, dword ptr [esp + 0x14]
// 00504448  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0050444c  50                   push eax
// 0050444d  51                   push ecx
// 0050444e  e8fd310100           call 0x517650
// 00504453  8d542428             lea edx, [esp + 0x28]
// 00504457  52                   push edx
// 00504458  8d442420             lea eax, [esp + 0x20]
// 0050445c  50                   push eax
// 0050445d  8d4c2420             lea ecx, [esp + 0x20]
// 00504461  51                   push ecx
// 00504462  e819430100           call 0x518780
// 00504467  83c414               add esp, 0x14
// 0050446a  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00504471  64890d00000000       mov dword ptr fs:[0], ecx
// 00504478  59                   pop ecx
// 00504479  5f                   pop edi
// 0050447a  5e                   pop esi
// 0050447b  5b                   pop ebx
// 0050447c  81c4a0000000         add esp, 0xa0
// 00504482  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?decodePNG@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
