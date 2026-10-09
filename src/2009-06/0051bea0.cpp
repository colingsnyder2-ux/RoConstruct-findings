// roc 2009-06 0051bea0  unit: G3D::VVector3::?$Table  size: 796 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051bea0
//
// 0051bea0  6aff                 push -1
// 0051bea2  68b2db8500           push 0x85dbb2
// 0051bea7  64a100000000         mov eax, dword ptr fs:[0]
// 0051bead  50                   push eax
// 0051beae  64892500000000       mov dword ptr fs:[0], esp
// 0051beb5  83ec48               sub esp, 0x48
// 0051beb8  8b442460             mov eax, dword ptr [esp + 0x60]
// 0051bebc  80782100             cmp byte ptr [eax + 0x21], 0
// 0051bec0  53                   push ebx
// 0051bec1  8bd9                 mov ebx, ecx
// 0051bec3  895c2404             mov dword ptr [esp + 4], ebx
// 0051bec7  7459                 je 0x51bf22
// 0051bec9  68a4c98a00           push 0x8ac9a4
// 0051bece  8d4c240c             lea ecx, [esp + 0xc]
// 0051bed2  ff15b4e48900         call dword ptr [0x89e4b4]
// 0051bed8  8d4c2424             lea ecx, [esp + 0x24]
// 0051bedc  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0051bee4  ff15b8e98900         call dword ptr [0x89e9b8]
// 0051beea  8d442408             lea eax, [esp + 8]
// 0051beee  50                   push eax
// 0051beef  8d4c2434             lea ecx, [esp + 0x34]
// 0051bef3  c644245801           mov byte ptr [esp + 0x58], 1
// 0051bef8  c744242844c98a00     mov dword ptr [esp + 0x28], 0x8ac944
// 0051bf00  ff15b8e48900         call dword ptr [0x89e4b8]
// 0051bf06  68dc919700           push 0x9791dc
// 0051bf0b  8d4c2428             lea ecx, [esp + 0x28]
// 0051bf0f  51                   push ecx
// 0051bf10  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0051bf15  c744242c5cc98a00     mov dword ptr [esp + 0x2c], 0x8ac95c
// 0051bf1d  e828db1f00           call 0x719a4a
// 0051bf22  55                   push ebp
// 0051bf23  56                   push esi
// 0051bf24  57                   push edi
// 0051bf25  8d4c246c             lea ecx, [esp + 0x6c]
// 0051bf29  8be8                 mov ebp, eax
// 0051bf2b  e8e0abffff           call 0x516b10
// 0051bf30  8b4d00               mov ecx, dword ptr [ebp]
// 0051bf33  80792100             cmp byte ptr [ecx + 0x21], 0
// 0051bf37  7405                 je 0x51bf3e
// 0051bf39  8b7d08               mov edi, dword ptr [ebp + 8]
// 0051bf3c  eb1b                 jmp 0x51bf59
// 0051bf3e  8b5508               mov edx, dword ptr [ebp + 8]
// 0051bf41  807a2100             cmp byte ptr [edx + 0x21], 0
// 0051bf45  7404                 je 0x51bf4b
// 0051bf47  8bf9                 mov edi, ecx
// 0051bf49  eb0e                 jmp 0x51bf59
// 0051bf4b  8b442470             mov eax, dword ptr [esp + 0x70]
// 0051bf4f  8b7808               mov edi, dword ptr [eax + 8]
// 0051bf52  8d5008               lea edx, [eax + 8]
// 0051bf55  3bc5                 cmp eax, ebp
// 0051bf57  7567                 jne 0x51bfc0
// 0051bf59  807f2100             cmp byte ptr [edi + 0x21], 0
// 0051bf5d  8b7504               mov esi, dword ptr [ebp + 4]
// 0051bf60  7503                 jne 0x51bf65
// 0051bf62  897704               mov dword ptr [edi + 4], esi
// 0051bf65  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0051bf68  396804               cmp dword ptr [eax + 4], ebp
// 0051bf6b  7505                 jne 0x51bf72
// 0051bf6d  897804               mov dword ptr [eax + 4], edi
// 0051bf70  eb0b                 jmp 0x51bf7d
// 0051bf72  392e                 cmp dword ptr [esi], ebp
// 0051bf74  7504                 jne 0x51bf7a
// 0051bf76  893e                 mov dword ptr [esi], edi
// 0051bf78  eb03                 jmp 0x51bf7d
// 0051bf7a  897e08               mov dword ptr [esi + 8], edi
// 0051bf7d  8b5b18               mov ebx, dword ptr [ebx + 0x18]
// 0051bf80  392b                 cmp dword ptr [ebx], ebp
// 0051bf82  7515                 jne 0x51bf99
// 0051bf84  807f2100             cmp byte ptr [edi + 0x21], 0
// 0051bf88  7404                 je 0x51bf8e
// 0051bf8a  8bc6                 mov eax, esi
// 0051bf8c  eb09                 jmp 0x51bf97
// 0051bf8e  57                   push edi
// 0051bf8f  e81cabffff           call 0x516ab0
// 0051bf94  83c404               add esp, 4
// 0051bf97  8903                 mov dword ptr [ebx], eax
// 0051bf99  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051bf9d  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0051bfa0  396b08               cmp dword ptr [ebx + 8], ebp
// 0051bfa3  7578                 jne 0x51c01d
// 0051bfa5  807f2100             cmp byte ptr [edi + 0x21], 0
// 0051bfa9  7407                 je 0x51bfb2
// 0051bfab  8bc6                 mov eax, esi
// 0051bfad  894308               mov dword ptr [ebx + 8], eax
// 0051bfb0  eb6b                 jmp 0x51c01d
// 0051bfb2  57                   push edi
// 0051bfb3  e838abffff           call 0x516af0
// 0051bfb8  83c404               add esp, 4
// 0051bfbb  894308               mov dword ptr [ebx + 8], eax
// 0051bfbe  eb5d                 jmp 0x51c01d
// 0051bfc0  894104               mov dword ptr [ecx + 4], eax
// 0051bfc3  8b4d00               mov ecx, dword ptr [ebp]
// 0051bfc6  8908                 mov dword ptr [eax], ecx
// 0051bfc8  3b4508               cmp eax, dword ptr [ebp + 8]
// 0051bfcb  7504                 jne 0x51bfd1
// 0051bfcd  8bf0                 mov esi, eax
// 0051bfcf  eb19                 jmp 0x51bfea
// 0051bfd1  807f2100             cmp byte ptr [edi + 0x21], 0
// 0051bfd5  8b7004               mov esi, dword ptr [eax + 4]
// 0051bfd8  7503                 jne 0x51bfdd
// 0051bfda  897704               mov dword ptr [edi + 4], esi
// 0051bfdd  893e                 mov dword ptr [esi], edi
// 0051bfdf  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0051bfe2  890a                 mov dword ptr [edx], ecx
// 0051bfe4  8b5508               mov edx, dword ptr [ebp + 8]
// 0051bfe7  894204               mov dword ptr [edx + 4], eax
// 0051bfea  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 0051bfed  396904               cmp dword ptr [ecx + 4], ebp
// 0051bff0  7505                 jne 0x51bff7
// 0051bff2  894104               mov dword ptr [ecx + 4], eax
// 0051bff5  eb0e                 jmp 0x51c005
// 0051bff7  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0051bffa  3929                 cmp dword ptr [ecx], ebp
// 0051bffc  7504                 jne 0x51c002
// 0051bffe  8901                 mov dword ptr [ecx], eax
// 0051c000  eb03                 jmp 0x51c005
// 0051c002  894108               mov dword ptr [ecx + 8], eax
// 0051c005  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0051c008  894804               mov dword ptr [eax + 4], ecx
// 0051c00b  8d4d20               lea ecx, [ebp + 0x20]
// 0051c00e  83c020               add eax, 0x20
// 0051c011  3bc1                 cmp eax, ecx
// 0051c013  7408                 je 0x51c01d
// 0051c015  8a19                 mov bl, byte ptr [ecx]
// 0051c017  8a10                 mov dl, byte ptr [eax]
// 0051c019  8818                 mov byte ptr [eax], bl
// 0051c01b  8811                 mov byte ptr [ecx], dl
// 0051c01d  bb01000000           mov ebx, 1
// 0051c022  385d20               cmp byte ptr [ebp + 0x20], bl
// 0051c025  0f8504010000         jne 0x51c12f
// 0051c02b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051c02f  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0051c032  3b7a04               cmp edi, dword ptr [edx + 4]
// 0051c035  0f84f1000000         je 0x51c12c
// 0051c03b  eb03                 jmp 0x51c040
// 0051c03d  8d4900               lea ecx, [ecx]
// 0051c040  385f20               cmp byte ptr [edi + 0x20], bl
// 0051c043  0f85e3000000         jne 0x51c12c
// 0051c049  8b06                 mov eax, dword ptr [esi]
// 0051c04b  3bf8                 cmp edi, eax
// 0051c04d  7567                 jne 0x51c0b6
// 0051c04f  8b4608               mov eax, dword ptr [esi + 8]
// 0051c052  80782000             cmp byte ptr [eax + 0x20], 0
// 0051c056  7514                 jne 0x51c06c
// 0051c058  885820               mov byte ptr [eax + 0x20], bl
// 0051c05b  56                   push esi
// 0051c05c  c6462000             mov byte ptr [esi + 0x20], 0
// 0051c060  e8bbb7ffff           call 0x517820
// 0051c065  8b4608               mov eax, dword ptr [esi + 8]
// 0051c068  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051c06c  80782100             cmp byte ptr [eax + 0x21], 0
// 0051c070  7576                 jne 0x51c0e8
// 0051c072  8b10                 mov edx, dword ptr [eax]
// 0051c074  385a20               cmp byte ptr [edx + 0x20], bl
// 0051c077  7508                 jne 0x51c081
// 0051c079  8b5008               mov edx, dword ptr [eax + 8]
// 0051c07c  385a20               cmp byte ptr [edx + 0x20], bl
// 0051c07f  7463                 je 0x51c0e4
// 0051c081  8b5008               mov edx, dword ptr [eax + 8]
// 0051c084  385a20               cmp byte ptr [edx + 0x20], bl
// 0051c087  7516                 jne 0x51c09f
// 0051c089  8b10                 mov edx, dword ptr [eax]
// 0051c08b  885a20               mov byte ptr [edx + 0x20], bl
// 0051c08e  50                   push eax
// 0051c08f  c6402000             mov byte ptr [eax + 0x20], 0
// 0051c093  e8b8a9ffff           call 0x516a50
// 0051c098  8b4608               mov eax, dword ptr [esi + 8]
// 0051c09b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051c09f  8a5620               mov dl, byte ptr [esi + 0x20]
// 0051c0a2  885020               mov byte ptr [eax + 0x20], dl
// 0051c0a5  885e20               mov byte ptr [esi + 0x20], bl
// 0051c0a8  8b4008               mov eax, dword ptr [eax + 8]
// 0051c0ab  56                   push esi
// 0051c0ac  885820               mov byte ptr [eax + 0x20], bl
// 0051c0af  e86cb7ffff           call 0x517820
// 0051c0b4  eb76                 jmp 0x51c12c
// 0051c0b6  80782000             cmp byte ptr [eax + 0x20], 0
// 0051c0ba  7513                 jne 0x51c0cf
// 0051c0bc  885820               mov byte ptr [eax + 0x20], bl
// 0051c0bf  56                   push esi
// 0051c0c0  c6462000             mov byte ptr [esi + 0x20], 0
// 0051c0c4  e887a9ffff           call 0x516a50
// 0051c0c9  8b06                 mov eax, dword ptr [esi]
// 0051c0cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051c0cf  80782100             cmp byte ptr [eax + 0x21], 0
// 0051c0d3  7513                 jne 0x51c0e8
// 0051c0d5  8b5008               mov edx, dword ptr [eax + 8]
// 0051c0d8  385a20               cmp byte ptr [edx + 0x20], bl
// 0051c0db  751e                 jne 0x51c0fb
// 0051c0dd  8b10                 mov edx, dword ptr [eax]
// 0051c0df  385a20               cmp byte ptr [edx + 0x20], bl
// 0051c0e2  7517                 jne 0x51c0fb
// 0051c0e4  c6402000             mov byte ptr [eax + 0x20], 0
// 0051c0e8  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0051c0eb  8bfe                 mov edi, esi
// 0051c0ed  8b7604               mov esi, dword ptr [esi + 4]
// 0051c0f0  3b7804               cmp edi, dword ptr [eax + 4]
// 0051c0f3  0f8547ffffff         jne 0x51c040
// 0051c0f9  eb31                 jmp 0x51c12c
// 0051c0fb  8b10                 mov edx, dword ptr [eax]
// 0051c0fd  385a20               cmp byte ptr [edx + 0x20], bl
// 0051c100  7516                 jne 0x51c118
// 0051c102  8b5008               mov edx, dword ptr [eax + 8]
// 0051c105  885a20               mov byte ptr [edx + 0x20], bl
// 0051c108  50                   push eax
// 0051c109  c6402000             mov byte ptr [eax + 0x20], 0
// 0051c10d  e80eb7ffff           call 0x517820
// 0051c112  8b06                 mov eax, dword ptr [esi]
// 0051c114  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051c118  8a5620               mov dl, byte ptr [esi + 0x20]
// 0051c11b  885020               mov byte ptr [eax + 0x20], dl
// 0051c11e  885e20               mov byte ptr [esi + 0x20], bl
// 0051c121  8b00                 mov eax, dword ptr [eax]
// 0051c123  56                   push esi
// 0051c124  885820               mov byte ptr [eax + 0x20], bl
// 0051c127  e824a9ffff           call 0x516a50
// 0051c12c  885f20               mov byte ptr [edi + 0x20], bl
// 0051c12f  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0051c132  85c0                 test eax, eax
// 0051c134  744a                 je 0x51c180
// 0051c136  83c004               add eax, 4
// 0051c139  50                   push eax
// 0051c13a  ff15a4e18900         call dword ptr [0x89e1a4]
// 0051c140  85c0                 test eax, eax
// 0051c142  7535                 jne 0x51c179
// 0051c144  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 0051c147  8b7108               mov esi, dword ptr [ecx + 8]
// 0051c14a  85f6                 test esi, esi
// 0051c14c  741d                 je 0x51c16b
// 0051c14e  8bff                 mov edi, edi
// 0051c150  8b0e                 mov ecx, dword ptr [esi]
// 0051c152  8b11                 mov edx, dword ptr [ecx]
// 0051c154  8b4204               mov eax, dword ptr [edx + 4]
// 0051c157  ffd0                 call eax
// 0051c159  8bc6                 mov eax, esi
// 0051c15b  8b7604               mov esi, dword ptr [esi + 4]
// 0051c15e  50                   push eax
// 0051c15f  e8cec81f00           call 0x718a32
// 0051c164  83c404               add esp, 4
// 0051c167  85f6                 test esi, esi
// 0051c169  75e5                 jne 0x51c150
// 0051c16b  8b4d1c               mov ecx, dword ptr [ebp + 0x1c]
// 0051c16e  85c9                 test ecx, ecx
// 0051c170  7407                 je 0x51c179
// 0051c172  8b11                 mov edx, dword ptr [ecx]
// 0051c174  8b02                 mov eax, dword ptr [edx]
// 0051c176  53                   push ebx
// 0051c177  ffd0                 call eax
// 0051c179  c7451c00000000       mov dword ptr [ebp + 0x1c], 0
// 0051c180  55                   push ebp
// 0051c181  e8acc81f00           call 0x718a32
// 0051c186  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051c18a  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0051c18d  83c404               add esp, 4
// 0051c190  5f                   pop edi
// 0051c191  5e                   pop esi
// 0051c192  5d                   pop ebp
// 0051c193  85c0                 test eax, eax
// 0051c195  7604                 jbe 0x51c19b
// 0051c197  48                   dec eax
// 0051c198  89421c               mov dword ptr [edx + 0x1c], eax
// 0051c19b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0051c19f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0051c1a3  8b12                 mov edx, dword ptr [edx]
// 0051c1a5  894804               mov dword ptr [eax + 4], ecx
// 0051c1a8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0051c1ac  8910                 mov dword ptr [eax], edx
// 0051c1ae  5b                   pop ebx
// 0051c1af  64890d00000000       mov dword ptr fs:[0], ecx
// 0051c1b6  83c454               add esp, 0x54
// 0051c1b9  c20c00               ret 0xc
// library openrbx-client/RbxView\PBBMesh.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
