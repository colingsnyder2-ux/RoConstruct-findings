// roc 2010-06 0056f410  unit: G3D::LineSegment  size: 1096 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056f410
//
// 0056f410  83ec18               sub esp, 0x18
// 0056f413  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056f417  53                   push ebx
// 0056f418  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0056f41c  56                   push esi
// 0056f41d  c644240849           mov byte ptr [esp + 8], 0x49
// 0056f422  c644240948           mov byte ptr [esp + 9], 0x48
// 0056f427  c644240a44           mov byte ptr [esp + 0xa], 0x44
// 0056f42c  c644240b52           mov byte ptr [esp + 0xb], 0x52
// 0056f431  c644240c00           mov byte ptr [esp + 0xc], 0
// 0056f436  83f806               cmp eax, 6
// 0056f439  0f87c3000000         ja 0x56f502
// 0056f43f  ff248514f85600       jmp dword ptr [eax*4 + 0x56f814]
// 0056f446  8d43ff               lea eax, [ebx - 1]
// 0056f449  83f80f               cmp eax, 0xf
// 0056f44c  771e                 ja 0x56f46c
// 0056f44e  0fb68038f85600       movzx eax, byte ptr [eax + 0x56f838]
// 0056f455  ff248530f85600       jmp dword ptr [eax*4 + 0x56f830]
// 0056f45c  8b742424             mov esi, dword ptr [esp + 0x24]
// 0056f460  c6862a01000001       mov byte ptr [esi + 0x12a], 1
// 0056f467  e9a8000000           jmp 0x56f514
// 0056f46c  68383ba200           push 0xa23b38
// 0056f471  e991000000           jmp 0x56f507
// 0056f476  8b742424             mov esi, dword ptr [esp + 0x24]
// 0056f47a  83fb08               cmp ebx, 8
// 0056f47d  7413                 je 0x56f492
// 0056f47f  83fb10               cmp ebx, 0x10
// 0056f482  740e                 je 0x56f492
// 0056f484  68183ba200           push 0xa23b18
// 0056f489  56                   push esi
// 0056f48a  e821260000           call 0x571ab0
// 0056f48f  83c408               add esp, 8
// 0056f492  c6862a01000003       mov byte ptr [esi + 0x12a], 3
// 0056f499  eb79                 jmp 0x56f514
// 0056f49b  8d43ff               lea eax, [ebx - 1]
// 0056f49e  83f807               cmp eax, 7
// 0056f4a1  770e                 ja 0x56f4b1
// 0056f4a3  0fb68850f85600       movzx ecx, byte ptr [eax + 0x56f850]
// 0056f4aa  ff248d48f85600       jmp dword ptr [ecx*4 + 0x56f848]
// 0056f4b1  68f03aa200           push 0xa23af0
// 0056f4b6  eb4f                 jmp 0x56f507
// 0056f4b8  8b742424             mov esi, dword ptr [esp + 0x24]
// 0056f4bc  83fb08               cmp ebx, 8
// 0056f4bf  7413                 je 0x56f4d4
// 0056f4c1  83fb10               cmp ebx, 0x10
// 0056f4c4  740e                 je 0x56f4d4
// 0056f4c6  68c43aa200           push 0xa23ac4
// 0056f4cb  56                   push esi
// 0056f4cc  e8df250000           call 0x571ab0
// 0056f4d1  83c408               add esp, 8
// 0056f4d4  c6862a01000002       mov byte ptr [esi + 0x12a], 2
// 0056f4db  eb37                 jmp 0x56f514
// 0056f4dd  8b742424             mov esi, dword ptr [esp + 0x24]
// 0056f4e1  83fb08               cmp ebx, 8
// 0056f4e4  7413                 je 0x56f4f9
// 0056f4e6  83fb10               cmp ebx, 0x10
// 0056f4e9  740e                 je 0x56f4f9
// 0056f4eb  68a03aa200           push 0xa23aa0
// 0056f4f0  56                   push esi
// 0056f4f1  e8ba250000           call 0x571ab0
// 0056f4f6  83c408               add esp, 8
// 0056f4f9  c6862a01000004       mov byte ptr [esi + 0x12a], 4
// 0056f500  eb12                 jmp 0x56f514
// 0056f502  687c3aa200           push 0xa23a7c
// 0056f507  8b742428             mov esi, dword ptr [esp + 0x28]
// 0056f50b  56                   push esi
// 0056f50c  e89f250000           call 0x571ab0
// 0056f511  83c408               add esp, 8
// 0056f514  837c243800           cmp dword ptr [esp + 0x38], 0
// 0056f519  7416                 je 0x56f531
// 0056f51b  68583aa200           push 0xa23a58
// 0056f520  56                   push esi
// 0056f521  e83a260000           call 0x571b60
// 0056f526  83c408               add esp, 8
// 0056f529  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0056f531  f6863002000004       test byte ptr [esi + 0x230], 4
// 0056f538  741e                 je 0x56f558
// 0056f53a  f7466800100000       test dword ptr [esi + 0x68], 0x1000
// 0056f541  7515                 jne 0x56f558
// 0056f543  8b442434             mov eax, dword ptr [esp + 0x34]
// 0056f547  83f802               cmp eax, 2
// 0056f54a  7405                 je 0x56f551
// 0056f54c  83f806               cmp eax, 6
// 0056f54f  7507                 jne 0x56f558
// 0056f551  837c243c40           cmp dword ptr [esp + 0x3c], 0x40
// 0056f556  741d                 je 0x56f575
// 0056f558  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0056f55d  7416                 je 0x56f575
// 0056f55f  68383aa200           push 0xa23a38
// 0056f564  56                   push esi
// 0056f565  e8f6250000           call 0x571b60
// 0056f56a  83c408               add esp, 8
// 0056f56d  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0056f575  8b442440             mov eax, dword ptr [esp + 0x40]
// 0056f579  85c0                 test eax, eax
// 0056f57b  741c                 je 0x56f599
// 0056f57d  83f801               cmp eax, 1
// 0056f580  7417                 je 0x56f599
// 0056f582  68143aa200           push 0xa23a14
// 0056f587  56                   push esi
// 0056f588  e8d3250000           call 0x571b60
// 0056f58d  b801000000           mov eax, 1
// 0056f592  83c408               add esp, 8
// 0056f595  89442440             mov dword ptr [esp + 0x40], eax
// 0056f599  8a542434             mov dl, byte ptr [esp + 0x34]
// 0056f59d  8a4c2438             mov cl, byte ptr [esp + 0x38]
// 0056f5a1  888623010000         mov byte ptr [esi + 0x123], al
// 0056f5a7  8a44243c             mov al, byte ptr [esp + 0x3c]
// 0056f5ab  888638020000         mov byte ptr [esi + 0x238], al
// 0056f5b1  8a862a010000         mov al, byte ptr [esi + 0x12a]
// 0056f5b7  f6eb                 imul bl
// 0056f5b9  889626010000         mov byte ptr [esi + 0x126], dl
// 0056f5bf  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0056f5c3  888e60020000         mov byte ptr [esi + 0x260], cl
// 0056f5c9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056f5cd  888629010000         mov byte ptr [esi + 0x129], al
// 0056f5d3  3c08                 cmp al, 8
// 0056f5d5  889e27010000         mov byte ptr [esi + 0x127], bl
// 0056f5db  898ec8000000         mov dword ptr [esi + 0xc8], ecx
// 0056f5e1  8996cc000000         mov dword ptr [esi + 0xcc], edx
// 0056f5e7  0fb6c0               movzx eax, al
// 0056f5ea  7208                 jb 0x56f5f4
// 0056f5ec  c1e803               shr eax, 3
// 0056f5ef  0fafc1               imul eax, ecx
// 0056f5f2  eb09                 jmp 0x56f5fd
// 0056f5f4  0fafc1               imul eax, ecx
// 0056f5f7  83c007               add eax, 7
// 0056f5fa  c1e803               shr eax, 3
// 0056f5fd  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0056f603  8a862a010000         mov al, byte ptr [esi + 0x12a]
// 0056f609  88862b010000         mov byte ptr [esi + 0x12b], al
// 0056f60f  8bc1                 mov eax, ecx
// 0056f611  c1e818               shr eax, 0x18
// 0056f614  88442410             mov byte ptr [esp + 0x10], al
// 0056f618  8bc1                 mov eax, ecx
// 0056f61a  c1e810               shr eax, 0x10
// 0056f61d  88442411             mov byte ptr [esp + 0x11], al
// 0056f621  8bc1                 mov eax, ecx
// 0056f623  c1e808               shr eax, 8
// 0056f626  898ed4000000         mov dword ptr [esi + 0xd4], ecx
// 0056f62c  88442412             mov byte ptr [esp + 0x12], al
// 0056f630  884c2413             mov byte ptr [esp + 0x13], cl
// 0056f634  8bc2                 mov eax, edx
// 0056f636  8bca                 mov ecx, edx
// 0056f638  c1e918               shr ecx, 0x18
// 0056f63b  c1e810               shr eax, 0x10
// 0056f63e  884c2414             mov byte ptr [esp + 0x14], cl
// 0056f642  88442415             mov byte ptr [esp + 0x15], al
// 0056f646  8a442438             mov al, byte ptr [esp + 0x38]
// 0056f64a  8bca                 mov ecx, edx
// 0056f64c  88542417             mov byte ptr [esp + 0x17], dl
// 0056f650  8a542434             mov dl, byte ptr [esp + 0x34]
// 0056f654  c1e908               shr ecx, 8
// 0056f657  8844241a             mov byte ptr [esp + 0x1a], al
// 0056f65b  6a0d                 push 0xd
// 0056f65d  8d44240c             lea eax, [esp + 0xc]
// 0056f661  884c241a             mov byte ptr [esp + 0x1a], cl
// 0056f665  8a4c2440             mov cl, byte ptr [esp + 0x40]
// 0056f669  8854241d             mov byte ptr [esp + 0x1d], dl
// 0056f66d  8a542444             mov dl, byte ptr [esp + 0x44]
// 0056f671  50                   push eax
// 0056f672  56                   push esi
// 0056f673  889e28010000         mov byte ptr [esi + 0x128], bl
// 0056f679  885c2424             mov byte ptr [esp + 0x24], bl
// 0056f67d  884c2427             mov byte ptr [esp + 0x27], cl
// 0056f681  88542428             mov byte ptr [esp + 0x28], dl
// 0056f685  e8a6ebffff           call 0x56e230
// 0056f68a  6a0d                 push 0xd
// 0056f68c  8d4c2420             lea ecx, [esp + 0x20]
// 0056f690  51                   push ecx
// 0056f691  56                   push esi
// 0056f692  e86956ffff           call 0x564d00
// 0056f697  6a0d                 push 0xd
// 0056f699  8d54242c             lea edx, [esp + 0x2c]
// 0056f69d  52                   push edx
// 0056f69e  56                   push esi
// 0056f69f  e83c59ffff           call 0x564fe0
// 0056f6a4  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0056f6aa  8bd0                 mov edx, eax
// 0056f6ac  8bc8                 mov ecx, eax
// 0056f6ae  c1e918               shr ecx, 0x18
// 0056f6b1  c1ea10               shr edx, 0x10
// 0056f6b4  884c2448             mov byte ptr [esp + 0x48], cl
// 0056f6b8  88542449             mov byte ptr [esp + 0x49], dl
// 0056f6bc  6a04                 push 4
// 0056f6be  8d54244c             lea edx, [esp + 0x4c]
// 0056f6c2  8bc8                 mov ecx, eax
// 0056f6c4  52                   push edx
// 0056f6c5  c1e908               shr ecx, 8
// 0056f6c8  56                   push esi
// 0056f6c9  884c2456             mov byte ptr [esp + 0x56], cl
// 0056f6cd  88442457             mov byte ptr [esp + 0x57], al
// 0056f6d1  e82a56ffff           call 0x564d00
// 0056f6d6  83c430               add esp, 0x30
// 0056f6d9  80be2501000000       cmp byte ptr [esi + 0x125], 0
// 0056f6e0  c78694000000604f5600 mov dword ptr [esi + 0x94], 0x564f60
// 0056f6ea  c78698000000b04f5600 mov dword ptr [esi + 0x98], 0x564fb0
// 0056f6f4  89b69c000000         mov dword ptr [esi + 0x9c], esi
// 0056f6fa  7522                 jne 0x56f71e
// 0056f6fc  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0056f703  7412                 je 0x56f717
// 0056f705  80be2701000008       cmp byte ptr [esi + 0x127], 8
// 0056f70c  7209                 jb 0x56f717
// 0056f70e  c68625010000f8       mov byte ptr [esi + 0x125], 0xf8
// 0056f715  eb07                 jmp 0x56f71e
// 0056f717  c6862501000008       mov byte ptr [esi + 0x125], 8
// 0056f71e  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0056f721  a801                 test al, 1
// 0056f723  7512                 jne 0x56f737
// 0056f725  33c9                 xor ecx, ecx
// 0056f727  80be2501000008       cmp byte ptr [esi + 0x125], 8
// 0056f72e  0f95c1               setne cl
// 0056f731  898ec4000000         mov dword ptr [esi + 0xc4], ecx
// 0056f737  a802                 test al, 2
// 0056f739  750a                 jne 0x56f745
// 0056f73b  c786b4000000ffffffff mov dword ptr [esi + 0xb4], 0xffffffff
// 0056f745  a804                 test al, 4
// 0056f747  750a                 jne 0x56f753
// 0056f749  c786c000000008000000 mov dword ptr [esi + 0xc0], 8
// 0056f753  a808                 test al, 8
// 0056f755  750a                 jne 0x56f761
// 0056f757  c786bc0000000f000000 mov dword ptr [esi + 0xbc], 0xf
// 0056f761  a810                 test al, 0x10
// 0056f763  750a                 jne 0x56f76f
// 0056f765  c786b800000008000000 mov dword ptr [esi + 0xb8], 8
// 0056f76f  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0056f775  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 0056f77b  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0056f781  6a38                 push 0x38
// 0056f783  68e82aa200           push 0xa22ae8
// 0056f788  52                   push edx
// 0056f789  8b96b8000000         mov edx, dword ptr [esi + 0xb8]
// 0056f78f  50                   push eax
// 0056f790  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0056f796  51                   push ecx
// 0056f797  52                   push edx
// 0056f798  50                   push eax
// 0056f799  8d4e74               lea ecx, [esi + 0x74]
// 0056f79c  51                   push ecx
// 0056f79d  e81e460000           call 0x573dc0
// 0056f7a2  83c420               add esp, 0x20
// 0056f7a5  85c0                 test eax, eax
// 0056f7a7  7439                 je 0x56f7e2
// 0056f7a9  83f8fa               cmp eax, -6
// 0056f7ac  7507                 jne 0x56f7b5
// 0056f7ae  68dc39a200           push 0xa239dc
// 0056f7b3  eb16                 jmp 0x56f7cb
// 0056f7b5  83f8fe               cmp eax, -2
// 0056f7b8  7507                 jne 0x56f7c1
// 0056f7ba  68a439a200           push 0xa239a4
// 0056f7bf  eb0a                 jmp 0x56f7cb
// 0056f7c1  83f8fc               cmp eax, -4
// 0056f7c4  750e                 jne 0x56f7d4
// 0056f7c6  687039a200           push 0xa23970
// 0056f7cb  56                   push esi
// 0056f7cc  e8df220000           call 0x571ab0
// 0056f7d1  83c408               add esp, 8
// 0056f7d4  684839a200           push 0xa23948
// 0056f7d9  56                   push esi
// 0056f7da  e8d1220000           call 0x571ab0
// 0056f7df  83c408               add esp, 8
// 0056f7e2  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 0056f7e8  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0056f7ee  899680000000         mov dword ptr [esi + 0x80], edx
// 0056f7f4  898684000000         mov dword ptr [esi + 0x84], eax
// 0056f7fa  c786a000000000000000 mov dword ptr [esi + 0xa0], 0
// 0056f804  c7466801000000       mov dword ptr [esi + 0x68], 1
// 0056f80b  5e                   pop esi
// 0056f80c  5b                   pop ebx
// 0056f80d  83c418               add esp, 0x18
// 0056f810  c3                   ret 
// 0056f811  8d4900               lea ecx, [ecx]
// 0056f814  46                   inc esi
// 0056f815  f4                   hlt 
// 0056f816  56                   push esi
// 0056f817  0002                 add byte ptr [edx], al
// 0056f819  f5                   cmc 
// 0056f81a  56                   push esi
// 0056f81b  0076f4               add byte ptr [esi - 0xc], dh
// 0056f81e  56                   push esi
// 0056f81f  009bf45600b8         add byte ptr [ebx - 0x47ffa90c], bl
// 0056f825  f4                   hlt 
// 0056f826  56                   push esi
// 0056f827  0002                 add byte ptr [edx], al
// 0056f829  f5                   cmc 
// 0056f82a  56                   push esi
// 0056f82b  00dd                 add ch, bl
// 0056f82d  f4                   hlt 
// 0056f82e  56                   push esi
// 0056f82f  005cf456             add byte ptr [esp + esi*8 + 0x56], bl
// 0056f833  006cf456             add byte ptr [esp + esi*8 + 0x56], ch
// 0056f837  0000                 add byte ptr [eax], al
// 0056f839  0001                 add byte ptr [ecx], al
// 0056f83b  0001                 add byte ptr [ecx], al
// 0056f83d  0101                 add dword ptr [ecx], eax
// 0056f83f  0001                 add byte ptr [ecx], al
// 0056f841  0101                 add dword ptr [ecx], eax
// 0056f843  0101                 add dword ptr [ecx], eax
// 0056f845  0101                 add dword ptr [ecx], eax
// 0056f847  005cf456             add byte ptr [esp + esi*8 + 0x56], bl
// 0056f84b  00b1f4560000         add byte ptr [ecx + 0x56f4], dh
// 0056f851  0001                 add byte ptr [ecx], al
// 0056f853  0001                 add byte ptr [ecx], al
// 0056f855  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function _png_write_IHDR)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.32 pngwutil.c