// roc 2007-08 004cc330  unit: CSHA1  size: 1007 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cc330
//
// 004cc330  83ec18               sub esp, 0x18
// 004cc333  53                   push ebx
// 004cc334  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004cc338  55                   push ebp
// 004cc339  56                   push esi
// 004cc33a  8b742428             mov esi, dword ptr [esp + 0x28]
// 004cc33e  8b0e                 mov ecx, dword ptr [esi]
// 004cc340  8b5604               mov edx, dword ptr [esi + 4]
// 004cc343  57                   push edi
// 004cc344  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004cc348  335704               xor edx, dword ptr [edi + 4]
// 004cc34b  330f                 xor ecx, dword ptr [edi]
// 004cc34d  8b7e08               mov edi, dword ptr [esi + 8]
// 004cc350  337b08               xor edi, dword ptr [ebx + 8]
// 004cc353  8b760c               mov esi, dword ptr [esi + 0xc]
// 004cc356  897c2420             mov dword ptr [esp + 0x20], edi
// 004cc35a  8bfb                 mov edi, ebx
// 004cc35c  33770c               xor esi, dword ptr [edi + 0xc]
// 004cc35f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004cc363  89742424             mov dword ptr [esp + 0x24], esi
// 004cc367  8b442430             mov eax, dword ptr [esp + 0x30]
// 004cc36b  c1ee18               shr esi, 0x18
// 004cc36e  8b34b518408900       mov esi, dword ptr [esi*4 + 0x894018]
// 004cc375  c1eb10               shr ebx, 0x10
// 004cc378  0fb6fb               movzx edi, bl
// 004cc37b  3334bd183c8900       xor esi, dword ptr [edi*4 + 0x893c18]
// 004cc382  8bda                 mov ebx, edx
// 004cc384  c1eb08               shr ebx, 8
// 004cc387  0fb6fb               movzx edi, bl
// 004cc38a  3334bd18388900       xor esi, dword ptr [edi*4 + 0x893818]
// 004cc391  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004cc395  0fb6f9               movzx edi, cl
// 004cc398  3334bd18348900       xor esi, dword ptr [edi*4 + 0x893418]
// 004cc39f  c1eb10               shr ebx, 0x10
// 004cc3a2  8930                 mov dword ptr [eax], esi
// 004cc3a4  0fb6f3               movzx esi, bl
// 004cc3a7  8b34b5183c8900       mov esi, dword ptr [esi*4 + 0x893c18]
// 004cc3ae  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004cc3b2  c1eb08               shr ebx, 8
// 004cc3b5  0fb6fb               movzx edi, bl
// 004cc3b8  3334bd18388900       xor esi, dword ptr [edi*4 + 0x893818]
// 004cc3bf  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004cc3c3  8bf9                 mov edi, ecx
// 004cc3c5  c1ef18               shr edi, 0x18
// 004cc3c8  3334bd18408900       xor esi, dword ptr [edi*4 + 0x894018]
// 004cc3cf  0fb6fa               movzx edi, dl
// 004cc3d2  3334bd18348900       xor esi, dword ptr [edi*4 + 0x893418]
// 004cc3d9  c1eb08               shr ebx, 8
// 004cc3dc  897004               mov dword ptr [eax + 4], esi
// 004cc3df  0fb6f3               movzx esi, bl
// 004cc3e2  8b34b518388900       mov esi, dword ptr [esi*4 + 0x893818]
// 004cc3e9  8bfa                 mov edi, edx
// 004cc3eb  8bd9                 mov ebx, ecx
// 004cc3ed  c1ef18               shr edi, 0x18
// 004cc3f0  3334bd18408900       xor esi, dword ptr [edi*4 + 0x894018]
// 004cc3f7  c1eb10               shr ebx, 0x10
// 004cc3fa  0fb6fb               movzx edi, bl
// 004cc3fd  3334bd183c8900       xor esi, dword ptr [edi*4 + 0x893c18]
// 004cc404  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004cc408  0fb6fb               movzx edi, bl
// 004cc40b  3334bd18348900       xor esi, dword ptr [edi*4 + 0x893418]
// 004cc412  c1ea10               shr edx, 0x10
// 004cc415  897008               mov dword ptr [eax + 8], esi
// 004cc418  0fb6d2               movzx edx, dl
// 004cc41b  c1eb18               shr ebx, 0x18
// 004cc41e  8b349d18408900       mov esi, dword ptr [ebx*4 + 0x894018]
// 004cc425  333495183c8900       xor esi, dword ptr [edx*4 + 0x893c18]
// 004cc42c  0fb6542424           movzx edx, byte ptr [esp + 0x24]
// 004cc431  c1e908               shr ecx, 8
// 004cc434  0fb6c9               movzx ecx, cl
// 004cc437  33348d18388900       xor esi, dword ptr [ecx*4 + 0x893818]
// 004cc43e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004cc446  33349518348900       xor esi, dword ptr [edx*4 + 0x893418]
// 004cc44d  89700c               mov dword ptr [eax + 0xc], esi
// 004cc450  8b0dccf98b00         mov ecx, dword ptr [0x8bf9cc]
// 004cc456  8d51ff               lea edx, [ecx - 1]
// 004cc459  83fa01               cmp edx, 1
// 004cc45c  0f8e36010000         jle 0x4cc598
// 004cc462  8b742434             mov esi, dword ptr [esp + 0x34]
// 004cc466  83c618               add esi, 0x18
// 004cc469  89742410             mov dword ptr [esp + 0x10], esi
// 004cc46d  8d4900               lea ecx, [ecx]
// 004cc470  8b4ef8               mov ecx, dword ptr [esi - 8]
// 004cc473  8b56fc               mov edx, dword ptr [esi - 4]
// 004cc476  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cc47a  8b7008               mov esi, dword ptr [eax + 8]
// 004cc47d  3337                 xor esi, dword ptr [edi]
// 004cc47f  335004               xor edx, dword ptr [eax + 4]
// 004cc482  3308                 xor ecx, dword ptr [eax]
// 004cc484  89742420             mov dword ptr [esp + 0x20], esi
// 004cc488  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004cc48c  8bf7                 mov esi, edi
// 004cc48e  8b7e04               mov edi, dword ptr [esi + 4]
// 004cc491  33780c               xor edi, dword ptr [eax + 0xc]
// 004cc494  c1eb10               shr ebx, 0x10
// 004cc497  897c2424             mov dword ptr [esp + 0x24], edi
// 004cc49b  0fb6db               movzx ebx, bl
// 004cc49e  c1ef18               shr edi, 0x18
// 004cc4a1  8b3cbd18408900       mov edi, dword ptr [edi*4 + 0x894018]
// 004cc4a8  333c9d183c8900       xor edi, dword ptr [ebx*4 + 0x893c18]
// 004cc4af  8bda                 mov ebx, edx
// 004cc4b1  c1eb08               shr ebx, 8
// 004cc4b4  0fb6db               movzx ebx, bl
// 004cc4b7  333c9d18388900       xor edi, dword ptr [ebx*4 + 0x893818]
// 004cc4be  0fb6d9               movzx ebx, cl
// 004cc4c1  333c9d18348900       xor edi, dword ptr [ebx*4 + 0x893418]
// 004cc4c8  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004cc4cc  c1eb10               shr ebx, 0x10
// 004cc4cf  8938                 mov dword ptr [eax], edi
// 004cc4d1  0fb6fb               movzx edi, bl
// 004cc4d4  8b3cbd183c8900       mov edi, dword ptr [edi*4 + 0x893c18]
// 004cc4db  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004cc4df  c1eb08               shr ebx, 8
// 004cc4e2  0fb6db               movzx ebx, bl
// 004cc4e5  333c9d18388900       xor edi, dword ptr [ebx*4 + 0x893818]
// 004cc4ec  8bd9                 mov ebx, ecx
// 004cc4ee  c1eb18               shr ebx, 0x18
// 004cc4f1  333c9d18408900       xor edi, dword ptr [ebx*4 + 0x894018]
// 004cc4f8  0fb6da               movzx ebx, dl
// 004cc4fb  333c9d18348900       xor edi, dword ptr [ebx*4 + 0x893418]
// 004cc502  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004cc506  897804               mov dword ptr [eax + 4], edi
// 004cc509  c1eb08               shr ebx, 8
// 004cc50c  0fb6fb               movzx edi, bl
// 004cc50f  8b3cbd18388900       mov edi, dword ptr [edi*4 + 0x893818]
// 004cc516  8bda                 mov ebx, edx
// 004cc518  c1eb18               shr ebx, 0x18
// 004cc51b  333c9d18408900       xor edi, dword ptr [ebx*4 + 0x894018]
// 004cc522  8bd9                 mov ebx, ecx
// 004cc524  c1eb10               shr ebx, 0x10
// 004cc527  0fb6db               movzx ebx, bl
// 004cc52a  333c9d183c8900       xor edi, dword ptr [ebx*4 + 0x893c18]
// 004cc531  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004cc535  0fb6eb               movzx ebp, bl
// 004cc538  333cad18348900       xor edi, dword ptr [ebp*4 + 0x893418]
// 004cc53f  c1ea10               shr edx, 0x10
// 004cc542  897808               mov dword ptr [eax + 8], edi
// 004cc545  0fb6d2               movzx edx, dl
// 004cc548  c1eb18               shr ebx, 0x18
// 004cc54b  8b3c9d18408900       mov edi, dword ptr [ebx*4 + 0x894018]
// 004cc552  333c95183c8900       xor edi, dword ptr [edx*4 + 0x893c18]
// 004cc559  0fb6542424           movzx edx, byte ptr [esp + 0x24]
// 004cc55e  c1e908               shr ecx, 8
// 004cc561  0fb6c9               movzx ecx, cl
// 004cc564  333c8d18388900       xor edi, dword ptr [ecx*4 + 0x893818]
// 004cc56b  83c610               add esi, 0x10
// 004cc56e  333c9518348900       xor edi, dword ptr [edx*4 + 0x893418]
// 004cc575  8b542414             mov edx, dword ptr [esp + 0x14]
// 004cc579  89780c               mov dword ptr [eax + 0xc], edi
// 004cc57c  8b0dccf98b00         mov ecx, dword ptr [0x8bf9cc]
// 004cc582  83c201               add edx, 1
// 004cc585  8d79ff               lea edi, [ecx - 1]
// 004cc588  3bd7                 cmp edx, edi
// 004cc58a  89542414             mov dword ptr [esp + 0x14], edx
// 004cc58e  89742410             mov dword ptr [esp + 0x10], esi
// 004cc592  0f8cd8feffff         jl 0x4cc470
// 004cc598  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004cc59c  c1e104               shl ecx, 4
// 004cc59f  8b5439f4             mov edx, dword ptr [ecx + edi - 0xc]
// 004cc5a3  8b6c39f8             mov ebp, dword ptr [ecx + edi - 8]
// 004cc5a7  335004               xor edx, dword ptr [eax + 4]
// 004cc5aa  8d3439               lea esi, [ecx + edi]
// 004cc5ad  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 004cc5b0  8b76fc               mov esi, dword ptr [esi - 4]
// 004cc5b3  33700c               xor esi, dword ptr [eax + 0xc]
// 004cc5b6  3308                 xor ecx, dword ptr [eax]
// 004cc5b8  336808               xor ebp, dword ptr [eax + 8]
// 004cc5bb  89742424             mov dword ptr [esp + 0x24], esi
// 004cc5bf  0fb6f1               movzx esi, cl
// 004cc5c2  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc5ca  8818                 mov byte ptr [eax], bl
// 004cc5cc  8bda                 mov ebx, edx
// 004cc5ce  c1eb08               shr ebx, 8
// 004cc5d1  0fb6f3               movzx esi, bl
// 004cc5d4  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc5dc  885801               mov byte ptr [eax + 1], bl
// 004cc5df  8bdd                 mov ebx, ebp
// 004cc5e1  c1eb10               shr ebx, 0x10
// 004cc5e4  0fb6f3               movzx esi, bl
// 004cc5e7  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc5ef  8b742424             mov esi, dword ptr [esp + 0x24]
// 004cc5f3  885802               mov byte ptr [eax + 2], bl
// 004cc5f6  c1ee18               shr esi, 0x18
// 004cc5f9  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc601  885803               mov byte ptr [eax + 3], bl
// 004cc604  0fb6f2               movzx esi, dl
// 004cc607  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc60f  885804               mov byte ptr [eax + 4], bl
// 004cc612  8bdd                 mov ebx, ebp
// 004cc614  c1eb08               shr ebx, 8
// 004cc617  0fb6f3               movzx esi, bl
// 004cc61a  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc622  885805               mov byte ptr [eax + 5], bl
// 004cc625  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004cc629  c1eb10               shr ebx, 0x10
// 004cc62c  0fb6f3               movzx esi, bl
// 004cc62f  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc637  885806               mov byte ptr [eax + 6], bl
// 004cc63a  8bf1                 mov esi, ecx
// 004cc63c  c1ee18               shr esi, 0x18
// 004cc63f  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc647  885807               mov byte ptr [eax + 7], bl
// 004cc64a  896c2420             mov dword ptr [esp + 0x20], ebp
// 004cc64e  0fb6742420           movzx esi, byte ptr [esp + 0x20]
// 004cc653  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc65b  885808               mov byte ptr [eax + 8], bl
// 004cc65e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 004cc662  c1eb08               shr ebx, 8
// 004cc665  0fb6f3               movzx esi, bl
// 004cc668  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc670  885809               mov byte ptr [eax + 9], bl
// 004cc673  8bd9                 mov ebx, ecx
// 004cc675  c1eb10               shr ebx, 0x10
// 004cc678  0fb6f3               movzx esi, bl
// 004cc67b  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc683  8bf2                 mov esi, edx
// 004cc685  88580a               mov byte ptr [eax + 0xa], bl
// 004cc688  c1ee18               shr esi, 0x18
// 004cc68b  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc693  0fb6742424           movzx esi, byte ptr [esp + 0x24]
// 004cc698  c1e908               shr ecx, 8
// 004cc69b  88580b               mov byte ptr [eax + 0xb], bl
// 004cc69e  0fb61cb519348900     movzx ebx, byte ptr [esi*4 + 0x893419]
// 004cc6a6  0fb6c9               movzx ecx, cl
// 004cc6a9  88580c               mov byte ptr [eax + 0xc], bl
// 004cc6ac  0fb60c8d19348900     movzx ecx, byte ptr [ecx*4 + 0x893419]
// 004cc6b4  c1ea10               shr edx, 0x10
// 004cc6b7  88480d               mov byte ptr [eax + 0xd], cl
// 004cc6ba  0fb6d2               movzx edx, dl
// 004cc6bd  0fb60c9519348900     movzx ecx, byte ptr [edx*4 + 0x893419]
// 004cc6c5  88480e               mov byte ptr [eax + 0xe], cl
// 004cc6c8  8bcd                 mov ecx, ebp
// 004cc6ca  c1e918               shr ecx, 0x18
// 004cc6cd  8a148d19348900       mov dl, byte ptr [ecx*4 + 0x893419]
// 004cc6d4  88500f               mov byte ptr [eax + 0xf], dl
// 004cc6d7  8b0dccf98b00         mov ecx, dword ptr [0x8bf9cc]
// 004cc6dd  c1e104               shl ecx, 4
// 004cc6e0  8b1439               mov edx, dword ptr [ecx + edi]
// 004cc6e3  3110                 xor dword ptr [eax], edx
// 004cc6e5  8b0dccf98b00         mov ecx, dword ptr [0x8bf9cc]
// 004cc6eb  c1e104               shl ecx, 4
// 004cc6ee  8b543904             mov edx, dword ptr [ecx + edi + 4]
// 004cc6f2  315004               xor dword ptr [eax + 4], edx
// 004cc6f5  8b0dccf98b00         mov ecx, dword ptr [0x8bf9cc]
// 004cc6fb  c1e104               shl ecx, 4
// 004cc6fe  8b543908             mov edx, dword ptr [ecx + edi + 8]
// 004cc702  315008               xor dword ptr [eax + 8], edx
// 004cc705  8b0dccf98b00         mov ecx, dword ptr [0x8bf9cc]
// 004cc70b  c1e104               shl ecx, 4
// 004cc70e  8b54390c             mov edx, dword ptr [ecx + edi + 0xc]
// 004cc712  31500c               xor dword ptr [eax + 0xc], edx
// 004cc715  5f                   pop edi
// 004cc716  5e                   pop esi
// 004cc717  5d                   pop ebp
// 004cc718  33c0                 xor eax, eax
// 004cc71a  5b                   pop ebx
// 004cc71b  83c418               add esp, 0x18
// 004cc71e  c3                   ret 
// library openrbx-raknet/rijndael.cpp (function ?rijndaelEncrypt@@YAHQAE0QAY133E@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet rijndael.cpp
