// roc 2009-12 0073ebb0  unit: RBX::VInstance::V?$shared_ptr::V?$vector::V?$copy_on_write_ptr::?$sp_counted_impl_p  size: 724 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073ebb0
//
// 0073ebb0  64a100000000         mov eax, dword ptr fs:[0]
// 0073ebb6  6aff                 push -1
// 0073ebb8  6812699500           push 0x956912
// 0073ebbd  50                   push eax
// 0073ebbe  64892500000000       mov dword ptr fs:[0], esp
// 0073ebc5  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073ebc9  83ec48               sub esp, 0x48
// 0073ebcc  80783100             cmp byte ptr [eax + 0x31], 0
// 0073ebd0  55                   push ebp
// 0073ebd1  8be9                 mov ebp, ecx
// 0073ebd3  7459                 je 0x73ec2e
// 0073ebd5  68e4f49900           push 0x99f4e4
// 0073ebda  8d4c240c             lea ecx, [esp + 0xc]
// 0073ebde  ff15f4b69800         call dword ptr [0x98b6f4]
// 0073ebe4  8d4c2424             lea ecx, [esp + 0x24]
// 0073ebe8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0073ebf0  ff1554b79800         call dword ptr [0x98b754]
// 0073ebf6  8d442408             lea eax, [esp + 8]
// 0073ebfa  50                   push eax
// 0073ebfb  8d4c2434             lea ecx, [esp + 0x34]
// 0073ebff  c644245801           mov byte ptr [esp + 0x58], 1
// 0073ec04  c744242884f49900     mov dword ptr [esp + 0x28], 0x99f484
// 0073ec0c  ff15f0b69800         call dword ptr [0x98b6f0]
// 0073ec12  688cefa800           push 0xa8ef8c
// 0073ec17  8d4c2428             lea ecx, [esp + 0x28]
// 0073ec1b  51                   push ecx
// 0073ec1c  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0073ec21  c744242c9cf49900     mov dword ptr [esp + 0x2c], 0x99f49c
// 0073ec29  e84a5c0b00           call 0x7f4878
// 0073ec2e  53                   push ebx
// 0073ec2f  56                   push esi
// 0073ec30  8bd8                 mov ebx, eax
// 0073ec32  57                   push edi
// 0073ec33  8d4c246c             lea ecx, [esp + 0x6c]
// 0073ec37  895c2410             mov dword ptr [esp + 0x10], ebx
// 0073ec3b  e8b04cddff           call 0x5138f0
// 0073ec40  8b0b                 mov ecx, dword ptr [ebx]
// 0073ec42  80793100             cmp byte ptr [ecx + 0x31], 0
// 0073ec46  7405                 je 0x73ec4d
// 0073ec48  8b7b08               mov edi, dword ptr [ebx + 8]
// 0073ec4b  eb1b                 jmp 0x73ec68
// 0073ec4d  8b5308               mov edx, dword ptr [ebx + 8]
// 0073ec50  807a3100             cmp byte ptr [edx + 0x31], 0
// 0073ec54  7404                 je 0x73ec5a
// 0073ec56  8bf9                 mov edi, ecx
// 0073ec58  eb0e                 jmp 0x73ec68
// 0073ec5a  8b442470             mov eax, dword ptr [esp + 0x70]
// 0073ec5e  8b7808               mov edi, dword ptr [eax + 8]
// 0073ec61  8d5008               lea edx, [eax + 8]
// 0073ec64  3bc3                 cmp eax, ebx
// 0073ec66  756b                 jne 0x73ecd3
// 0073ec68  807f3100             cmp byte ptr [edi + 0x31], 0
// 0073ec6c  8b7304               mov esi, dword ptr [ebx + 4]
// 0073ec6f  7503                 jne 0x73ec74
// 0073ec71  897704               mov dword ptr [edi + 4], esi
// 0073ec74  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0073ec77  395804               cmp dword ptr [eax + 4], ebx
// 0073ec7a  7505                 jne 0x73ec81
// 0073ec7c  897804               mov dword ptr [eax + 4], edi
// 0073ec7f  eb0b                 jmp 0x73ec8c
// 0073ec81  391e                 cmp dword ptr [esi], ebx
// 0073ec83  7504                 jne 0x73ec89
// 0073ec85  893e                 mov dword ptr [esi], edi
// 0073ec87  eb03                 jmp 0x73ec8c
// 0073ec89  897e08               mov dword ptr [esi + 8], edi
// 0073ec8c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0073ec8f  8b03                 mov eax, dword ptr [ebx]
// 0073ec91  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0073ec95  7515                 jne 0x73ecac
// 0073ec97  807f3100             cmp byte ptr [edi + 0x31], 0
// 0073ec9b  7404                 je 0x73eca1
// 0073ec9d  8bc6                 mov eax, esi
// 0073ec9f  eb09                 jmp 0x73ecaa
// 0073eca1  57                   push edi
// 0073eca2  e8e9210200           call 0x760e90
// 0073eca7  83c404               add esp, 4
// 0073ecaa  8903                 mov dword ptr [ebx], eax
// 0073ecac  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0073ecaf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073ecb3  394b08               cmp dword ptr [ebx + 8], ecx
// 0073ecb6  7577                 jne 0x73ed2f
// 0073ecb8  807f3100             cmp byte ptr [edi + 0x31], 0
// 0073ecbc  7407                 je 0x73ecc5
// 0073ecbe  8bc6                 mov eax, esi
// 0073ecc0  894308               mov dword ptr [ebx + 8], eax
// 0073ecc3  eb6a                 jmp 0x73ed2f
// 0073ecc5  57                   push edi
// 0073ecc6  e845c1f4ff           call 0x68ae10
// 0073eccb  83c404               add esp, 4
// 0073ecce  894308               mov dword ptr [ebx + 8], eax
// 0073ecd1  eb5c                 jmp 0x73ed2f
// 0073ecd3  894104               mov dword ptr [ecx + 4], eax
// 0073ecd6  8b0b                 mov ecx, dword ptr [ebx]
// 0073ecd8  8908                 mov dword ptr [eax], ecx
// 0073ecda  3b4308               cmp eax, dword ptr [ebx + 8]
// 0073ecdd  7504                 jne 0x73ece3
// 0073ecdf  8bf0                 mov esi, eax
// 0073ece1  eb19                 jmp 0x73ecfc
// 0073ece3  807f3100             cmp byte ptr [edi + 0x31], 0
// 0073ece7  8b7004               mov esi, dword ptr [eax + 4]
// 0073ecea  7503                 jne 0x73ecef
// 0073ecec  897704               mov dword ptr [edi + 4], esi
// 0073ecef  893e                 mov dword ptr [esi], edi
// 0073ecf1  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0073ecf4  890a                 mov dword ptr [edx], ecx
// 0073ecf6  8b5308               mov edx, dword ptr [ebx + 8]
// 0073ecf9  894204               mov dword ptr [edx + 4], eax
// 0073ecfc  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0073ecff  395904               cmp dword ptr [ecx + 4], ebx
// 0073ed02  7505                 jne 0x73ed09
// 0073ed04  894104               mov dword ptr [ecx + 4], eax
// 0073ed07  eb0e                 jmp 0x73ed17
// 0073ed09  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0073ed0c  3919                 cmp dword ptr [ecx], ebx
// 0073ed0e  7504                 jne 0x73ed14
// 0073ed10  8901                 mov dword ptr [ecx], eax
// 0073ed12  eb03                 jmp 0x73ed17
// 0073ed14  894108               mov dword ptr [ecx + 8], eax
// 0073ed17  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0073ed1a  894804               mov dword ptr [eax + 4], ecx
// 0073ed1d  8d4b30               lea ecx, [ebx + 0x30]
// 0073ed20  83c030               add eax, 0x30
// 0073ed23  3bc1                 cmp eax, ecx
// 0073ed25  7408                 je 0x73ed2f
// 0073ed27  8a19                 mov bl, byte ptr [ecx]
// 0073ed29  8a10                 mov dl, byte ptr [eax]
// 0073ed2b  8818                 mov byte ptr [eax], bl
// 0073ed2d  8811                 mov byte ptr [ecx], dl
// 0073ed2f  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073ed33  b301                 mov bl, 1
// 0073ed35  385a30               cmp byte ptr [edx + 0x30], bl
// 0073ed38  0f85fd000000         jne 0x73ee3b
// 0073ed3e  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0073ed41  3b7804               cmp edi, dword ptr [eax + 4]
// 0073ed44  0f84ee000000         je 0x73ee38
// 0073ed4a  8d9b00000000         lea ebx, [ebx]
// 0073ed50  385f30               cmp byte ptr [edi + 0x30], bl
// 0073ed53  0f85df000000         jne 0x73ee38
// 0073ed59  8b06                 mov eax, dword ptr [esi]
// 0073ed5b  3bf8                 cmp edi, eax
// 0073ed5d  7565                 jne 0x73edc4
// 0073ed5f  8b4608               mov eax, dword ptr [esi + 8]
// 0073ed62  80783000             cmp byte ptr [eax + 0x30], 0
// 0073ed66  7512                 jne 0x73ed7a
// 0073ed68  885830               mov byte ptr [eax + 0x30], bl
// 0073ed6b  56                   push esi
// 0073ed6c  8bcd                 mov ecx, ebp
// 0073ed6e  c6463000             mov byte ptr [esi + 0x30], 0
// 0073ed72  e8994addff           call 0x513810
// 0073ed77  8b4608               mov eax, dword ptr [esi + 8]
// 0073ed7a  80783100             cmp byte ptr [eax + 0x31], 0
// 0073ed7e  7574                 jne 0x73edf4
// 0073ed80  8b08                 mov ecx, dword ptr [eax]
// 0073ed82  385930               cmp byte ptr [ecx + 0x30], bl
// 0073ed85  7508                 jne 0x73ed8f
// 0073ed87  8b5008               mov edx, dword ptr [eax + 8]
// 0073ed8a  385a30               cmp byte ptr [edx + 0x30], bl
// 0073ed8d  7461                 je 0x73edf0
// 0073ed8f  8b4808               mov ecx, dword ptr [eax + 8]
// 0073ed92  385930               cmp byte ptr [ecx + 0x30], bl
// 0073ed95  7514                 jne 0x73edab
// 0073ed97  8b10                 mov edx, dword ptr [eax]
// 0073ed99  885a30               mov byte ptr [edx + 0x30], bl
// 0073ed9c  50                   push eax
// 0073ed9d  8bcd                 mov ecx, ebp
// 0073ed9f  c6403000             mov byte ptr [eax + 0x30], 0
// 0073eda3  e8f83efcff           call 0x702ca0
// 0073eda8  8b4608               mov eax, dword ptr [esi + 8]
// 0073edab  8a4e30               mov cl, byte ptr [esi + 0x30]
// 0073edae  884830               mov byte ptr [eax + 0x30], cl
// 0073edb1  885e30               mov byte ptr [esi + 0x30], bl
// 0073edb4  8b5008               mov edx, dword ptr [eax + 8]
// 0073edb7  56                   push esi
// 0073edb8  8bcd                 mov ecx, ebp
// 0073edba  885a30               mov byte ptr [edx + 0x30], bl
// 0073edbd  e84e4addff           call 0x513810
// 0073edc2  eb74                 jmp 0x73ee38
// 0073edc4  80783000             cmp byte ptr [eax + 0x30], 0
// 0073edc8  7511                 jne 0x73eddb
// 0073edca  885830               mov byte ptr [eax + 0x30], bl
// 0073edcd  56                   push esi
// 0073edce  8bcd                 mov ecx, ebp
// 0073edd0  c6463000             mov byte ptr [esi + 0x30], 0
// 0073edd4  e8c73efcff           call 0x702ca0
// 0073edd9  8b06                 mov eax, dword ptr [esi]
// 0073eddb  80783100             cmp byte ptr [eax + 0x31], 0
// 0073eddf  7513                 jne 0x73edf4
// 0073ede1  8b4808               mov ecx, dword ptr [eax + 8]
// 0073ede4  385930               cmp byte ptr [ecx + 0x30], bl
// 0073ede7  751e                 jne 0x73ee07
// 0073ede9  8b10                 mov edx, dword ptr [eax]
// 0073edeb  385a30               cmp byte ptr [edx + 0x30], bl
// 0073edee  7517                 jne 0x73ee07
// 0073edf0  c6403000             mov byte ptr [eax + 0x30], 0
// 0073edf4  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0073edf7  8bfe                 mov edi, esi
// 0073edf9  8b7604               mov esi, dword ptr [esi + 4]
// 0073edfc  3b7804               cmp edi, dword ptr [eax + 4]
// 0073edff  0f854bffffff         jne 0x73ed50
// 0073ee05  eb31                 jmp 0x73ee38
// 0073ee07  8b08                 mov ecx, dword ptr [eax]
// 0073ee09  385930               cmp byte ptr [ecx + 0x30], bl
// 0073ee0c  7514                 jne 0x73ee22
// 0073ee0e  8b5008               mov edx, dword ptr [eax + 8]
// 0073ee11  885a30               mov byte ptr [edx + 0x30], bl
// 0073ee14  50                   push eax
// 0073ee15  8bcd                 mov ecx, ebp
// 0073ee17  c6403000             mov byte ptr [eax + 0x30], 0
// 0073ee1b  e8f049ddff           call 0x513810
// 0073ee20  8b06                 mov eax, dword ptr [esi]
// 0073ee22  8a4e30               mov cl, byte ptr [esi + 0x30]
// 0073ee25  884830               mov byte ptr [eax + 0x30], cl
// 0073ee28  885e30               mov byte ptr [esi + 0x30], bl
// 0073ee2b  8b10                 mov edx, dword ptr [eax]
// 0073ee2d  56                   push esi
// 0073ee2e  8bcd                 mov ecx, ebp
// 0073ee30  885a30               mov byte ptr [edx + 0x30], bl
// 0073ee33  e8683efcff           call 0x702ca0
// 0073ee38  885f30               mov byte ptr [edi + 0x30], bl
// 0073ee3b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073ee3f  83c10c               add ecx, 0xc
// 0073ee42  e87984d3ff           call 0x4772c0
// 0073ee47  8b442410             mov eax, dword ptr [esp + 0x10]
// 0073ee4b  50                   push eax
// 0073ee4c  e8094a0b00           call 0x7f385a
// 0073ee51  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0073ee54  83c404               add esp, 4
// 0073ee57  5f                   pop edi
// 0073ee58  5e                   pop esi
// 0073ee59  5b                   pop ebx
// 0073ee5a  85c0                 test eax, eax
// 0073ee5c  7604                 jbe 0x73ee62
// 0073ee5e  48                   dec eax
// 0073ee5f  89451c               mov dword ptr [ebp + 0x1c], eax
// 0073ee62  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0073ee66  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0073ee6a  8b5500               mov edx, dword ptr [ebp]
// 0073ee6d  894804               mov dword ptr [eax + 4], ecx
// 0073ee70  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0073ee74  8910                 mov dword ptr [eax], edx
// 0073ee76  5d                   pop ebp
// 0073ee77  64890d00000000       mov dword ptr fs:[0], ecx
// 0073ee7e  83c454               add esp, 0x54
// 0073ee81  c20c00               ret 0xc
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
