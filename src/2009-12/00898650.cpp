// roc 2009-12 00898650  unit: CXTPRibbonBar  size: 689 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00898650
//
// 00898650  6aff                 push -1
// 00898652  68c9ee9500           push 0x95eec9
// 00898657  64a100000000         mov eax, dword ptr fs:[0]
// 0089865d  50                   push eax
// 0089865e  51                   push ecx
// 0089865f  53                   push ebx
// 00898660  55                   push ebp
// 00898661  56                   push esi
// 00898662  57                   push edi
// 00898663  a10052b600           mov eax, dword ptr [0xb65200]
// 00898668  33c4                 xor eax, esp
// 0089866a  50                   push eax
// 0089866b  8d442418             lea eax, [esp + 0x18]
// 0089866f  64a300000000         mov dword ptr fs:[0], eax
// 00898675  8bf1                 mov esi, ecx
// 00898677  6a11                 push 0x11
// 00898679  ff1530cc9800         call dword ptr [0x98cc30]
// 0089867f  6685c0               test ax, ax
// 00898682  0f8cd5010000         jl 0x89885d
// 00898688  8bce                 mov ecx, esi
// 0089868a  e841bef6ff           call 0x8044d0
// 0089868f  8be8                 mov ebp, eax
// 00898691  8b442428             mov eax, dword ptr [esp + 0x28]
// 00898695  83f812               cmp eax, 0x12
// 00898698  0f8587000000         jne 0x898725
// 0089869e  8bce                 mov ecx, esi
// 008986a0  e8fbecffff           call 0x8973a0
// 008986a5  85c0                 test eax, eax
// 008986a7  0f8ef6000000         jle 0x8987a3
// 008986ad  8bcd                 mov ecx, ebp
// 008986af  e82cd8f7ff           call 0x815ee0
// 008986b4  6a01                 push 1
// 008986b6  8bcd                 mov ecx, ebp
// 008986b8  e883d4f7ff           call 0x815b40
// 008986bd  8bce                 mov ecx, esi
// 008986bf  c7454401000000       mov dword ptr [ebp + 0x44], 1
// 008986c6  e815cbffff           call 0x8951e0
// 008986cb  85c0                 test eax, eax
// 008986cd  8b06                 mov eax, dword ptr [esi]
// 008986cf  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 008986d5  6a01                 push 1
// 008986d7  7410                 je 0x8986e9
// 008986d9  6a01                 push 1
// 008986db  6a01                 push 1
// 008986dd  ffd2                 call edx
// 008986df  b801000000           mov eax, 1
// 008986e4  e976010000           jmp 0x89885f
// 008986e9  6a00                 push 0
// 008986eb  6a01                 push 1
// 008986ed  ffd2                 call edx
// 008986ef  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008986f5  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 008986fb  8b06                 mov eax, dword ptr [esi]
// 008986fd  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 00898703  6a01                 push 1
// 00898705  52                   push edx
// 00898706  8bce                 mov ecx, esi
// 00898708  ffd0                 call eax
// 0089870a  8bb668020000         mov esi, dword ptr [esi + 0x268]
// 00898710  8b16                 mov edx, dword ptr [esi]
// 00898712  8b4270               mov eax, dword ptr [edx + 0x70]
// 00898715  6a01                 push 1
// 00898717  8bce                 mov ecx, esi
// 00898719  ffd0                 call eax
// 0089871b  b801000000           mov eax, 1
// 00898720  e93a010000           jmp 0x89885f
// 00898725  8d48cf               lea ecx, [eax - 0x31]
// 00898728  83f908               cmp ecx, 8
// 0089872b  7776                 ja 0x8987a3
// 0089872d  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00898733  83c0cf               add eax, -0x31
// 00898736  6a00                 push 0
// 00898738  50                   push eax
// 00898739  e8f2dbfaff           call 0x846330
// 0089873e  8bf8                 mov edi, eax
// 00898740  85ff                 test edi, edi
// 00898742  745f                 je 0x8987a3
// 00898744  8bcf                 mov ecx, edi
// 00898746  e8859fbbff           call 0x4526d0
// 0089874b  85c0                 test eax, eax
// 0089874d  7454                 je 0x8987a3
// 0089874f  8b9f80000000         mov ebx, dword ptr [edi + 0x80]
// 00898755  8bcd                 mov ecx, ebp
// 00898757  e884d7f7ff           call 0x815ee0
// 0089875c  6a01                 push 1
// 0089875e  8bcd                 mov ecx, ebp
// 00898760  e8dbd3f7ff           call 0x815b40
// 00898765  6a01                 push 1
// 00898767  c7454402000000       mov dword ptr [ebp + 0x44], 2
// 0089876e  8b16                 mov edx, dword ptr [esi]
// 00898770  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00898776  6a00                 push 0
// 00898778  6a01                 push 1
// 0089877a  8bce                 mov ecx, esi
// 0089877c  ffd0                 call eax
// 0089877e  8b16                 mov edx, dword ptr [esi]
// 00898780  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00898786  6a01                 push 1
// 00898788  53                   push ebx
// 00898789  8bce                 mov ecx, esi
// 0089878b  ffd0                 call eax
// 0089878d  8b17                 mov edx, dword ptr [edi]
// 0089878f  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 00898795  8bcf                 mov ecx, edi
// 00898797  ffd0                 call eax
// 00898799  b801000000           mov eax, 1
// 0089879e  e9bc000000           jmp 0x89885f
// 008987a3  8bce                 mov ecx, esi
// 008987a5  33db                 xor ebx, ebx
// 008987a7  e8f4ebffff           call 0x8973a0
// 008987ac  85c0                 test eax, eax
// 008987ae  0f8ea9000000         jle 0x89885d
// 008987b4  53                   push ebx
// 008987b5  8bce                 mov ecx, esi
// 008987b7  e864feffff           call 0x898620
// 008987bc  8d4c2414             lea ecx, [esp + 0x14]
// 008987c0  8bf8                 mov edi, eax
// 008987c2  51                   push ecx
// 008987c3  8bcf                 mov ecx, edi
// 008987c5  e806580300           call 0x8cdfd0
// 008987ca  8d4c2414             lea ecx, [esp + 0x14]
// 008987ce  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008987d6  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008987dc  84c0                 test al, al
// 008987de  755b                 jne 0x89883b
// 008987e0  8bcf                 mov ecx, edi
// 008987e2  e8b91bf8ff           call 0x81a3a0
// 008987e7  85c0                 test eax, eax
// 008987e9  7450                 je 0x89883b
// 008987eb  8bcf                 mov ecx, edi
// 008987ed  e8feabedff           call 0x7733f0
// 008987f2  85c0                 test eax, eax
// 008987f4  7445                 je 0x89883b
// 008987f6  6a00                 push 0
// 008987f8  6a26                 push 0x26
// 008987fa  8d4c241c             lea ecx, [esp + 0x1c]
// 008987fe  ff1580d69800         call dword ptr [0x98d680]
// 00898804  8bf8                 mov edi, eax
// 00898806  83ffff               cmp edi, -1
// 00898809  7e30                 jle 0x89883b
// 0089880b  8d4c2414             lea ecx, [esp + 0x14]
// 0089880f  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00898815  48                   dec eax
// 00898816  3bf8                 cmp edi, eax
// 00898818  7d21                 jge 0x89883b
// 0089881a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0089881e  52                   push edx
// 0089881f  47                   inc edi
// 00898820  57                   push edi
// 00898821  8d4c241c             lea ecx, [esp + 0x1c]
// 00898825  ff1510d59800         call dword ptr [0x98d510]
// 0089882b  0fb6c0               movzx eax, al
// 0089882e  50                   push eax
// 0089882f  e82c65ffff           call 0x88ed60
// 00898834  83c408               add esp, 8
// 00898837  85c0                 test eax, eax
// 00898839  753a                 jne 0x898875
// 0089883b  8d4c2414             lea ecx, [esp + 0x14]
// 0089883f  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00898847  ff15c0de9800         call dword ptr [0x98dec0]
// 0089884d  8bce                 mov ecx, esi
// 0089884f  43                   inc ebx
// 00898850  e84bebffff           call 0x8973a0
// 00898855  3bd8                 cmp ebx, eax
// 00898857  0f8c57ffffff         jl 0x8987b4
// 0089885d  33c0                 xor eax, eax
// 0089885f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00898863  64890d00000000       mov dword ptr fs:[0], ecx
// 0089886a  59                   pop ecx
// 0089886b  5f                   pop edi
// 0089886c  5e                   pop esi
// 0089886d  5d                   pop ebp
// 0089886e  5b                   pop ebx
// 0089886f  83c410               add esp, 0x10
// 00898872  c20400               ret 4
// 00898875  83bee000000000       cmp dword ptr [esi + 0xe0], 0
// 0089887c  7507                 jne 0x898885
// 0089887e  8bcd                 mov ecx, ebp
// 00898880  e85bd6f7ff           call 0x815ee0
// 00898885  bf01000000           mov edi, 1
// 0089888a  57                   push edi
// 0089888b  8bcd                 mov ecx, ebp
// 0089888d  e8aed2f7ff           call 0x815b40
// 00898892  89be30010000         mov dword ptr [esi + 0x130], edi
// 00898898  53                   push ebx
// 00898899  8bce                 mov ecx, esi
// 0089889b  897d44               mov dword ptr [ebp + 0x44], edi
// 0089889e  e8bdc4ffff           call 0x894d60
// 008988a3  8b16                 mov edx, dword ptr [esi]
// 008988a5  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008988ab  57                   push edi
// 008988ac  6a00                 push 0
// 008988ae  57                   push edi
// 008988af  8bce                 mov ecx, esi
// 008988b1  ffd0                 call eax
// 008988b3  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 008988b9  8b8880000000         mov ecx, dword ptr [eax + 0x80]
// 008988bf  8b16                 mov edx, dword ptr [esi]
// 008988c1  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 008988c7  57                   push edi
// 008988c8  51                   push ecx
// 008988c9  8bce                 mov ecx, esi
// 008988cb  ffd2                 call edx
// 008988cd  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008988d3  8b01                 mov eax, dword ptr [ecx]
// 008988d5  8b5070               mov edx, dword ptr [eax + 0x70]
// 008988d8  57                   push edi
// 008988d9  ffd2                 call edx
// 008988db  8bce                 mov ecx, esi
// 008988dd  e8fec8ffff           call 0x8951e0
// 008988e2  85c0                 test eax, eax
// 008988e4  750a                 jne 0x8988f0
// 008988e6  6a02                 push 2
// 008988e8  56                   push esi
// 008988e9  8bcd                 mov ecx, ebp
// 008988eb  e8f0e5f7ff           call 0x816ee0
// 008988f0  8d4c2414             lea ecx, [esp + 0x14]
// 008988f4  ff15c0de9800         call dword ptr [0x98dec0]
// 008988fa  8bc7                 mov eax, edi
// 008988fc  e95effffff           jmp 0x89885f
// copied from an identical function in another client (function ?PreviewAccel@CXTPRibbonBar@@UAEHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonBar.cpp