// roc 2007-03 004c7660  unit: seg_004c0000  size: 803 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c7660
//
// 004c7660  6aff                 push -1
// 004c7662  68926f7500           push 0x756f92
// 004c7667  64a100000000         mov eax, dword ptr fs:[0]
// 004c766d  50                   push eax
// 004c766e  64892500000000       mov dword ptr fs:[0], esp
// 004c7675  83ec4c               sub esp, 0x4c
// 004c7678  8b442464             mov eax, dword ptr [esp + 0x64]
// 004c767c  80782100             cmp byte ptr [eax + 0x21], 0
// 004c7680  890c24               mov dword ptr [esp], ecx
// 004c7683  7459                 je 0x4c76de
// 004c7685  68dc3e7800           push 0x783edc
// 004c768a  8d4c240c             lea ecx, [esp + 0xc]
// 004c768e  ff1578e77700         call dword ptr [0x77e778]
// 004c7694  8d4c2424             lea ecx, [esp + 0x24]
// 004c7698  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004c76a0  ff1560e97700         call dword ptr [0x77e960]
// 004c76a6  8d442408             lea eax, [esp + 8]
// 004c76aa  50                   push eax
// 004c76ab  8d4c2434             lea ecx, [esp + 0x34]
// 004c76af  c644245801           mov byte ptr [esp + 0x58], 1
// 004c76b4  c7442428383e7800     mov dword ptr [esp + 0x28], 0x783e38
// 004c76bc  ff157ce77700         call dword ptr [0x77e77c]
// 004c76c2  68ccf38300           push 0x83f3cc
// 004c76c7  8d4c2428             lea ecx, [esp + 0x28]
// 004c76cb  51                   push ecx
// 004c76cc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 004c76d1  c744242c503e7800     mov dword ptr [esp + 0x2c], 0x783e50
// 004c76d9  e850791500           call 0x61f02e
// 004c76de  53                   push ebx
// 004c76df  55                   push ebp
// 004c76e0  56                   push esi
// 004c76e1  8bd8                 mov ebx, eax
// 004c76e3  57                   push edi
// 004c76e4  8d4c2470             lea ecx, [esp + 0x70]
// 004c76e8  895c2414             mov dword ptr [esp + 0x14], ebx
// 004c76ec  e82f0bfdff           call 0x498220
// 004c76f1  8b03                 mov eax, dword ptr [ebx]
// 004c76f3  80782100             cmp byte ptr [eax + 0x21], 0
// 004c76f7  7405                 je 0x4c76fe
// 004c76f9  8b7b08               mov edi, dword ptr [ebx + 8]
// 004c76fc  eb18                 jmp 0x4c7716
// 004c76fe  8b5308               mov edx, dword ptr [ebx + 8]
// 004c7701  807a2100             cmp byte ptr [edx + 0x21], 0
// 004c7705  7404                 je 0x4c770b
// 004c7707  8bf8                 mov edi, eax
// 004c7709  eb0b                 jmp 0x4c7716
// 004c770b  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 004c770f  3beb                 cmp ebp, ebx
// 004c7711  8b7d08               mov edi, dword ptr [ebp + 8]
// 004c7714  756d                 jne 0x4c7783
// 004c7716  807f2100             cmp byte ptr [edi + 0x21], 0
// 004c771a  8b7304               mov esi, dword ptr [ebx + 4]
// 004c771d  7503                 jne 0x4c7722
// 004c771f  897704               mov dword ptr [edi + 4], esi
// 004c7722  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c7726  8b4104               mov eax, dword ptr [ecx + 4]
// 004c7729  395804               cmp dword ptr [eax + 4], ebx
// 004c772c  7505                 jne 0x4c7733
// 004c772e  897804               mov dword ptr [eax + 4], edi
// 004c7731  eb0b                 jmp 0x4c773e
// 004c7733  391e                 cmp dword ptr [esi], ebx
// 004c7735  7504                 jne 0x4c773b
// 004c7737  893e                 mov dword ptr [esi], edi
// 004c7739  eb03                 jmp 0x4c773e
// 004c773b  897e08               mov dword ptr [esi + 8], edi
// 004c773e  8b6904               mov ebp, dword ptr [ecx + 4]
// 004c7741  395d00               cmp dword ptr [ebp], ebx
// 004c7744  7516                 jne 0x4c775c
// 004c7746  807f2100             cmp byte ptr [edi + 0x21], 0
// 004c774a  7404                 je 0x4c7750
// 004c774c  8bc6                 mov eax, esi
// 004c774e  eb09                 jmp 0x4c7759
// 004c7750  57                   push edi
// 004c7751  e85aaaffff           call 0x4c21b0
// 004c7756  83c404               add esp, 4
// 004c7759  894500               mov dword ptr [ebp], eax
// 004c775c  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c7760  8b6804               mov ebp, dword ptr [eax + 4]
// 004c7763  395d08               cmp dword ptr [ebp + 8], ebx
// 004c7766  7577                 jne 0x4c77df
// 004c7768  807f2100             cmp byte ptr [edi + 0x21], 0
// 004c776c  7407                 je 0x4c7775
// 004c776e  8bc6                 mov eax, esi
// 004c7770  894508               mov dword ptr [ebp + 8], eax
// 004c7773  eb6a                 jmp 0x4c77df
// 004c7775  57                   push edi
// 004c7776  e855a20c00           call 0x5919d0
// 004c777b  83c404               add esp, 4
// 004c777e  894508               mov dword ptr [ebp + 8], eax
// 004c7781  eb5c                 jmp 0x4c77df
// 004c7783  896804               mov dword ptr [eax + 4], ebp
// 004c7786  8b0b                 mov ecx, dword ptr [ebx]
// 004c7788  894d00               mov dword ptr [ebp], ecx
// 004c778b  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 004c778e  7504                 jne 0x4c7794
// 004c7790  8bf5                 mov esi, ebp
// 004c7792  eb1a                 jmp 0x4c77ae
// 004c7794  807f2100             cmp byte ptr [edi + 0x21], 0
// 004c7798  8b7504               mov esi, dword ptr [ebp + 4]
// 004c779b  7503                 jne 0x4c77a0
// 004c779d  897704               mov dword ptr [edi + 4], esi
// 004c77a0  893e                 mov dword ptr [esi], edi
// 004c77a2  8b5308               mov edx, dword ptr [ebx + 8]
// 004c77a5  895508               mov dword ptr [ebp + 8], edx
// 004c77a8  8b4308               mov eax, dword ptr [ebx + 8]
// 004c77ab  896804               mov dword ptr [eax + 4], ebp
// 004c77ae  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c77b2  8b4104               mov eax, dword ptr [ecx + 4]
// 004c77b5  395804               cmp dword ptr [eax + 4], ebx
// 004c77b8  7505                 jne 0x4c77bf
// 004c77ba  896804               mov dword ptr [eax + 4], ebp
// 004c77bd  eb0e                 jmp 0x4c77cd
// 004c77bf  8b4304               mov eax, dword ptr [ebx + 4]
// 004c77c2  3918                 cmp dword ptr [eax], ebx
// 004c77c4  7504                 jne 0x4c77ca
// 004c77c6  8928                 mov dword ptr [eax], ebp
// 004c77c8  eb03                 jmp 0x4c77cd
// 004c77ca  896808               mov dword ptr [eax + 8], ebp
// 004c77cd  8b5304               mov edx, dword ptr [ebx + 4]
// 004c77d0  895504               mov dword ptr [ebp + 4], edx
// 004c77d3  8a4b20               mov cl, byte ptr [ebx + 0x20]
// 004c77d6  8a4520               mov al, byte ptr [ebp + 0x20]
// 004c77d9  884d20               mov byte ptr [ebp + 0x20], cl
// 004c77dc  884320               mov byte ptr [ebx + 0x20], al
// 004c77df  8b542414             mov edx, dword ptr [esp + 0x14]
// 004c77e3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004c77e7  bb01000000           mov ebx, 1
// 004c77ec  385a20               cmp byte ptr [edx + 0x20], bl
// 004c77ef  0f85f7000000         jne 0x4c78ec
// 004c77f5  8b4504               mov eax, dword ptr [ebp + 4]
// 004c77f8  3b7804               cmp edi, dword ptr [eax + 4]
// 004c77fb  0f84e8000000         je 0x4c78e9
// 004c7801  385f20               cmp byte ptr [edi + 0x20], bl
// 004c7804  0f85df000000         jne 0x4c78e9
// 004c780a  8b06                 mov eax, dword ptr [esi]
// 004c780c  3bf8                 cmp edi, eax
// 004c780e  7565                 jne 0x4c7875
// 004c7810  8b4608               mov eax, dword ptr [esi + 8]
// 004c7813  80782000             cmp byte ptr [eax + 0x20], 0
// 004c7817  7512                 jne 0x4c782b
// 004c7819  885820               mov byte ptr [eax + 0x20], bl
// 004c781c  56                   push esi
// 004c781d  8bcd                 mov ecx, ebp
// 004c781f  c6462000             mov byte ptr [esi + 0x20], 0
// 004c7823  e8b8abffff           call 0x4c23e0
// 004c7828  8b4608               mov eax, dword ptr [esi + 8]
// 004c782b  80782100             cmp byte ptr [eax + 0x21], 0
// 004c782f  7574                 jne 0x4c78a5
// 004c7831  8b08                 mov ecx, dword ptr [eax]
// 004c7833  385920               cmp byte ptr [ecx + 0x20], bl
// 004c7836  7508                 jne 0x4c7840
// 004c7838  8b5008               mov edx, dword ptr [eax + 8]
// 004c783b  385a20               cmp byte ptr [edx + 0x20], bl
// 004c783e  7461                 je 0x4c78a1
// 004c7840  8b4808               mov ecx, dword ptr [eax + 8]
// 004c7843  385920               cmp byte ptr [ecx + 0x20], bl
// 004c7846  7514                 jne 0x4c785c
// 004c7848  8b10                 mov edx, dword ptr [eax]
// 004c784a  885a20               mov byte ptr [edx + 0x20], bl
// 004c784d  50                   push eax
// 004c784e  8bcd                 mov ecx, ebp
// 004c7850  c6402000             mov byte ptr [eax + 0x20], 0
// 004c7854  e8271ef7ff           call 0x439680
// 004c7859  8b4608               mov eax, dword ptr [esi + 8]
// 004c785c  8a4e20               mov cl, byte ptr [esi + 0x20]
// 004c785f  884820               mov byte ptr [eax + 0x20], cl
// 004c7862  885e20               mov byte ptr [esi + 0x20], bl
// 004c7865  8b5008               mov edx, dword ptr [eax + 8]
// 004c7868  56                   push esi
// 004c7869  8bcd                 mov ecx, ebp
// 004c786b  885a20               mov byte ptr [edx + 0x20], bl
// 004c786e  e86dabffff           call 0x4c23e0
// 004c7873  eb74                 jmp 0x4c78e9
// 004c7875  80782000             cmp byte ptr [eax + 0x20], 0
// 004c7879  7511                 jne 0x4c788c
// 004c787b  885820               mov byte ptr [eax + 0x20], bl
// 004c787e  56                   push esi
// 004c787f  8bcd                 mov ecx, ebp
// 004c7881  c6462000             mov byte ptr [esi + 0x20], 0
// 004c7885  e8f61df7ff           call 0x439680
// 004c788a  8b06                 mov eax, dword ptr [esi]
// 004c788c  80782100             cmp byte ptr [eax + 0x21], 0
// 004c7890  7513                 jne 0x4c78a5
// 004c7892  8b4808               mov ecx, dword ptr [eax + 8]
// 004c7895  385920               cmp byte ptr [ecx + 0x20], bl
// 004c7898  751e                 jne 0x4c78b8
// 004c789a  8b10                 mov edx, dword ptr [eax]
// 004c789c  385a20               cmp byte ptr [edx + 0x20], bl
// 004c789f  7517                 jne 0x4c78b8
// 004c78a1  c6402000             mov byte ptr [eax + 0x20], 0
// 004c78a5  8b4504               mov eax, dword ptr [ebp + 4]
// 004c78a8  8bfe                 mov edi, esi
// 004c78aa  3b7804               cmp edi, dword ptr [eax + 4]
// 004c78ad  8b7604               mov esi, dword ptr [esi + 4]
// 004c78b0  0f854bffffff         jne 0x4c7801
// 004c78b6  eb31                 jmp 0x4c78e9
// 004c78b8  8b08                 mov ecx, dword ptr [eax]
// 004c78ba  385920               cmp byte ptr [ecx + 0x20], bl
// 004c78bd  7514                 jne 0x4c78d3
// 004c78bf  8b5008               mov edx, dword ptr [eax + 8]
// 004c78c2  885a20               mov byte ptr [edx + 0x20], bl
// 004c78c5  50                   push eax
// 004c78c6  8bcd                 mov ecx, ebp
// 004c78c8  c6402000             mov byte ptr [eax + 0x20], 0
// 004c78cc  e80fabffff           call 0x4c23e0
// 004c78d1  8b06                 mov eax, dword ptr [esi]
// 004c78d3  8a4e20               mov cl, byte ptr [esi + 0x20]
// 004c78d6  884820               mov byte ptr [eax + 0x20], cl
// 004c78d9  885e20               mov byte ptr [esi + 0x20], bl
// 004c78dc  8b10                 mov edx, dword ptr [eax]
// 004c78de  56                   push esi
// 004c78df  8bcd                 mov ecx, ebp
// 004c78e1  885a20               mov byte ptr [edx + 0x20], bl
// 004c78e4  e8971df7ff           call 0x439680
// 004c78e9  885f20               mov byte ptr [edi + 0x20], bl
// 004c78ec  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c78f0  8b401c               mov eax, dword ptr [eax + 0x1c]
// 004c78f3  85c0                 test eax, eax
// 004c78f5  744c                 je 0x4c7943
// 004c78f7  83c004               add eax, 4
// 004c78fa  50                   push eax
// 004c78fb  ff15a8d27700         call dword ptr [0x77d2a8]
// 004c7901  85c0                 test eax, eax
// 004c7903  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c7907  7533                 jne 0x4c793c
// 004c7909  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 004c790c  8b7108               mov esi, dword ptr [ecx + 8]
// 004c790f  85f6                 test esi, esi
// 004c7911  741b                 je 0x4c792e
// 004c7913  8b0e                 mov ecx, dword ptr [esi]
// 004c7915  8b11                 mov edx, dword ptr [ecx]
// 004c7917  8b4204               mov eax, dword ptr [edx + 4]
// 004c791a  ffd0                 call eax
// 004c791c  8bc6                 mov eax, esi
// 004c791e  8b7604               mov esi, dword ptr [esi + 4]
// 004c7921  50                   push eax
// 004c7922  e8c9671500           call 0x61e0f0
// 004c7927  83c404               add esp, 4
// 004c792a  85f6                 test esi, esi
// 004c792c  75e5                 jne 0x4c7913
// 004c792e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 004c7931  85c9                 test ecx, ecx
// 004c7933  7407                 je 0x4c793c
// 004c7935  8b11                 mov edx, dword ptr [ecx]
// 004c7937  8b02                 mov eax, dword ptr [edx]
// 004c7939  53                   push ebx
// 004c793a  ffd0                 call eax
// 004c793c  c7471c00000000       mov dword ptr [edi + 0x1c], 0
// 004c7943  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c7947  51                   push ecx
// 004c7948  e8a3671500           call 0x61e0f0
// 004c794d  8b4508               mov eax, dword ptr [ebp + 8]
// 004c7950  83c404               add esp, 4
// 004c7953  85c0                 test eax, eax
// 004c7955  7606                 jbe 0x4c795d
// 004c7957  83c0ff               add eax, -1
// 004c795a  894508               mov dword ptr [ebp + 8], eax
// 004c795d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 004c7961  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004c7965  8b542470             mov edx, dword ptr [esp + 0x70]
// 004c7969  5f                   pop edi
// 004c796a  5e                   pop esi
// 004c796b  894804               mov dword ptr [eax + 4], ecx
// 004c796e  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004c7972  5d                   pop ebp
// 004c7973  8910                 mov dword ptr [eax], edx
// 004c7975  5b                   pop ebx
// 004c7976  64890d00000000       mov dword ptr fs:[0], ecx
// 004c797d  83c458               add esp, 0x58
// 004c7980  c20c00               ret 0xc
// library openrbx-client/RbxView\PBBMesh.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVDecalKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
