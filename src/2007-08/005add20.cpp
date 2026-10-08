// roc 2007-08 005add20  unit: RBX::VLighting::?$FactoryProduct  size: 803 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005add20
//
// 005add20  6aff                 push -1
// 005add22  68dc887500           push 0x7588dc
// 005add27  64a100000000         mov eax, dword ptr fs:[0]
// 005add2d  50                   push eax
// 005add2e  64892500000000       mov dword ptr fs:[0], esp
// 005add35  81ec8c000000         sub esp, 0x8c
// 005add3b  55                   push ebp
// 005add3c  56                   push esi
// 005add3d  57                   push edi
// 005add3e  6a01                 push 1
// 005add40  33ff                 xor edi, edi
// 005add42  6a02                 push 2
// 005add44  8d4c2420             lea ecx, [esp + 0x20]
// 005add48  897c241c             mov dword ptr [esp + 0x1c], edi
// 005add4c  ff157ce67700         call dword ptr [0x77e67c]
// 005add52  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 005add59  3bf7                 cmp esi, edi
// 005add5b  8bac24b0000000       mov ebp, dword ptr [esp + 0xb0]
// 005add62  c78424a000000001000000 mov dword ptr [esp + 0xa0], 1
// 005add6d  750c                 jne 0x5add7b
// 005add6f  81fd00000080         cmp ebp, 0x80000000
// 005add75  0f8423020000         je 0x5adf9e
// 005add7b  83feff               cmp esi, -1
// 005add7e  750c                 jne 0x5add8c
// 005add80  81fdffffff7f         cmp ebp, 0x7fffffff
// 005add86  0f8412020000         je 0x5adf9e
// 005add8c  83fefe               cmp esi, -2
// 005add8f  750c                 jne 0x5add9d
// 005add91  81fdffffff7f         cmp ebp, 0x7fffffff
// 005add97  0f840e020000         je 0x5adfab
// 005add9d  8d4c240c             lea ecx, [esp + 0xc]
// 005adda1  51                   push ecx
// 005adda2  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 005adda9  897c2410             mov dword ptr [esp + 0x10], edi
// 005addad  897c2414             mov dword ptr [esp + 0x14], edi
// 005addb1  e8eaf0ffff           call 0x5acea0
// 005addb6  83f8ff               cmp eax, -1
// 005addb9  0f94c0               sete al
// 005addbc  84c0                 test al, al
// 005addbe  740f                 je 0x5addcf
// 005addc0  8d542418             lea edx, [esp + 0x18]
// 005addc4  6a2d                 push 0x2d
// 005addc6  52                   push edx
// 005addc7  e8747cf9ff           call 0x545a40
// 005addcc  83c408               add esp, 8
// 005addcf  53                   push ebx
// 005addd0  57                   push edi
// 005addd1  6800a493d6           push 0xd693a400
// 005addd6  55                   push ebp
// 005addd7  56                   push esi
// 005addd8  e8d3330800           call 0x6311b0
// 005adddd  3bc7                 cmp eax, edi
// 005adddf  7d02                 jge 0x5adde3
// 005adde1  f7d8                 neg eax
// 005adde3  8b3d74e47700         mov edi, dword ptr [0x77e474]
// 005adde9  8bd8                 mov ebx, eax
// 005addeb  8d442410             lea eax, [esp + 0x10]
// 005addef  6a02                 push 2
// 005addf1  50                   push eax
// 005addf2  ffd7                 call edi
// 005addf4  8b4804               mov ecx, dword ptr [eax + 4]
// 005addf7  8b542424             mov edx, dword ptr [esp + 0x24]
// 005addfb  8b00                 mov eax, dword ptr [eax]
// 005addfd  51                   push ecx
// 005addfe  8b4a04               mov ecx, dword ptr [edx + 4]
// 005ade01  8d540c28             lea edx, [esp + ecx + 0x28]
// 005ade05  52                   push edx
// 005ade06  ffd0                 call eax
// 005ade08  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ade0c  8b4104               mov eax, dword ptr [ecx + 4]
// 005ade0f  83c410               add esp, 0x10
// 005ade12  68a0ab7900           push 0x79aba0
// 005ade17  8d440420             lea eax, [esp + eax + 0x20]
// 005ade1b  53                   push ebx
// 005ade1c  8d4c2424             lea ecx, [esp + 0x24]
// 005ade20  c6403030             mov byte ptr [eax + 0x30], 0x30
// 005ade24  ff1578e47700         call dword ptr [0x77e478]
// 005ade2a  50                   push eax
// 005ade2b  e870d5ebff           call 0x46b3a0
// 005ade30  83c408               add esp, 8
// 005ade33  6a00                 push 0
// 005ade35  6800879303           push 0x3938700
// 005ade3a  55                   push ebp
// 005ade3b  56                   push esi
// 005ade3c  e86f330800           call 0x6311b0
// 005ade41  6a00                 push 0
// 005ade43  6a3c                 push 0x3c
// 005ade45  52                   push edx
// 005ade46  50                   push eax
// 005ade47  e854350800           call 0x6313a0
// 005ade4c  85c0                 test eax, eax
// 005ade4e  7d02                 jge 0x5ade52
// 005ade50  f7d8                 neg eax
// 005ade52  8d542410             lea edx, [esp + 0x10]
// 005ade56  6a02                 push 2
// 005ade58  52                   push edx
// 005ade59  8bd8                 mov ebx, eax
// 005ade5b  ffd7                 call edi
// 005ade5d  8b4804               mov ecx, dword ptr [eax + 4]
// 005ade60  8b542424             mov edx, dword ptr [esp + 0x24]
// 005ade64  8b00                 mov eax, dword ptr [eax]
// 005ade66  51                   push ecx
// 005ade67  8b4a04               mov ecx, dword ptr [edx + 4]
// 005ade6a  8d540c28             lea edx, [esp + ecx + 0x28]
// 005ade6e  52                   push edx
// 005ade6f  ffd0                 call eax
// 005ade71  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ade75  8b4104               mov eax, dword ptr [ecx + 4]
// 005ade78  83c410               add esp, 0x10
// 005ade7b  68a0ab7900           push 0x79aba0
// 005ade80  8d440420             lea eax, [esp + eax + 0x20]
// 005ade84  53                   push ebx
// 005ade85  8d4c2424             lea ecx, [esp + 0x24]
// 005ade89  c6403030             mov byte ptr [eax + 0x30], 0x30
// 005ade8d  ff1578e47700         call dword ptr [0x77e478]
// 005ade93  50                   push eax
// 005ade94  e807d5ebff           call 0x46b3a0
// 005ade99  83c408               add esp, 8
// 005ade9c  6a00                 push 0
// 005ade9e  6840420f00           push 0xf4240
// 005adea3  55                   push ebp
// 005adea4  56                   push esi
// 005adea5  e8b6330800           call 0x631260
// 005adeaa  6a00                 push 0
// 005adeac  6a3c                 push 0x3c
// 005adeae  52                   push edx
// 005adeaf  50                   push eax
// 005adeb0  8bf1                 mov esi, ecx
// 005adeb2  8beb                 mov ebp, ebx
// 005adeb4  e8e7340800           call 0x6313a0
// 005adeb9  85c0                 test eax, eax
// 005adebb  7d02                 jge 0x5adebf
// 005adebd  f7d8                 neg eax
// 005adebf  8d542410             lea edx, [esp + 0x10]
// 005adec3  6a02                 push 2
// 005adec5  52                   push edx
// 005adec6  8bd8                 mov ebx, eax
// 005adec8  ffd7                 call edi
// 005adeca  8b4804               mov ecx, dword ptr [eax + 4]
// 005adecd  8b542424             mov edx, dword ptr [esp + 0x24]
// 005aded1  8b00                 mov eax, dword ptr [eax]
// 005aded3  51                   push ecx
// 005aded4  8b4a04               mov ecx, dword ptr [edx + 4]
// 005aded7  8d540c28             lea edx, [esp + ecx + 0x28]
// 005adedb  52                   push edx
// 005adedc  ffd0                 call eax
// 005adede  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005adee2  8b4104               mov eax, dword ptr [ecx + 4]
// 005adee5  83c410               add esp, 0x10
// 005adee8  8d44041c             lea eax, [esp + eax + 0x1c]
// 005adeec  53                   push ebx
// 005adeed  8d4c2420             lea ecx, [esp + 0x20]
// 005adef1  c6403030             mov byte ptr [eax + 0x30], 0x30
// 005adef5  ff1578e47700         call dword ptr [0x77e478]
// 005adefb  8bc5                 mov eax, ebp
// 005adefd  85c0                 test eax, eax
// 005adeff  8bce                 mov ecx, esi
// 005adf01  5b                   pop ebx
// 005adf02  7f11                 jg 0x5adf15
// 005adf04  7c04                 jl 0x5adf0a
// 005adf06  85c9                 test ecx, ecx
// 005adf08  730b                 jae 0x5adf15
// 005adf0a  f7d9                 neg ecx
// 005adf0c  83d000               adc eax, 0
// 005adf0f  f7d8                 neg eax
// 005adf11  8bf1                 mov esi, ecx
// 005adf13  8be8                 mov ebp, eax
// 005adf15  8bd6                 mov edx, esi
// 005adf17  0bd5                 or edx, ebp
// 005adf19  743d                 je 0x5adf58
// 005adf1b  8d44240c             lea eax, [esp + 0xc]
// 005adf1f  6a06                 push 6
// 005adf21  50                   push eax
// 005adf22  ffd7                 call edi
// 005adf24  83c408               add esp, 8
// 005adf27  50                   push eax
// 005adf28  8d4c241c             lea ecx, [esp + 0x1c]
// 005adf2c  6834627900           push 0x796234
// 005adf31  51                   push ecx
// 005adf32  e869d4ebff           call 0x46b3a0
// 005adf37  83c408               add esp, 8
// 005adf3a  50                   push eax
// 005adf3b  e8d0edffff           call 0x5acd10
// 005adf40  8b10                 mov edx, dword ptr [eax]
// 005adf42  8b4a04               mov ecx, dword ptr [edx + 4]
// 005adf45  83c408               add esp, 8
// 005adf48  03c8                 add ecx, eax
// 005adf4a  55                   push ebp
// 005adf4b  c6413030             mov byte ptr [ecx + 0x30], 0x30
// 005adf4f  56                   push esi
// 005adf50  8bc8                 mov ecx, eax
// 005adf52  ff157ce47700         call dword ptr [0x77e47c]
// 005adf58  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 005adf5f  56                   push esi
// 005adf60  8d4c241c             lea ecx, [esp + 0x1c]
// 005adf64  ff1580e67700         call dword ptr [0x77e680]
// 005adf6a  8d4c2418             lea ecx, [esp + 0x18]
// 005adf6e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 005adf76  c68424a000000000     mov byte ptr [esp + 0xa0], 0
// 005adf7e  ff1584e67700         call dword ptr [0x77e684]
// 005adf84  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 005adf8b  5f                   pop edi
// 005adf8c  8bc6                 mov eax, esi
// 005adf8e  5e                   pop esi
// 005adf8f  5d                   pop ebp
// 005adf90  64890d00000000       mov dword ptr fs:[0], ecx
// 005adf97  81c498000000         add esp, 0x98
// 005adf9d  c3                   ret 
// 005adf9e  83fefe               cmp esi, -2
// 005adfa1  750c                 jne 0x5adfaf
// 005adfa3  81fdffffff7f         cmp ebp, 0x7fffffff
// 005adfa9  7504                 jne 0x5adfaf
// 005adfab  33c0                 xor eax, eax
// 005adfad  eb2a                 jmp 0x5adfd9
// 005adfaf  3bf7                 cmp esi, edi
// 005adfb1  750f                 jne 0x5adfc2
// 005adfb3  81fd00000080         cmp ebp, 0x80000000
// 005adfb9  7507                 jne 0x5adfc2
// 005adfbb  b801000000           mov eax, 1
// 005adfc0  eb17                 jmp 0x5adfd9
// 005adfc2  83feff               cmp esi, -1
// 005adfc5  750d                 jne 0x5adfd4
// 005adfc7  81fdffffff7f         cmp ebp, 0x7fffffff
// 005adfcd  b802000000           mov eax, 2
// 005adfd2  7405                 je 0x5adfd9
// 005adfd4  b805000000           mov eax, 5
// 005adfd9  2bc7                 sub eax, edi
// 005adfdb  744f                 je 0x5ae02c
// 005adfdd  83e801               sub eax, 1
// 005adfe0  7433                 je 0x5ae015
// 005adfe2  83e801               sub eax, 1
// 005adfe5  7417                 je 0x5adffe
// 005adfe7  8d442418             lea eax, [esp + 0x18]
// 005adfeb  6854597800           push 0x785954
// 005adff0  50                   push eax
// 005adff1  e8aad3ebff           call 0x46b3a0
// 005adff6  83c408               add esp, 8
// 005adff9  e95affffff           jmp 0x5adf58
// 005adffe  8d4c2418             lea ecx, [esp + 0x18]
// 005ae002  682c5a7b00           push 0x7b5a2c
// 005ae007  51                   push ecx
// 005ae008  e893d3ebff           call 0x46b3a0
// 005ae00d  83c408               add esp, 8
// 005ae010  e943ffffff           jmp 0x5adf58
// 005ae015  8d542418             lea edx, [esp + 0x18]
// 005ae019  68205a7b00           push 0x7b5a20
// 005ae01e  52                   push edx
// 005ae01f  e87cd3ebff           call 0x46b3a0
// 005ae024  83c408               add esp, 8
// 005ae027  e92cffffff           jmp 0x5adf58
// 005ae02c  8d442418             lea eax, [esp + 0x18]
// 005ae030  68105a7b00           push 0x7b5a10
// 005ae035  50                   push eax
// 005ae036  e865d3ebff           call 0x46b3a0
// 005ae03b  83c408               add esp, 8
// 005ae03e  e915ffffff           jmp 0x5adf58
// library rbxgs/v8datamodel\Lighting.cpp (function ??$to_simple_string_type@D@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
