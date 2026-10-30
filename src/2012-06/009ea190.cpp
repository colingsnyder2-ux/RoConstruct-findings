// roc 2012-06 009ea190  unit: CXTPToolTipContextToolTip  size: 742 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ea190
//
// 009ea190  6aff                 push -1
// 009ea192  68fc13ae00           push 0xae13fc
// 009ea197  64a100000000         mov eax, dword ptr fs:[0]
// 009ea19d  50                   push eax
// 009ea19e  83ec78               sub esp, 0x78
// 009ea1a1  53                   push ebx
// 009ea1a2  55                   push ebp
// 009ea1a3  56                   push esi
// 009ea1a4  57                   push edi
// 009ea1a5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009ea1aa  33c4                 xor eax, esp
// 009ea1ac  50                   push eax
// 009ea1ad  8d84248c000000       lea eax, [esp + 0x8c]
// 009ea1b4  64a300000000         mov dword ptr fs:[0], eax
// 009ea1ba  8bf1                 mov esi, ecx
// 009ea1bc  56                   push esi
// 009ea1bd  8d4c247c             lea ecx, [esp + 0x7c]
// 009ea1c1  e8d68df9ff           call 0x982f9c
// 009ea1c6  8b466c               mov eax, dword ptr [esi + 0x6c]
// 009ea1c9  0598000000           add eax, 0x98
// 009ea1ce  33ed                 xor ebp, ebp
// 009ea1d0  50                   push eax
// 009ea1d1  8d4c247c             lea ecx, [esp + 0x7c]
// 009ea1d5  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 009ea1dc  e863f40a00           call 0xa99644
// 009ea1e1  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 009ea1e8  51                   push ecx
// 009ea1e9  8d542418             lea edx, [esp + 0x18]
// 009ea1ed  52                   push edx
// 009ea1ee  8bce                 mov ecx, esi
// 009ea1f0  89442430             mov dword ptr [esp + 0x30], eax
// 009ea1f4  e8d7f8ffff           call 0x9e9ad0
// 009ea1f9  8d4c2414             lea ecx, [esp + 0x14]
// 009ea1fd  c684249400000001     mov byte ptr [esp + 0x94], 1
// 009ea205  ff156046b200         call dword ptr [0xb24660]
// 009ea20b  84c0                 test al, al
// 009ea20d  740f                 je 0x9ea21e
// 009ea20f  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 009ea216  896e04               mov dword ptr [esi + 4], ebp
// 009ea219  e91a020000           jmp 0x9ea438
// 009ea21e  8bce                 mov ecx, esi
// 009ea220  e84bffffff           call 0x9ea170
// 009ea225  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 009ea228  8b5144               mov edx, dword ptr [ecx + 0x44]
// 009ea22b  8b7948               mov edi, dword ptr [ecx + 0x48]
// 009ea22e  8b594c               mov ebx, dword ptr [ecx + 0x4c]
// 009ea231  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 009ea234  8d4c3906             lea ecx, [ecx + edi + 6]
// 009ea238  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 009ea23c  894c242c             mov dword ptr [esp + 0x2c], ecx
// 009ea240  8d4c1306             lea ecx, [ebx + edx + 6]
// 009ea244  8bd8                 mov ebx, eax
// 009ea246  2bd9                 sub ebx, ecx
// 009ea248  68100c0000           push 0xc10
// 009ea24d  8d54244c             lea edx, [esp + 0x4c]
// 009ea251  894c2444             mov dword ptr [esp + 0x44], ecx
// 009ea255  52                   push edx
// 009ea256  8d4c241c             lea ecx, [esp + 0x1c]
// 009ea25a  896c2450             mov dword ptr [esp + 0x50], ebp
// 009ea25e  896c2454             mov dword ptr [esp + 0x54], ebp
// 009ea262  895c2458             mov dword ptr [esp + 0x58], ebx
// 009ea266  896c245c             mov dword ptr [esp + 0x5c], ebp
// 009ea26a  83c770               add edi, 0x70
// 009ea26d  ff155846b200         call dword ptr [0xb24658]
// 009ea273  50                   push eax
// 009ea274  8d4c2420             lea ecx, [esp + 0x20]
// 009ea278  ff159847b200         call dword ptr [0xb24798]
// 009ea27e  50                   push eax
// 009ea27f  8b07                 mov eax, dword ptr [edi]
// 009ea281  8d8c2488000000       lea ecx, [esp + 0x88]
// 009ea288  ffd0                 call eax
// 009ea28a  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 009ea28e  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 009ea292  2b7c244c             sub edi, dword ptr [esp + 0x4c]
// 009ea296  2b6c2448             sub ebp, dword ptr [esp + 0x48]
// 009ea29a  33c9                 xor ecx, ecx
// 009ea29c  398e2c010000         cmp dword ptr [esi + 0x12c], ecx
// 009ea2a2  897c243c             mov dword ptr [esp + 0x3c], edi
// 009ea2a6  0f95c1               setne cl
// 009ea2a9  894c2420             mov dword ptr [esp + 0x20], ecx
// 009ea2ad  8d8e28010000         lea ecx, [esi + 0x128]
// 009ea2b3  894c2424             mov dword ptr [esp + 0x24], ecx
// 009ea2b7  ff156046b200         call dword ptr [0xb24660]
// 009ea2bd  33d2                 xor edx, edx
// 009ea2bf  84c0                 test al, al
// 009ea2c1  0f94c2               sete dl
// 009ea2c4  837c242000           cmp dword ptr [esp + 0x20], 0
// 009ea2c9  c744241801000000     mov dword ptr [esp + 0x18], 1
// 009ea2d1  c744243000000000     mov dword ptr [esp + 0x30], 0
// 009ea2d9  8954241c             mov dword ptr [esp + 0x1c], edx
// 009ea2dd  744f                 je 0x9ea32e
// 009ea2df  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 009ea2e5  e836d7faff           call 0x997a20
// 009ea2ea  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 009ea2f0  89442418             mov dword ptr [esp + 0x18], eax
// 009ea2f4  e867130400           call 0xa2b660
// 009ea2f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009ea2fd  33d2                 xor edx, edx
// 009ea2ff  83f910               cmp ecx, 0x10
// 009ea302  0f9ec2               setle dl
// 009ea305  89442430             mov dword ptr [esp + 0x30], eax
// 009ea309  894c2434             mov dword ptr [esp + 0x34], ecx
// 009ea30d  89542418             mov dword ptr [esp + 0x18], edx
// 009ea311  85d2                 test edx, edx
// 009ea313  740d                 je 0x9ea322
// 009ea315  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 009ea31a  750a                 jne 0x9ea326
// 009ea31c  8d6c2803             lea ebp, [eax + ebp + 3]
// 009ea320  eb04                 jmp 0x9ea326
// 009ea322  8d6c2805             lea ebp, [eax + ebp + 5]
// 009ea326  3bf9                 cmp edi, ecx
// 009ea328  7f04                 jg 0x9ea32e
// 009ea32a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 009ea32e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 009ea333  0f84db000000         je 0x9ea414
// 009ea339  8b466c               mov eax, dword ptr [esi + 0x6c]
// 009ea33c  05a0000000           add eax, 0xa0
// 009ea341  50                   push eax
// 009ea342  8d4c247c             lea ecx, [esp + 0x7c]
// 009ea346  51                   push ecx
// 009ea347  8d4c2470             lea ecx, [esp + 0x70]
// 009ea34b  e8e0b1feff           call 0x9d5530
// 009ea350  8b742478             mov esi, dword ptr [esp + 0x78]
// 009ea354  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 009ea358  33c9                 xor ecx, ecx
// 009ea35a  68200c0000           push 0xc20
// 009ea35f  8d54245c             lea edx, [esp + 0x5c]
// 009ea363  8d43e7               lea eax, [ebx - 0x19]
// 009ea366  894c245c             mov dword ptr [esp + 0x5c], ecx
// 009ea36a  894c2460             mov dword ptr [esp + 0x60], ecx
// 009ea36e  894c2468             mov dword ptr [esp + 0x68], ecx
// 009ea372  52                   push edx
// 009ea373  8bcf                 mov ecx, edi
// 009ea375  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 009ea37d  89442468             mov dword ptr [esp + 0x68], eax
// 009ea381  83c670               add esi, 0x70
// 009ea384  ff155846b200         call dword ptr [0xb24658]
// 009ea38a  50                   push eax
// 009ea38b  8bcf                 mov ecx, edi
// 009ea38d  ff159847b200         call dword ptr [0xb24798]
// 009ea393  50                   push eax
// 009ea394  8b06                 mov eax, dword ptr [esi]
// 009ea396  8d8c2488000000       lea ecx, [esp + 0x88]
// 009ea39d  ffd0                 call eax
// 009ea39f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 009ea3a3  2b4c245c             sub ecx, dword ptr [esp + 0x5c]
// 009ea3a7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 009ea3ab  8d440a14             lea eax, [edx + ecx + 0x14]
// 009ea3af  8944243c             mov dword ptr [esp + 0x3c], eax
// 009ea3b3  8b442460             mov eax, dword ptr [esp + 0x60]
// 009ea3b7  2b442458             sub eax, dword ptr [esp + 0x58]
// 009ea3bb  8bd3                 mov edx, ebx
// 009ea3bd  83c004               add eax, 4
// 009ea3c0  3bd8                 cmp ebx, eax
// 009ea3c2  7c02                 jl 0x9ea3c6
// 009ea3c4  8bd0                 mov edx, eax
// 009ea3c6  8b742420             mov esi, dword ptr [esp + 0x20]
// 009ea3ca  85f6                 test esi, esi
// 009ea3cc  740e                 je 0x9ea3dc
// 009ea3ce  837c241800           cmp dword ptr [esp + 0x18], 0
// 009ea3d3  7407                 je 0x9ea3dc
// 009ea3d5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009ea3d9  41                   inc ecx
// 009ea3da  eb02                 jmp 0x9ea3de
// 009ea3dc  33c9                 xor ecx, ecx
// 009ea3de  83c519               add ebp, 0x19
// 009ea3e1  03ca                 add ecx, edx
// 009ea3e3  3be9                 cmp ebp, ecx
// 009ea3e5  7f1c                 jg 0x9ea403
// 009ea3e7  3bd8                 cmp ebx, eax
// 009ea3e9  7c02                 jl 0x9ea3ed
// 009ea3eb  8bd8                 mov ebx, eax
// 009ea3ed  85f6                 test esi, esi
// 009ea3ef  740e                 je 0x9ea3ff
// 009ea3f1  837c241800           cmp dword ptr [esp + 0x18], 0
// 009ea3f6  7407                 je 0x9ea3ff
// 009ea3f8  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 009ea3fc  45                   inc ebp
// 009ea3fd  eb02                 jmp 0x9ea401
// 009ea3ff  33ed                 xor ebp, ebp
// 009ea401  03eb                 add ebp, ebx
// 009ea403  8d4c2468             lea ecx, [esp + 0x68]
// 009ea407  c684249400000001     mov byte ptr [esp + 0x94], 1
// 009ea40f  e89cb1feff           call 0x9d55b0
// 009ea414  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009ea418  51                   push ecx
// 009ea419  8d4c247c             lea ecx, [esp + 0x7c]
// 009ea41d  e822f20a00           call 0xa99644
// 009ea422  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009ea426  036c2440             add ebp, dword ptr [esp + 0x40]
// 009ea42a  0344242c             add eax, dword ptr [esp + 0x2c]
// 009ea42e  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 009ea435  894604               mov dword ptr [esi + 4], eax
// 009ea438  8d4c2414             lea ecx, [esp + 0x14]
// 009ea43c  892e                 mov dword ptr [esi], ebp
// 009ea43e  ff15d047b200         call dword ptr [0xb247d0]
// 009ea444  8d4c2478             lea ecx, [esp + 0x78]
// 009ea448  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 009ea453  e83e8bf9ff           call 0x982f96
// 009ea458  8bc6                 mov eax, esi
// 009ea45a  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 009ea461  64890d00000000       mov dword ptr fs:[0], ecx
// 009ea468  59                   pop ecx
// 009ea469  5f                   pop edi
// 009ea46a  5e                   pop esi
// 009ea46b  5d                   pop ebp
// 009ea46c  5b                   pop ebx
// 009ea46d  81c484000000         add esp, 0x84
// 009ea473  c20800               ret 8
// copied from an identical function in another client (function ?GetToolSize@CXTPToolTipContextToolTip@@MAE?AVCSize@@PAUTOOLITEM@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp