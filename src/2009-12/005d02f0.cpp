// roc 2009-12 005d02f0  unit: RBX::PartChunk  size: 796 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005d02f0
//
// 005d02f0  6aff                 push -1
// 005d02f2  6812699500           push 0x956912
// 005d02f7  64a100000000         mov eax, dword ptr fs:[0]
// 005d02fd  50                   push eax
// 005d02fe  64892500000000       mov dword ptr fs:[0], esp
// 005d0305  83ec48               sub esp, 0x48
// 005d0308  8b442460             mov eax, dword ptr [esp + 0x60]
// 005d030c  80782900             cmp byte ptr [eax + 0x29], 0
// 005d0310  53                   push ebx
// 005d0311  8bd9                 mov ebx, ecx
// 005d0313  895c2404             mov dword ptr [esp + 4], ebx
// 005d0317  7459                 je 0x5d0372
// 005d0319  68e4f49900           push 0x99f4e4
// 005d031e  8d4c240c             lea ecx, [esp + 0xc]
// 005d0322  ff15f4b69800         call dword ptr [0x98b6f4]
// 005d0328  8d4c2424             lea ecx, [esp + 0x24]
// 005d032c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 005d0334  ff1554b79800         call dword ptr [0x98b754]
// 005d033a  8d442408             lea eax, [esp + 8]
// 005d033e  50                   push eax
// 005d033f  8d4c2434             lea ecx, [esp + 0x34]
// 005d0343  c644245801           mov byte ptr [esp + 0x58], 1
// 005d0348  c744242884f49900     mov dword ptr [esp + 0x28], 0x99f484
// 005d0350  ff15f0b69800         call dword ptr [0x98b6f0]
// 005d0356  688cefa800           push 0xa8ef8c
// 005d035b  8d4c2428             lea ecx, [esp + 0x28]
// 005d035f  51                   push ecx
// 005d0360  c644245c00           mov byte ptr [esp + 0x5c], 0
// 005d0365  c744242c9cf49900     mov dword ptr [esp + 0x2c], 0x99f49c
// 005d036d  e806452200           call 0x7f4878
// 005d0372  55                   push ebp
// 005d0373  56                   push esi
// 005d0374  57                   push edi
// 005d0375  8d4c246c             lea ecx, [esp + 0x6c]
// 005d0379  8be8                 mov ebp, eax
// 005d037b  e8e0ceffff           call 0x5cd260
// 005d0380  8b4d00               mov ecx, dword ptr [ebp]
// 005d0383  80792900             cmp byte ptr [ecx + 0x29], 0
// 005d0387  7405                 je 0x5d038e
// 005d0389  8b7d08               mov edi, dword ptr [ebp + 8]
// 005d038c  eb1b                 jmp 0x5d03a9
// 005d038e  8b5508               mov edx, dword ptr [ebp + 8]
// 005d0391  807a2900             cmp byte ptr [edx + 0x29], 0
// 005d0395  7404                 je 0x5d039b
// 005d0397  8bf9                 mov edi, ecx
// 005d0399  eb0e                 jmp 0x5d03a9
// 005d039b  8b442470             mov eax, dword ptr [esp + 0x70]
// 005d039f  8b7808               mov edi, dword ptr [eax + 8]
// 005d03a2  8d5008               lea edx, [eax + 8]
// 005d03a5  3bc5                 cmp eax, ebp
// 005d03a7  7567                 jne 0x5d0410
// 005d03a9  807f2900             cmp byte ptr [edi + 0x29], 0
// 005d03ad  8b7504               mov esi, dword ptr [ebp + 4]
// 005d03b0  7503                 jne 0x5d03b5
// 005d03b2  897704               mov dword ptr [edi + 4], esi
// 005d03b5  8b4318               mov eax, dword ptr [ebx + 0x18]
// 005d03b8  396804               cmp dword ptr [eax + 4], ebp
// 005d03bb  7505                 jne 0x5d03c2
// 005d03bd  897804               mov dword ptr [eax + 4], edi
// 005d03c0  eb0b                 jmp 0x5d03cd
// 005d03c2  392e                 cmp dword ptr [esi], ebp
// 005d03c4  7504                 jne 0x5d03ca
// 005d03c6  893e                 mov dword ptr [esi], edi
// 005d03c8  eb03                 jmp 0x5d03cd
// 005d03ca  897e08               mov dword ptr [esi + 8], edi
// 005d03cd  8b5b18               mov ebx, dword ptr [ebx + 0x18]
// 005d03d0  392b                 cmp dword ptr [ebx], ebp
// 005d03d2  7515                 jne 0x5d03e9
// 005d03d4  807f2900             cmp byte ptr [edi + 0x29], 0
// 005d03d8  7404                 je 0x5d03de
// 005d03da  8bc6                 mov eax, esi
// 005d03dc  eb09                 jmp 0x5d03e7
// 005d03de  57                   push edi
// 005d03df  e89cc2ffff           call 0x5cc680
// 005d03e4  83c404               add esp, 4
// 005d03e7  8903                 mov dword ptr [ebx], eax
// 005d03e9  8b442410             mov eax, dword ptr [esp + 0x10]
// 005d03ed  8b5818               mov ebx, dword ptr [eax + 0x18]
// 005d03f0  396b08               cmp dword ptr [ebx + 8], ebp
// 005d03f3  7578                 jne 0x5d046d
// 005d03f5  807f2900             cmp byte ptr [edi + 0x29], 0
// 005d03f9  7407                 je 0x5d0402
// 005d03fb  8bc6                 mov eax, esi
// 005d03fd  894308               mov dword ptr [ebx + 8], eax
// 005d0400  eb6b                 jmp 0x5d046d
// 005d0402  57                   push edi
// 005d0403  e858c2ffff           call 0x5cc660
// 005d0408  83c404               add esp, 4
// 005d040b  894308               mov dword ptr [ebx + 8], eax
// 005d040e  eb5d                 jmp 0x5d046d
// 005d0410  894104               mov dword ptr [ecx + 4], eax
// 005d0413  8b4d00               mov ecx, dword ptr [ebp]
// 005d0416  8908                 mov dword ptr [eax], ecx
// 005d0418  3b4508               cmp eax, dword ptr [ebp + 8]
// 005d041b  7504                 jne 0x5d0421
// 005d041d  8bf0                 mov esi, eax
// 005d041f  eb19                 jmp 0x5d043a
// 005d0421  807f2900             cmp byte ptr [edi + 0x29], 0
// 005d0425  8b7004               mov esi, dword ptr [eax + 4]
// 005d0428  7503                 jne 0x5d042d
// 005d042a  897704               mov dword ptr [edi + 4], esi
// 005d042d  893e                 mov dword ptr [esi], edi
// 005d042f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005d0432  890a                 mov dword ptr [edx], ecx
// 005d0434  8b5508               mov edx, dword ptr [ebp + 8]
// 005d0437  894204               mov dword ptr [edx + 4], eax
// 005d043a  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 005d043d  396904               cmp dword ptr [ecx + 4], ebp
// 005d0440  7505                 jne 0x5d0447
// 005d0442  894104               mov dword ptr [ecx + 4], eax
// 005d0445  eb0e                 jmp 0x5d0455
// 005d0447  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005d044a  3929                 cmp dword ptr [ecx], ebp
// 005d044c  7504                 jne 0x5d0452
// 005d044e  8901                 mov dword ptr [ecx], eax
// 005d0450  eb03                 jmp 0x5d0455
// 005d0452  894108               mov dword ptr [ecx + 8], eax
// 005d0455  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005d0458  894804               mov dword ptr [eax + 4], ecx
// 005d045b  8d4d28               lea ecx, [ebp + 0x28]
// 005d045e  83c028               add eax, 0x28
// 005d0461  3bc1                 cmp eax, ecx
// 005d0463  7408                 je 0x5d046d
// 005d0465  8a19                 mov bl, byte ptr [ecx]
// 005d0467  8a10                 mov dl, byte ptr [eax]
// 005d0469  8818                 mov byte ptr [eax], bl
// 005d046b  8811                 mov byte ptr [ecx], dl
// 005d046d  bb01000000           mov ebx, 1
// 005d0472  385d28               cmp byte ptr [ebp + 0x28], bl
// 005d0475  0f8504010000         jne 0x5d057f
// 005d047b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d047f  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005d0482  3b7a04               cmp edi, dword ptr [edx + 4]
// 005d0485  0f84f1000000         je 0x5d057c
// 005d048b  eb03                 jmp 0x5d0490
// 005d048d  8d4900               lea ecx, [ecx]
// 005d0490  385f28               cmp byte ptr [edi + 0x28], bl
// 005d0493  0f85e3000000         jne 0x5d057c
// 005d0499  8b06                 mov eax, dword ptr [esi]
// 005d049b  3bf8                 cmp edi, eax
// 005d049d  7567                 jne 0x5d0506
// 005d049f  8b4608               mov eax, dword ptr [esi + 8]
// 005d04a2  80782800             cmp byte ptr [eax + 0x28], 0
// 005d04a6  7514                 jne 0x5d04bc
// 005d04a8  885828               mov byte ptr [eax + 0x28], bl
// 005d04ab  56                   push esi
// 005d04ac  c6462800             mov byte ptr [esi + 0x28], 0
// 005d04b0  e8cbccffff           call 0x5cd180
// 005d04b5  8b4608               mov eax, dword ptr [esi + 8]
// 005d04b8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d04bc  80782900             cmp byte ptr [eax + 0x29], 0
// 005d04c0  7576                 jne 0x5d0538
// 005d04c2  8b10                 mov edx, dword ptr [eax]
// 005d04c4  385a28               cmp byte ptr [edx + 0x28], bl
// 005d04c7  7508                 jne 0x5d04d1
// 005d04c9  8b5008               mov edx, dword ptr [eax + 8]
// 005d04cc  385a28               cmp byte ptr [edx + 0x28], bl
// 005d04cf  7463                 je 0x5d0534
// 005d04d1  8b5008               mov edx, dword ptr [eax + 8]
// 005d04d4  385a28               cmp byte ptr [edx + 0x28], bl
// 005d04d7  7516                 jne 0x5d04ef
// 005d04d9  8b10                 mov edx, dword ptr [eax]
// 005d04db  885a28               mov byte ptr [edx + 0x28], bl
// 005d04de  50                   push eax
// 005d04df  c6402800             mov byte ptr [eax + 0x28], 0
// 005d04e3  e8f8c0ffff           call 0x5cc5e0
// 005d04e8  8b4608               mov eax, dword ptr [esi + 8]
// 005d04eb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d04ef  8a5628               mov dl, byte ptr [esi + 0x28]
// 005d04f2  885028               mov byte ptr [eax + 0x28], dl
// 005d04f5  885e28               mov byte ptr [esi + 0x28], bl
// 005d04f8  8b4008               mov eax, dword ptr [eax + 8]
// 005d04fb  56                   push esi
// 005d04fc  885828               mov byte ptr [eax + 0x28], bl
// 005d04ff  e87cccffff           call 0x5cd180
// 005d0504  eb76                 jmp 0x5d057c
// 005d0506  80782800             cmp byte ptr [eax + 0x28], 0
// 005d050a  7513                 jne 0x5d051f
// 005d050c  885828               mov byte ptr [eax + 0x28], bl
// 005d050f  56                   push esi
// 005d0510  c6462800             mov byte ptr [esi + 0x28], 0
// 005d0514  e8c7c0ffff           call 0x5cc5e0
// 005d0519  8b06                 mov eax, dword ptr [esi]
// 005d051b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d051f  80782900             cmp byte ptr [eax + 0x29], 0
// 005d0523  7513                 jne 0x5d0538
// 005d0525  8b5008               mov edx, dword ptr [eax + 8]
// 005d0528  385a28               cmp byte ptr [edx + 0x28], bl
// 005d052b  751e                 jne 0x5d054b
// 005d052d  8b10                 mov edx, dword ptr [eax]
// 005d052f  385a28               cmp byte ptr [edx + 0x28], bl
// 005d0532  7517                 jne 0x5d054b
// 005d0534  c6402800             mov byte ptr [eax + 0x28], 0
// 005d0538  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005d053b  8bfe                 mov edi, esi
// 005d053d  8b7604               mov esi, dword ptr [esi + 4]
// 005d0540  3b7804               cmp edi, dword ptr [eax + 4]
// 005d0543  0f8547ffffff         jne 0x5d0490
// 005d0549  eb31                 jmp 0x5d057c
// 005d054b  8b10                 mov edx, dword ptr [eax]
// 005d054d  385a28               cmp byte ptr [edx + 0x28], bl
// 005d0550  7516                 jne 0x5d0568
// 005d0552  8b5008               mov edx, dword ptr [eax + 8]
// 005d0555  885a28               mov byte ptr [edx + 0x28], bl
// 005d0558  50                   push eax
// 005d0559  c6402800             mov byte ptr [eax + 0x28], 0
// 005d055d  e81eccffff           call 0x5cd180
// 005d0562  8b06                 mov eax, dword ptr [esi]
// 005d0564  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d0568  8a5628               mov dl, byte ptr [esi + 0x28]
// 005d056b  885028               mov byte ptr [eax + 0x28], dl
// 005d056e  885e28               mov byte ptr [esi + 0x28], bl
// 005d0571  8b00                 mov eax, dword ptr [eax]
// 005d0573  56                   push esi
// 005d0574  885828               mov byte ptr [eax + 0x28], bl
// 005d0577  e864c0ffff           call 0x5cc5e0
// 005d057c  885f28               mov byte ptr [edi + 0x28], bl
// 005d057f  8b4524               mov eax, dword ptr [ebp + 0x24]
// 005d0582  85c0                 test eax, eax
// 005d0584  744a                 je 0x5d05d0
// 005d0586  83c004               add eax, 4
// 005d0589  50                   push eax
// 005d058a  ff1508b29800         call dword ptr [0x98b208]
// 005d0590  85c0                 test eax, eax
// 005d0592  7535                 jne 0x5d05c9
// 005d0594  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 005d0597  8b7108               mov esi, dword ptr [ecx + 8]
// 005d059a  85f6                 test esi, esi
// 005d059c  741d                 je 0x5d05bb
// 005d059e  8bff                 mov edi, edi
// 005d05a0  8b0e                 mov ecx, dword ptr [esi]
// 005d05a2  8b11                 mov edx, dword ptr [ecx]
// 005d05a4  8b4204               mov eax, dword ptr [edx + 4]
// 005d05a7  ffd0                 call eax
// 005d05a9  8bc6                 mov eax, esi
// 005d05ab  8b7604               mov esi, dword ptr [esi + 4]
// 005d05ae  50                   push eax
// 005d05af  e8a6322200           call 0x7f385a
// 005d05b4  83c404               add esp, 4
// 005d05b7  85f6                 test esi, esi
// 005d05b9  75e5                 jne 0x5d05a0
// 005d05bb  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 005d05be  85c9                 test ecx, ecx
// 005d05c0  7407                 je 0x5d05c9
// 005d05c2  8b11                 mov edx, dword ptr [ecx]
// 005d05c4  8b02                 mov eax, dword ptr [edx]
// 005d05c6  53                   push ebx
// 005d05c7  ffd0                 call eax
// 005d05c9  c7452400000000       mov dword ptr [ebp + 0x24], 0
// 005d05d0  55                   push ebp
// 005d05d1  e884322200           call 0x7f385a
// 005d05d6  8b542414             mov edx, dword ptr [esp + 0x14]
// 005d05da  8b421c               mov eax, dword ptr [edx + 0x1c]
// 005d05dd  83c404               add esp, 4
// 005d05e0  5f                   pop edi
// 005d05e1  5e                   pop esi
// 005d05e2  5d                   pop ebp
// 005d05e3  85c0                 test eax, eax
// 005d05e5  7604                 jbe 0x5d05eb
// 005d05e7  48                   dec eax
// 005d05e8  89421c               mov dword ptr [edx + 0x1c], eax
// 005d05eb  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005d05ef  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005d05f3  8b12                 mov edx, dword ptr [edx]
// 005d05f5  894804               mov dword ptr [eax + 4], ecx
// 005d05f8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005d05fc  8910                 mov dword ptr [eax], edx
// 005d05fe  5b                   pop ebx
// 005d05ff  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0606  83c454               add esp, 0x54
// 005d0609  c20c00               ret 0xc
// library openrbx-client/RbxView\PBBMesh.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
