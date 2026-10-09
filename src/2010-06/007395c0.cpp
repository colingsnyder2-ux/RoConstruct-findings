// roc 2010-06 007395c0  unit: seg_00730000  size: 452 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007395c0
//
// 007395c0  64a100000000         mov eax, dword ptr fs:[0]
// 007395c6  6aff                 push -1
// 007395c8  68c4919a00           push 0x9a91c4
// 007395cd  50                   push eax
// 007395ce  8b442410             mov eax, dword ptr [esp + 0x10]
// 007395d2  64892500000000       mov dword ptr fs:[0], esp
// 007395d9  83f805               cmp eax, 5
// 007395dc  0f8775010000         ja 0x739757
// 007395e2  ff24856c977300       jmp dword ptr [eax*4 + 0x73976c]
// 007395e9  b801000000           mov eax, 1
// 007395ee  8405e42bc200         test byte ptr [0xc22be4], al
// 007395f4  751d                 jne 0x739613
// 007395f6  0905e42bc200         or dword ptr [0xc22be4], eax
// 007395fc  6a00                 push 0
// 007395fe  68c02bc200           push 0xc22bc0
// 00739603  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0073960b  e890feffff           call 0x7394a0
// 00739610  83c408               add esp, 8
// 00739613  b8c02bc200           mov eax, 0xc22bc0
// 00739618  8b0c24               mov ecx, dword ptr [esp]
// 0073961b  64890d00000000       mov dword ptr fs:[0], ecx
// 00739622  83c40c               add esp, 0xc
// 00739625  c3                   ret 
// 00739626  b802000000           mov eax, 2
// 0073962b  8405e42bc200         test byte ptr [0xc22be4], al
// 00739631  751d                 jne 0x739650
// 00739633  0905e42bc200         or dword ptr [0xc22be4], eax
// 00739639  b801000000           mov eax, 1
// 0073963e  50                   push eax
// 0073963f  689c2bc200           push 0xc22b9c
// 00739644  89442410             mov dword ptr [esp + 0x10], eax
// 00739648  e853feffff           call 0x7394a0
// 0073964d  83c408               add esp, 8
// 00739650  b89c2bc200           mov eax, 0xc22b9c
// 00739655  8b0c24               mov ecx, dword ptr [esp]
// 00739658  64890d00000000       mov dword ptr fs:[0], ecx
// 0073965f  83c40c               add esp, 0xc
// 00739662  c3                   ret 
// 00739663  b804000000           mov eax, 4
// 00739668  8405e42bc200         test byte ptr [0xc22be4], al
// 0073966e  751d                 jne 0x73968d
// 00739670  0905e42bc200         or dword ptr [0xc22be4], eax
// 00739676  b802000000           mov eax, 2
// 0073967b  50                   push eax
// 0073967c  68782bc200           push 0xc22b78
// 00739681  89442410             mov dword ptr [esp + 0x10], eax
// 00739685  e816feffff           call 0x7394a0
// 0073968a  83c408               add esp, 8
// 0073968d  b8782bc200           mov eax, 0xc22b78
// 00739692  8b0c24               mov ecx, dword ptr [esp]
// 00739695  64890d00000000       mov dword ptr fs:[0], ecx
// 0073969c  83c40c               add esp, 0xc
// 0073969f  c3                   ret 
// 007396a0  b808000000           mov eax, 8
// 007396a5  8405e42bc200         test byte ptr [0xc22be4], al
// 007396ab  751d                 jne 0x7396ca
// 007396ad  0905e42bc200         or dword ptr [0xc22be4], eax
// 007396b3  6a03                 push 3
// 007396b5  68542bc200           push 0xc22b54
// 007396ba  c744241003000000     mov dword ptr [esp + 0x10], 3
// 007396c2  e8d9fdffff           call 0x7394a0
// 007396c7  83c408               add esp, 8
// 007396ca  b8542bc200           mov eax, 0xc22b54
// 007396cf  8b0c24               mov ecx, dword ptr [esp]
// 007396d2  64890d00000000       mov dword ptr fs:[0], ecx
// 007396d9  83c40c               add esp, 0xc
// 007396dc  c3                   ret 
// 007396dd  b810000000           mov eax, 0x10
// 007396e2  8405e42bc200         test byte ptr [0xc22be4], al
// 007396e8  751d                 jne 0x739707
// 007396ea  0905e42bc200         or dword ptr [0xc22be4], eax
// 007396f0  b804000000           mov eax, 4
// 007396f5  50                   push eax
// 007396f6  68302bc200           push 0xc22b30
// 007396fb  89442410             mov dword ptr [esp + 0x10], eax
// 007396ff  e89cfdffff           call 0x7394a0
// 00739704  83c408               add esp, 8
// 00739707  b8302bc200           mov eax, 0xc22b30
// 0073970c  8b0c24               mov ecx, dword ptr [esp]
// 0073970f  64890d00000000       mov dword ptr fs:[0], ecx
// 00739716  83c40c               add esp, 0xc
// 00739719  c3                   ret 
// 0073971a  b820000000           mov eax, 0x20
// 0073971f  8405e42bc200         test byte ptr [0xc22be4], al
// 00739725  751d                 jne 0x739744
// 00739727  0905e42bc200         or dword ptr [0xc22be4], eax
// 0073972d  6a05                 push 5
// 0073972f  680c2bc200           push 0xc22b0c
// 00739734  c744241005000000     mov dword ptr [esp + 0x10], 5
// 0073973c  e85ffdffff           call 0x7394a0
// 00739741  83c408               add esp, 8
// 00739744  b80c2bc200           mov eax, 0xc22b0c
// 00739749  8b0c24               mov ecx, dword ptr [esp]
// 0073974c  64890d00000000       mov dword ptr fs:[0], ecx
// 00739753  83c40c               add esp, 0xc
// 00739756  c3                   ret 
// 00739757  e8c4dbe1ff           call 0x557320
// 0073975c  8b0c24               mov ecx, dword ptr [esp]
// 0073975f  64890d00000000       mov dword ptr fs:[0], ecx
// 00739766  83c40c               add esp, 0xc
// 00739769  c3                   ret 
// 0073976a  8bff                 mov edi, edi
// 0073976c  e995730026           jmp 0x26740b06
// 00739771  96                   xchg esi, eax
// 00739772  7300                 jae 0x739774
// 00739774  63967300a096         arpl word ptr [esi - 0x695fff8d], dx
// 0073977a  7300                 jae 0x73977c
// 0073977c  dd9673001a97         fst qword ptr [esi - 0x68e5ff8d]
// 00739782  7300                 jae 0x739784
// library openrbx-client/App\util\NormalId.cpp (function ?normalIdToMatrix3@RBX@@YAABVMatrix3@G3D@@W4NormalId@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
