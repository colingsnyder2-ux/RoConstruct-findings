// roc 2012-06 00a38a80  unit: CXTPDockingPaneMiniWnd  size: 430 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a38a80
//
// 00a38a80  6aff                 push -1
// 00a38a82  68495bae00           push 0xae5b49
// 00a38a87  64a100000000         mov eax, dword ptr fs:[0]
// 00a38a8d  50                   push eax
// 00a38a8e  83ec30               sub esp, 0x30
// 00a38a91  53                   push ebx
// 00a38a92  55                   push ebp
// 00a38a93  56                   push esi
// 00a38a94  57                   push edi
// 00a38a95  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a38a9a  33c4                 xor eax, esp
// 00a38a9c  50                   push eax
// 00a38a9d  8d442444             lea eax, [esp + 0x44]
// 00a38aa1  64a300000000         mov dword ptr fs:[0], eax
// 00a38aa7  8bf1                 mov esi, ecx
// 00a38aa9  89742418             mov dword ptr [esp + 0x18], esi
// 00a38aad  e87ef5ffff           call 0xa38030
// 00a38ab2  85c0                 test eax, eax
// 00a38ab4  0f84c7000000         je 0xa38b81
// 00a38aba  56                   push esi
// 00a38abb  8d4c2438             lea ecx, [esp + 0x38]
// 00a38abf  e87cc6f9ff           call 0x9d5140
// 00a38ac4  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a38ac8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a38acc  8d54241c             lea edx, [esp + 0x1c]
// 00a38ad0  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a38ad4  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a38ad7  52                   push edx
// 00a38ad8  50                   push eax
// 00a38ad9  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a38add  ff15883ab200         call dword ptr [0xb23a88]
// 00a38ae3  8bce                 mov ecx, esi
// 00a38ae5  e8ee0a0600           call 0xa995d8
// 00a38aea  a900004000           test eax, 0x400000
// 00a38aef  740c                 je 0xa38afd
// 00a38af1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a38af5  2b4c243c             sub ecx, dword ptr [esp + 0x3c]
// 00a38af9  014c241c             add dword ptr [esp + 0x1c], ecx
// 00a38afd  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00a38b03  33ff                 xor edi, edi
// 00a38b05  397808               cmp dword ptr [eax + 8], edi
// 00a38b08  7e77                 jle 0xa38b81
// 00a38b0a  8b1df43ab200         mov ebx, dword ptr [0xb23af4]
// 00a38b10  8b2d483bb200         mov ebp, dword ptr [0xb23b48]
// 00a38b16  85ff                 test edi, edi
// 00a38b18  0f8c0b010000         jl 0xa38c29
// 00a38b1e  3b7808               cmp edi, dword ptr [eax + 8]
// 00a38b21  0f8d02010000         jge 0xa38c29
// 00a38b27  8b5004               mov edx, dword ptr [eax + 4]
// 00a38b2a  8b34ba               mov esi, dword ptr [edx + edi*4]
// 00a38b2d  8d04ba               lea eax, [edx + edi*4]
// 00a38b30  8b06                 mov eax, dword ptr [esi]
// 00a38b32  89442424             mov dword ptr [esp + 0x24], eax
// 00a38b36  8b4e04               mov ecx, dword ptr [esi + 4]
// 00a38b39  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a38b3d  8b5608               mov edx, dword ptr [esi + 8]
// 00a38b40  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a38b44  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a38b48  8b460c               mov eax, dword ptr [esi + 0xc]
// 00a38b4b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a38b4f  51                   push ecx
// 00a38b50  89442434             mov dword ptr [esp + 0x34], eax
// 00a38b54  52                   push edx
// 00a38b55  8d44242c             lea eax, [esp + 0x2c]
// 00a38b59  50                   push eax
// 00a38b5a  ffd3                 call ebx
// 00a38b5c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a38b60  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a38b64  51                   push ecx
// 00a38b65  52                   push edx
// 00a38b66  8d44242c             lea eax, [esp + 0x2c]
// 00a38b6a  50                   push eax
// 00a38b6b  ffd5                 call ebp
// 00a38b6d  85c0                 test eax, eax
// 00a38b6f  7529                 jne 0xa38b9a
// 00a38b71  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a38b75  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 00a38b7b  47                   inc edi
// 00a38b7c  3b7808               cmp edi, dword ptr [eax + 8]
// 00a38b7f  7c95                 jl 0xa38b16
// 00a38b81  83c8ff               or eax, 0xffffffff
// 00a38b84  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a38b88  64890d00000000       mov dword ptr fs:[0], ecx
// 00a38b8f  59                   pop ecx
// 00a38b90  5f                   pop edi
// 00a38b91  5e                   pop esi
// 00a38b92  5d                   pop ebp
// 00a38b93  5b                   pop ebx
// 00a38b94  83c43c               add esp, 0x3c
// 00a38b97  c20c00               ret 0xc
// 00a38b9a  8b7614               mov esi, dword ptr [esi + 0x14]
// 00a38b9d  8d4c2414             lea ecx, [esp + 0x14]
// 00a38ba1  ff158447b200         call dword ptr [0xb24784]
// 00a38ba7  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 00a38baf  e83cf9fbff           call 0x9f84f0
// 00a38bb4  8b10                 mov edx, dword ptr [eax]
// 00a38bb6  8b5208               mov edx, dword ptr [edx + 8]
// 00a38bb9  56                   push esi
// 00a38bba  8d4c2418             lea ecx, [esp + 0x18]
// 00a38bbe  51                   push ecx
// 00a38bbf  8bc8                 mov ecx, eax
// 00a38bc1  ffd2                 call edx
// 00a38bc3  8d4c2414             lea ecx, [esp + 0x14]
// 00a38bc7  ff155846b200         call dword ptr [0xb24658]
// 00a38bcd  85c0                 test eax, eax
// 00a38bcf  750c                 jne 0xa38bdd
// 00a38bd1  8d4c2414             lea ecx, [esp + 0x14]
// 00a38bd5  ff15d047b200         call dword ptr [0xb247d0]
// 00a38bdb  eba4                 jmp 0xa38b81
// 00a38bdd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a38be1  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a38be5  8d442414             lea eax, [esp + 0x14]
// 00a38be9  50                   push eax
// 00a38bea  56                   push esi
// 00a38beb  83ec10               sub esp, 0x10
// 00a38bee  8bc4                 mov eax, esp
// 00a38bf0  8908                 mov dword ptr [eax], ecx
// 00a38bf2  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a38bf6  895004               mov dword ptr [eax + 4], edx
// 00a38bf9  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a38bfd  894808               mov dword ptr [eax + 8], ecx
// 00a38c00  89500c               mov dword ptr [eax + 0xc], edx
// 00a38c03  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a38c07  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a38c0a  8b542474             mov edx, dword ptr [esp + 0x74]
// 00a38c0e  51                   push ecx
// 00a38c0f  52                   push edx
// 00a38c10  e8cb11fbff           call 0x9e9de0
// 00a38c15  83c420               add esp, 0x20
// 00a38c18  8d4c2414             lea ecx, [esp + 0x14]
// 00a38c1c  ff15d047b200         call dword ptr [0xb247d0]
// 00a38c22  8bc6                 mov eax, esi
// 00a38c24  e95bffffff           jmp 0xa38b84
// 00a38c29  e89297f4ff           call 0x9823c0
// copied from an identical function in another client (function ?OnToolHitTest@CXTPDockingPaneMiniWnd@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPaneMiniWnd.cpp