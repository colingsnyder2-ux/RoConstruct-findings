// roc 2009-12 005d0610  unit: RBX::PartChunk  size: 796 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d0610
//
// 005d0610  6aff                 push -1
// 005d0612  6812699500           push 0x956912
// 005d0617  64a100000000         mov eax, dword ptr fs:[0]
// 005d061d  50                   push eax
// 005d061e  64892500000000       mov dword ptr fs:[0], esp
// 005d0625  83ec48               sub esp, 0x48
// 005d0628  8b442460             mov eax, dword ptr [esp + 0x60]
// 005d062c  80782100             cmp byte ptr [eax + 0x21], 0
// 005d0630  53                   push ebx
// 005d0631  8bd9                 mov ebx, ecx
// 005d0633  895c2404             mov dword ptr [esp + 4], ebx
// 005d0637  7459                 je 0x5d0692
// 005d0639  68e4f49900           push 0x99f4e4
// 005d063e  8d4c240c             lea ecx, [esp + 0xc]
// 005d0642  ff15f4b69800         call dword ptr [0x98b6f4]
// 005d0648  8d4c2424             lea ecx, [esp + 0x24]
// 005d064c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 005d0654  ff1554b79800         call dword ptr [0x98b754]
// 005d065a  8d442408             lea eax, [esp + 8]
// 005d065e  50                   push eax
// 005d065f  8d4c2434             lea ecx, [esp + 0x34]
// 005d0663  c644245801           mov byte ptr [esp + 0x58], 1
// 005d0668  c744242884f49900     mov dword ptr [esp + 0x28], 0x99f484
// 005d0670  ff15f0b69800         call dword ptr [0x98b6f0]
// 005d0676  688cefa800           push 0xa8ef8c
// 005d067b  8d4c2428             lea ecx, [esp + 0x28]
// 005d067f  51                   push ecx
// 005d0680  c644245c00           mov byte ptr [esp + 0x5c], 0
// 005d0685  c744242c9cf49900     mov dword ptr [esp + 0x2c], 0x99f49c
// 005d068d  e8e6412200           call 0x7f4878
// 005d0692  55                   push ebp
// 005d0693  56                   push esi
// 005d0694  57                   push edi
// 005d0695  8d4c246c             lea ecx, [esp + 0x6c]
// 005d0699  8be8                 mov ebp, eax
// 005d069b  e860eaebff           call 0x48f100
// 005d06a0  8b4d00               mov ecx, dword ptr [ebp]
// 005d06a3  80792100             cmp byte ptr [ecx + 0x21], 0
// 005d06a7  7405                 je 0x5d06ae
// 005d06a9  8b7d08               mov edi, dword ptr [ebp + 8]
// 005d06ac  eb1b                 jmp 0x5d06c9
// 005d06ae  8b5508               mov edx, dword ptr [ebp + 8]
// 005d06b1  807a2100             cmp byte ptr [edx + 0x21], 0
// 005d06b5  7404                 je 0x5d06bb
// 005d06b7  8bf9                 mov edi, ecx
// 005d06b9  eb0e                 jmp 0x5d06c9
// 005d06bb  8b442470             mov eax, dword ptr [esp + 0x70]
// 005d06bf  8b7808               mov edi, dword ptr [eax + 8]
// 005d06c2  8d5008               lea edx, [eax + 8]
// 005d06c5  3bc5                 cmp eax, ebp
// 005d06c7  7567                 jne 0x5d0730
// 005d06c9  807f2100             cmp byte ptr [edi + 0x21], 0
// 005d06cd  8b7504               mov esi, dword ptr [ebp + 4]
// 005d06d0  7503                 jne 0x5d06d5
// 005d06d2  897704               mov dword ptr [edi + 4], esi
// 005d06d5  8b4318               mov eax, dword ptr [ebx + 0x18]
// 005d06d8  396804               cmp dword ptr [eax + 4], ebp
// 005d06db  7505                 jne 0x5d06e2
// 005d06dd  897804               mov dword ptr [eax + 4], edi
// 005d06e0  eb0b                 jmp 0x5d06ed
// 005d06e2  392e                 cmp dword ptr [esi], ebp
// 005d06e4  7504                 jne 0x5d06ea
// 005d06e6  893e                 mov dword ptr [esi], edi
// 005d06e8  eb03                 jmp 0x5d06ed
// 005d06ea  897e08               mov dword ptr [esi + 8], edi
// 005d06ed  8b5b18               mov ebx, dword ptr [ebx + 0x18]
// 005d06f0  392b                 cmp dword ptr [ebx], ebp
// 005d06f2  7515                 jne 0x5d0709
// 005d06f4  807f2100             cmp byte ptr [edi + 0x21], 0
// 005d06f8  7404                 je 0x5d06fe
// 005d06fa  8bc6                 mov eax, esi
// 005d06fc  eb09                 jmp 0x5d0707
// 005d06fe  57                   push edi
// 005d06ff  e83cbfffff           call 0x5cc640
// 005d0704  83c404               add esp, 4
// 005d0707  8903                 mov dword ptr [ebx], eax
// 005d0709  8b442410             mov eax, dword ptr [esp + 0x10]
// 005d070d  8b5818               mov ebx, dword ptr [eax + 0x18]
// 005d0710  396b08               cmp dword ptr [ebx + 8], ebp
// 005d0713  7578                 jne 0x5d078d
// 005d0715  807f2100             cmp byte ptr [edi + 0x21], 0
// 005d0719  7407                 je 0x5d0722
// 005d071b  8bc6                 mov eax, esi
// 005d071d  894308               mov dword ptr [ebx + 8], eax
// 005d0720  eb6b                 jmp 0x5d078d
// 005d0722  57                   push edi
// 005d0723  e878bfffff           call 0x5cc6a0
// 005d0728  83c404               add esp, 4
// 005d072b  894308               mov dword ptr [ebx + 8], eax
// 005d072e  eb5d                 jmp 0x5d078d
// 005d0730  894104               mov dword ptr [ecx + 4], eax
// 005d0733  8b4d00               mov ecx, dword ptr [ebp]
// 005d0736  8908                 mov dword ptr [eax], ecx
// 005d0738  3b4508               cmp eax, dword ptr [ebp + 8]
// 005d073b  7504                 jne 0x5d0741
// 005d073d  8bf0                 mov esi, eax
// 005d073f  eb19                 jmp 0x5d075a
// 005d0741  807f2100             cmp byte ptr [edi + 0x21], 0
// 005d0745  8b7004               mov esi, dword ptr [eax + 4]
// 005d0748  7503                 jne 0x5d074d
// 005d074a  897704               mov dword ptr [edi + 4], esi
// 005d074d  893e                 mov dword ptr [esi], edi
// 005d074f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005d0752  890a                 mov dword ptr [edx], ecx
// 005d0754  8b5508               mov edx, dword ptr [ebp + 8]
// 005d0757  894204               mov dword ptr [edx + 4], eax
// 005d075a  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 005d075d  396904               cmp dword ptr [ecx + 4], ebp
// 005d0760  7505                 jne 0x5d0767
// 005d0762  894104               mov dword ptr [ecx + 4], eax
// 005d0765  eb0e                 jmp 0x5d0775
// 005d0767  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005d076a  3929                 cmp dword ptr [ecx], ebp
// 005d076c  7504                 jne 0x5d0772
// 005d076e  8901                 mov dword ptr [ecx], eax
// 005d0770  eb03                 jmp 0x5d0775
// 005d0772  894108               mov dword ptr [ecx + 8], eax
// 005d0775  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005d0778  894804               mov dword ptr [eax + 4], ecx
// 005d077b  8d4d20               lea ecx, [ebp + 0x20]
// 005d077e  83c020               add eax, 0x20
// 005d0781  3bc1                 cmp eax, ecx
// 005d0783  7408                 je 0x5d078d
// 005d0785  8a19                 mov bl, byte ptr [ecx]
// 005d0787  8a10                 mov dl, byte ptr [eax]
// 005d0789  8818                 mov byte ptr [eax], bl
// 005d078b  8811                 mov byte ptr [ecx], dl
// 005d078d  bb01000000           mov ebx, 1
// 005d0792  385d20               cmp byte ptr [ebp + 0x20], bl
// 005d0795  0f8504010000         jne 0x5d089f
// 005d079b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d079f  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005d07a2  3b7a04               cmp edi, dword ptr [edx + 4]
// 005d07a5  0f84f1000000         je 0x5d089c
// 005d07ab  eb03                 jmp 0x5d07b0
// 005d07ad  8d4900               lea ecx, [ecx]
// 005d07b0  385f20               cmp byte ptr [edi + 0x20], bl
// 005d07b3  0f85e3000000         jne 0x5d089c
// 005d07b9  8b06                 mov eax, dword ptr [esi]
// 005d07bb  3bf8                 cmp edi, eax
// 005d07bd  7567                 jne 0x5d0826
// 005d07bf  8b4608               mov eax, dword ptr [esi + 8]
// 005d07c2  80782000             cmp byte ptr [eax + 0x20], 0
// 005d07c6  7514                 jne 0x5d07dc
// 005d07c8  885820               mov byte ptr [eax + 0x20], bl
// 005d07cb  56                   push esi
// 005d07cc  c6462000             mov byte ptr [esi + 0x20], 0
// 005d07d0  e88bcbffff           call 0x5cd360
// 005d07d5  8b4608               mov eax, dword ptr [esi + 8]
// 005d07d8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d07dc  80782100             cmp byte ptr [eax + 0x21], 0
// 005d07e0  7576                 jne 0x5d0858
// 005d07e2  8b10                 mov edx, dword ptr [eax]
// 005d07e4  385a20               cmp byte ptr [edx + 0x20], bl
// 005d07e7  7508                 jne 0x5d07f1
// 005d07e9  8b5008               mov edx, dword ptr [eax + 8]
// 005d07ec  385a20               cmp byte ptr [edx + 0x20], bl
// 005d07ef  7463                 je 0x5d0854
// 005d07f1  8b5008               mov edx, dword ptr [eax + 8]
// 005d07f4  385a20               cmp byte ptr [edx + 0x20], bl
// 005d07f7  7516                 jne 0x5d080f
// 005d07f9  8b10                 mov edx, dword ptr [eax]
// 005d07fb  885a20               mov byte ptr [edx + 0x20], bl
// 005d07fe  50                   push eax
// 005d07ff  c6402000             mov byte ptr [eax + 0x20], 0
// 005d0803  e878bdffff           call 0x5cc580
// 005d0808  8b4608               mov eax, dword ptr [esi + 8]
// 005d080b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d080f  8a5620               mov dl, byte ptr [esi + 0x20]
// 005d0812  885020               mov byte ptr [eax + 0x20], dl
// 005d0815  885e20               mov byte ptr [esi + 0x20], bl
// 005d0818  8b4008               mov eax, dword ptr [eax + 8]
// 005d081b  56                   push esi
// 005d081c  885820               mov byte ptr [eax + 0x20], bl
// 005d081f  e83ccbffff           call 0x5cd360
// 005d0824  eb76                 jmp 0x5d089c
// 005d0826  80782000             cmp byte ptr [eax + 0x20], 0
// 005d082a  7513                 jne 0x5d083f
// 005d082c  885820               mov byte ptr [eax + 0x20], bl
// 005d082f  56                   push esi
// 005d0830  c6462000             mov byte ptr [esi + 0x20], 0
// 005d0834  e847bdffff           call 0x5cc580
// 005d0839  8b06                 mov eax, dword ptr [esi]
// 005d083b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d083f  80782100             cmp byte ptr [eax + 0x21], 0
// 005d0843  7513                 jne 0x5d0858
// 005d0845  8b5008               mov edx, dword ptr [eax + 8]
// 005d0848  385a20               cmp byte ptr [edx + 0x20], bl
// 005d084b  751e                 jne 0x5d086b
// 005d084d  8b10                 mov edx, dword ptr [eax]
// 005d084f  385a20               cmp byte ptr [edx + 0x20], bl
// 005d0852  7517                 jne 0x5d086b
// 005d0854  c6402000             mov byte ptr [eax + 0x20], 0
// 005d0858  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005d085b  8bfe                 mov edi, esi
// 005d085d  8b7604               mov esi, dword ptr [esi + 4]
// 005d0860  3b7804               cmp edi, dword ptr [eax + 4]
// 005d0863  0f8547ffffff         jne 0x5d07b0
// 005d0869  eb31                 jmp 0x5d089c
// 005d086b  8b10                 mov edx, dword ptr [eax]
// 005d086d  385a20               cmp byte ptr [edx + 0x20], bl
// 005d0870  7516                 jne 0x5d0888
// 005d0872  8b5008               mov edx, dword ptr [eax + 8]
// 005d0875  885a20               mov byte ptr [edx + 0x20], bl
// 005d0878  50                   push eax
// 005d0879  c6402000             mov byte ptr [eax + 0x20], 0
// 005d087d  e8decaffff           call 0x5cd360
// 005d0882  8b06                 mov eax, dword ptr [esi]
// 005d0884  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d0888  8a5620               mov dl, byte ptr [esi + 0x20]
// 005d088b  885020               mov byte ptr [eax + 0x20], dl
// 005d088e  885e20               mov byte ptr [esi + 0x20], bl
// 005d0891  8b00                 mov eax, dword ptr [eax]
// 005d0893  56                   push esi
// 005d0894  885820               mov byte ptr [eax + 0x20], bl
// 005d0897  e8e4bcffff           call 0x5cc580
// 005d089c  885f20               mov byte ptr [edi + 0x20], bl
// 005d089f  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 005d08a2  85c0                 test eax, eax
// 005d08a4  744a                 je 0x5d08f0
// 005d08a6  83c004               add eax, 4
// 005d08a9  50                   push eax
// 005d08aa  ff1508b29800         call dword ptr [0x98b208]
// 005d08b0  85c0                 test eax, eax
// 005d08b2  7535                 jne 0x5d08e9
// 005d08b4  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 005d08b7  8b7108               mov esi, dword ptr [ecx + 8]
// 005d08ba  85f6                 test esi, esi
// 005d08bc  741d                 je 0x5d08db
// 005d08be  8bff                 mov edi, edi
// 005d08c0  8b0e                 mov ecx, dword ptr [esi]
// 005d08c2  8b11                 mov edx, dword ptr [ecx]
// 005d08c4  8b4204               mov eax, dword ptr [edx + 4]
// 005d08c7  ffd0                 call eax
// 005d08c9  8bc6                 mov eax, esi
// 005d08cb  8b7604               mov esi, dword ptr [esi + 4]
// 005d08ce  50                   push eax
// 005d08cf  e8862f2200           call 0x7f385a
// 005d08d4  83c404               add esp, 4
// 005d08d7  85f6                 test esi, esi
// 005d08d9  75e5                 jne 0x5d08c0
// 005d08db  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 005d08de  85c9                 test ecx, ecx
// 005d08e0  7407                 je 0x5d08e9
// 005d08e2  8b11                 mov edx, dword ptr [ecx]
// 005d08e4  8b02                 mov eax, dword ptr [edx]
// 005d08e6  53                   push ebx
// 005d08e7  ffd0                 call eax
// 005d08e9  c7451c00000000       mov dword ptr [ebp + 0x1c], 0
// 005d08f0  55                   push ebp
// 005d08f1  e8642f2200           call 0x7f385a
// 005d08f6  8b542414             mov edx, dword ptr [esp + 0x14]
// 005d08fa  8b421c               mov eax, dword ptr [edx + 0x1c]
// 005d08fd  83c404               add esp, 4
// 005d0900  5f                   pop edi
// 005d0901  5e                   pop esi
// 005d0902  5d                   pop ebp
// 005d0903  85c0                 test eax, eax
// 005d0905  7604                 jbe 0x5d090b
// 005d0907  48                   dec eax
// 005d0908  89421c               mov dword ptr [edx + 0x1c], eax
// 005d090b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005d090f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005d0913  8b12                 mov edx, dword ptr [edx]
// 005d0915  894804               mov dword ptr [eax + 4], ecx
// 005d0918  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005d091c  8910                 mov dword ptr [eax], edx
// 005d091e  5b                   pop ebx
// 005d091f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0926  83c454               add esp, 0x54
// 005d0929  c20c00               ret 0xc
// library openrbx-client/RbxView\PBBMesh.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
