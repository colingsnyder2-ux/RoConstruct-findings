// roc 2007-08 004d3830  unit: RBX::Render::Chunk  size: 803 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d3830
//
// 004d3830  6aff                 push -1
// 004d3832  68b2417500           push 0x7541b2
// 004d3837  64a100000000         mov eax, dword ptr fs:[0]
// 004d383d  50                   push eax
// 004d383e  64892500000000       mov dword ptr fs:[0], esp
// 004d3845  83ec4c               sub esp, 0x4c
// 004d3848  8b442464             mov eax, dword ptr [esp + 0x64]
// 004d384c  80782900             cmp byte ptr [eax + 0x29], 0
// 004d3850  890c24               mov dword ptr [esp], ecx
// 004d3853  7459                 je 0x4d38ae
// 004d3855  68dc4e7800           push 0x784edc
// 004d385a  8d4c240c             lea ecx, [esp + 0xc]
// 004d385e  ff1598e67700         call dword ptr [0x77e698]
// 004d3864  8d4c2424             lea ecx, [esp + 0x24]
// 004d3868  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004d3870  ff15f8e67700         call dword ptr [0x77e6f8]
// 004d3876  8d442408             lea eax, [esp + 8]
// 004d387a  50                   push eax
// 004d387b  8d4c2434             lea ecx, [esp + 0x34]
// 004d387f  c644245801           mov byte ptr [esp + 0x58], 1
// 004d3884  c7442428604e7800     mov dword ptr [esp + 0x28], 0x784e60
// 004d388c  ff159ce67700         call dword ptr [0x77e69c]
// 004d3892  6864f38300           push 0x83f364
// 004d3897  8d4c2428             lea ecx, [esp + 0x28]
// 004d389b  51                   push ecx
// 004d389c  c644245c00           mov byte ptr [esp + 0x5c], 0
// 004d38a1  c744242c784e7800     mov dword ptr [esp + 0x2c], 0x784e78
// 004d38a9  e8f0d21500           call 0x630b9e
// 004d38ae  53                   push ebx
// 004d38af  55                   push ebp
// 004d38b0  56                   push esi
// 004d38b1  8bd8                 mov ebx, eax
// 004d38b3  57                   push edi
// 004d38b4  8d4c2470             lea ecx, [esp + 0x70]
// 004d38b8  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d38bc  e81fd0ffff           call 0x4d08e0
// 004d38c1  8b03                 mov eax, dword ptr [ebx]
// 004d38c3  80782900             cmp byte ptr [eax + 0x29], 0
// 004d38c7  7405                 je 0x4d38ce
// 004d38c9  8b7b08               mov edi, dword ptr [ebx + 8]
// 004d38cc  eb18                 jmp 0x4d38e6
// 004d38ce  8b5308               mov edx, dword ptr [ebx + 8]
// 004d38d1  807a2900             cmp byte ptr [edx + 0x29], 0
// 004d38d5  7404                 je 0x4d38db
// 004d38d7  8bf8                 mov edi, eax
// 004d38d9  eb0b                 jmp 0x4d38e6
// 004d38db  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 004d38df  3beb                 cmp ebp, ebx
// 004d38e1  8b7d08               mov edi, dword ptr [ebp + 8]
// 004d38e4  756d                 jne 0x4d3953
// 004d38e6  807f2900             cmp byte ptr [edi + 0x29], 0
// 004d38ea  8b7304               mov esi, dword ptr [ebx + 4]
// 004d38ed  7503                 jne 0x4d38f2
// 004d38ef  897704               mov dword ptr [edi + 4], esi
// 004d38f2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d38f6  8b4104               mov eax, dword ptr [ecx + 4]
// 004d38f9  395804               cmp dword ptr [eax + 4], ebx
// 004d38fc  7505                 jne 0x4d3903
// 004d38fe  897804               mov dword ptr [eax + 4], edi
// 004d3901  eb0b                 jmp 0x4d390e
// 004d3903  391e                 cmp dword ptr [esi], ebx
// 004d3905  7504                 jne 0x4d390b
// 004d3907  893e                 mov dword ptr [esi], edi
// 004d3909  eb03                 jmp 0x4d390e
// 004d390b  897e08               mov dword ptr [esi + 8], edi
// 004d390e  8b6904               mov ebp, dword ptr [ecx + 4]
// 004d3911  395d00               cmp dword ptr [ebp], ebx
// 004d3914  7516                 jne 0x4d392c
// 004d3916  807f2900             cmp byte ptr [edi + 0x29], 0
// 004d391a  7404                 je 0x4d3920
// 004d391c  8bc6                 mov eax, esi
// 004d391e  eb09                 jmp 0x4d3929
// 004d3920  57                   push edi
// 004d3921  e82acaffff           call 0x4d0350
// 004d3926  83c404               add esp, 4
// 004d3929  894500               mov dword ptr [ebp], eax
// 004d392c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d3930  8b6804               mov ebp, dword ptr [eax + 4]
// 004d3933  395d08               cmp dword ptr [ebp + 8], ebx
// 004d3936  7577                 jne 0x4d39af
// 004d3938  807f2900             cmp byte ptr [edi + 0x29], 0
// 004d393c  7407                 je 0x4d3945
// 004d393e  8bc6                 mov eax, esi
// 004d3940  894508               mov dword ptr [ebp + 8], eax
// 004d3943  eb6a                 jmp 0x4d39af
// 004d3945  57                   push edi
// 004d3946  e825caffff           call 0x4d0370
// 004d394b  83c404               add esp, 4
// 004d394e  894508               mov dword ptr [ebp + 8], eax
// 004d3951  eb5c                 jmp 0x4d39af
// 004d3953  896804               mov dword ptr [eax + 4], ebp
// 004d3956  8b0b                 mov ecx, dword ptr [ebx]
// 004d3958  894d00               mov dword ptr [ebp], ecx
// 004d395b  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 004d395e  7504                 jne 0x4d3964
// 004d3960  8bf5                 mov esi, ebp
// 004d3962  eb1a                 jmp 0x4d397e
// 004d3964  807f2900             cmp byte ptr [edi + 0x29], 0
// 004d3968  8b7504               mov esi, dword ptr [ebp + 4]
// 004d396b  7503                 jne 0x4d3970
// 004d396d  897704               mov dword ptr [edi + 4], esi
// 004d3970  893e                 mov dword ptr [esi], edi
// 004d3972  8b5308               mov edx, dword ptr [ebx + 8]
// 004d3975  895508               mov dword ptr [ebp + 8], edx
// 004d3978  8b4308               mov eax, dword ptr [ebx + 8]
// 004d397b  896804               mov dword ptr [eax + 4], ebp
// 004d397e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d3982  8b4104               mov eax, dword ptr [ecx + 4]
// 004d3985  395804               cmp dword ptr [eax + 4], ebx
// 004d3988  7505                 jne 0x4d398f
// 004d398a  896804               mov dword ptr [eax + 4], ebp
// 004d398d  eb0e                 jmp 0x4d399d
// 004d398f  8b4304               mov eax, dword ptr [ebx + 4]
// 004d3992  3918                 cmp dword ptr [eax], ebx
// 004d3994  7504                 jne 0x4d399a
// 004d3996  8928                 mov dword ptr [eax], ebp
// 004d3998  eb03                 jmp 0x4d399d
// 004d399a  896808               mov dword ptr [eax + 8], ebp
// 004d399d  8b5304               mov edx, dword ptr [ebx + 4]
// 004d39a0  895504               mov dword ptr [ebp + 4], edx
// 004d39a3  8a4b28               mov cl, byte ptr [ebx + 0x28]
// 004d39a6  8a4528               mov al, byte ptr [ebp + 0x28]
// 004d39a9  884d28               mov byte ptr [ebp + 0x28], cl
// 004d39ac  884328               mov byte ptr [ebx + 0x28], al
// 004d39af  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d39b3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004d39b7  bb01000000           mov ebx, 1
// 004d39bc  385a28               cmp byte ptr [edx + 0x28], bl
// 004d39bf  0f85f7000000         jne 0x4d3abc
// 004d39c5  8b4504               mov eax, dword ptr [ebp + 4]
// 004d39c8  3b7804               cmp edi, dword ptr [eax + 4]
// 004d39cb  0f84e8000000         je 0x4d3ab9
// 004d39d1  385f28               cmp byte ptr [edi + 0x28], bl
// 004d39d4  0f85df000000         jne 0x4d3ab9
// 004d39da  8b06                 mov eax, dword ptr [esi]
// 004d39dc  3bf8                 cmp edi, eax
// 004d39de  7565                 jne 0x4d3a45
// 004d39e0  8b4608               mov eax, dword ptr [esi + 8]
// 004d39e3  80782800             cmp byte ptr [eax + 0x28], 0
// 004d39e7  7512                 jne 0x4d39fb
// 004d39e9  885828               mov byte ptr [eax + 0x28], bl
// 004d39ec  56                   push esi
// 004d39ed  8bcd                 mov ecx, ebp
// 004d39ef  c6462800             mov byte ptr [esi + 0x28], 0
// 004d39f3  e898cdffff           call 0x4d0790
// 004d39f8  8b4608               mov eax, dword ptr [esi + 8]
// 004d39fb  80782900             cmp byte ptr [eax + 0x29], 0
// 004d39ff  7574                 jne 0x4d3a75
// 004d3a01  8b08                 mov ecx, dword ptr [eax]
// 004d3a03  385928               cmp byte ptr [ecx + 0x28], bl
// 004d3a06  7508                 jne 0x4d3a10
// 004d3a08  8b5008               mov edx, dword ptr [eax + 8]
// 004d3a0b  385a28               cmp byte ptr [edx + 0x28], bl
// 004d3a0e  7461                 je 0x4d3a71
// 004d3a10  8b4808               mov ecx, dword ptr [eax + 8]
// 004d3a13  385928               cmp byte ptr [ecx + 0x28], bl
// 004d3a16  7514                 jne 0x4d3a2c
// 004d3a18  8b10                 mov edx, dword ptr [eax]
// 004d3a1a  885a28               mov byte ptr [edx + 0x28], bl
// 004d3a1d  50                   push eax
// 004d3a1e  8bcd                 mov ecx, ebp
// 004d3a20  c6402800             mov byte ptr [eax + 0x28], 0
// 004d3a24  e867c8ffff           call 0x4d0290
// 004d3a29  8b4608               mov eax, dword ptr [esi + 8]
// 004d3a2c  8a4e28               mov cl, byte ptr [esi + 0x28]
// 004d3a2f  884828               mov byte ptr [eax + 0x28], cl
// 004d3a32  885e28               mov byte ptr [esi + 0x28], bl
// 004d3a35  8b5008               mov edx, dword ptr [eax + 8]
// 004d3a38  56                   push esi
// 004d3a39  8bcd                 mov ecx, ebp
// 004d3a3b  885a28               mov byte ptr [edx + 0x28], bl
// 004d3a3e  e84dcdffff           call 0x4d0790
// 004d3a43  eb74                 jmp 0x4d3ab9
// 004d3a45  80782800             cmp byte ptr [eax + 0x28], 0
// 004d3a49  7511                 jne 0x4d3a5c
// 004d3a4b  885828               mov byte ptr [eax + 0x28], bl
// 004d3a4e  56                   push esi
// 004d3a4f  8bcd                 mov ecx, ebp
// 004d3a51  c6462800             mov byte ptr [esi + 0x28], 0
// 004d3a55  e836c8ffff           call 0x4d0290
// 004d3a5a  8b06                 mov eax, dword ptr [esi]
// 004d3a5c  80782900             cmp byte ptr [eax + 0x29], 0
// 004d3a60  7513                 jne 0x4d3a75
// 004d3a62  8b4808               mov ecx, dword ptr [eax + 8]
// 004d3a65  385928               cmp byte ptr [ecx + 0x28], bl
// 004d3a68  751e                 jne 0x4d3a88
// 004d3a6a  8b10                 mov edx, dword ptr [eax]
// 004d3a6c  385a28               cmp byte ptr [edx + 0x28], bl
// 004d3a6f  7517                 jne 0x4d3a88
// 004d3a71  c6402800             mov byte ptr [eax + 0x28], 0
// 004d3a75  8b4504               mov eax, dword ptr [ebp + 4]
// 004d3a78  8bfe                 mov edi, esi
// 004d3a7a  3b7804               cmp edi, dword ptr [eax + 4]
// 004d3a7d  8b7604               mov esi, dword ptr [esi + 4]
// 004d3a80  0f854bffffff         jne 0x4d39d1
// 004d3a86  eb31                 jmp 0x4d3ab9
// 004d3a88  8b08                 mov ecx, dword ptr [eax]
// 004d3a8a  385928               cmp byte ptr [ecx + 0x28], bl
// 004d3a8d  7514                 jne 0x4d3aa3
// 004d3a8f  8b5008               mov edx, dword ptr [eax + 8]
// 004d3a92  885a28               mov byte ptr [edx + 0x28], bl
// 004d3a95  50                   push eax
// 004d3a96  8bcd                 mov ecx, ebp
// 004d3a98  c6402800             mov byte ptr [eax + 0x28], 0
// 004d3a9c  e8efccffff           call 0x4d0790
// 004d3aa1  8b06                 mov eax, dword ptr [esi]
// 004d3aa3  8a4e28               mov cl, byte ptr [esi + 0x28]
// 004d3aa6  884828               mov byte ptr [eax + 0x28], cl
// 004d3aa9  885e28               mov byte ptr [esi + 0x28], bl
// 004d3aac  8b10                 mov edx, dword ptr [eax]
// 004d3aae  56                   push esi
// 004d3aaf  8bcd                 mov ecx, ebp
// 004d3ab1  885a28               mov byte ptr [edx + 0x28], bl
// 004d3ab4  e8d7c7ffff           call 0x4d0290
// 004d3ab9  885f28               mov byte ptr [edi + 0x28], bl
// 004d3abc  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d3ac0  8b4024               mov eax, dword ptr [eax + 0x24]
// 004d3ac3  85c0                 test eax, eax
// 004d3ac5  744c                 je 0x4d3b13
// 004d3ac7  83c004               add eax, 4
// 004d3aca  50                   push eax
// 004d3acb  ff15e8d27700         call dword ptr [0x77d2e8]
// 004d3ad1  85c0                 test eax, eax
// 004d3ad3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004d3ad7  7533                 jne 0x4d3b0c
// 004d3ad9  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 004d3adc  8b7108               mov esi, dword ptr [ecx + 8]
// 004d3adf  85f6                 test esi, esi
// 004d3ae1  741b                 je 0x4d3afe
// 004d3ae3  8b0e                 mov ecx, dword ptr [esi]
// 004d3ae5  8b11                 mov edx, dword ptr [ecx]
// 004d3ae7  8b4204               mov eax, dword ptr [edx + 4]
// 004d3aea  ffd0                 call eax
// 004d3aec  8bc6                 mov eax, esi
// 004d3aee  8b7604               mov esi, dword ptr [esi + 4]
// 004d3af1  50                   push eax
// 004d3af2  e86bc11500           call 0x62fc62
// 004d3af7  83c404               add esp, 4
// 004d3afa  85f6                 test esi, esi
// 004d3afc  75e5                 jne 0x4d3ae3
// 004d3afe  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 004d3b01  85c9                 test ecx, ecx
// 004d3b03  7407                 je 0x4d3b0c
// 004d3b05  8b11                 mov edx, dword ptr [ecx]
// 004d3b07  8b02                 mov eax, dword ptr [edx]
// 004d3b09  53                   push ebx
// 004d3b0a  ffd0                 call eax
// 004d3b0c  c7472400000000       mov dword ptr [edi + 0x24], 0
// 004d3b13  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004d3b17  51                   push ecx
// 004d3b18  e845c11500           call 0x62fc62
// 004d3b1d  8b4508               mov eax, dword ptr [ebp + 8]
// 004d3b20  83c404               add esp, 4
// 004d3b23  85c0                 test eax, eax
// 004d3b25  7606                 jbe 0x4d3b2d
// 004d3b27  83c0ff               add eax, -1
// 004d3b2a  894508               mov dword ptr [ebp + 8], eax
// 004d3b2d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 004d3b31  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004d3b35  8b542470             mov edx, dword ptr [esp + 0x70]
// 004d3b39  5f                   pop edi
// 004d3b3a  5e                   pop esi
// 004d3b3b  894804               mov dword ptr [eax + 4], ecx
// 004d3b3e  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004d3b42  5d                   pop ebp
// 004d3b43  8910                 mov dword ptr [eax], edx
// 004d3b45  5b                   pop ebx
// 004d3b46  64890d00000000       mov dword ptr fs:[0], ecx
// 004d3b4d  83c458               add esp, 0x58
// 004d3b50  c20c00               ret 0xc
// library openrbx-client/RbxView\PBBMesh.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
