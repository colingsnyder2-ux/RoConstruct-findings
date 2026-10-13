// roc 2008-06 00474a50  unit: G3D::Texture  size: 516 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00474a50
//
// 00474a50  6aff                 push -1
// 00474a52  68ba467c00           push 0x7c46ba
// 00474a57  64a100000000         mov eax, dword ptr fs:[0]
// 00474a5d  50                   push eax
// 00474a5e  64892500000000       mov dword ptr fs:[0], esp
// 00474a65  83ec24               sub esp, 0x24
// 00474a68  56                   push esi
// 00474a69  8bf1                 mov esi, ecx
// 00474a6b  c744240800000000     mov dword ptr [esp + 8], 0
// 00474a73  807e5c00             cmp byte ptr [esi + 0x5c], 0
// 00474a77  741c                 je 0x474a95
// 00474a79  8b442438             mov eax, dword ptr [esp + 0x38]
// 00474a7d  c70000000000         mov dword ptr [eax], 0
// 00474a83  5e                   pop esi
// 00474a84  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00474a88  64890d00000000       mov dword ptr fs:[0], ecx
// 00474a8f  83c430               add esp, 0x30
// 00474a92  c20400               ret 4
// 00474a95  53                   push ebx
// 00474a96  55                   push ebp
// 00474a97  57                   push edi
// 00474a98  6a04                 push 4
// 00474a9a  e8913a0900           call 0x508530
// 00474a9f  8b1db8fa9600         mov ebx, dword ptr [0x96fab8]
// 00474aa5  83c404               add esp, 4
// 00474aa8  68ffff0f00           push 0xfffff
// 00474aad  8bf8                 mov edi, eax
// 00474aaf  ff1564298000         call dword ptr [0x802964]
// 00474ab5  6aff                 push -1
// 00474ab7  ff15b82a8000         call dword ptr [0x802ab8]
// 00474abd  803d7eee960000       cmp byte ptr [0x96ee7e], 0
// 00474ac4  740b                 je 0x474ad1
// 00474ac6  68c0840000           push 0x84c0
// 00474acb  ff1504f89600         call dword ptr [0x96f804]
// 00474ad1  8b4658               mov eax, dword ptr [esi + 0x58]
// 00474ad4  83c0fe               add eax, -2
// 00474ad7  83f805               cmp eax, 5
// 00474ada  7715                 ja 0x474af1
// 00474adc  ff24853c4c4700       jmp dword ptr [eax*4 + 0x474c3c]
// 00474ae3  bd13850000           mov ebp, 0x8513
// 00474ae8  eb0c                 jmp 0x474af6
// 00474aea  bdf5840000           mov ebp, 0x84f5
// 00474aef  eb05                 jmp 0x474af6
// 00474af1  bde10d0000           mov ebp, 0xde1
// 00474af6  8b460c               mov eax, dword ptr [esi + 0xc]
// 00474af9  50                   push eax
// 00474afa  55                   push ebp
// 00474afb  ff15d8298000         call dword ptr [0x8029d8]
// 00474b01  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00474b04  0faf4e68             imul ecx, dword ptr [esi + 0x68]
// 00474b08  51                   push ecx
// 00474b09  e8223a0900           call 0x508530
// 00474b0e  83c404               add esp, 4
// 00474b11  50                   push eax
// 00474b12  6801140000           push 0x1401
// 00474b17  6806190000           push 0x1906
// 00474b1c  6a00                 push 0
// 00474b1e  55                   push ebp
// 00474b1f  8907                 mov dword ptr [edi], eax
// 00474b21  ff15b02a8000         call dword ptr [0x802ab0]
// 00474b27  ff15bc2a8000         call dword ptr [0x802abc]
// 00474b2d  ff15b4298000         call dword ptr [0x8029b4]
// 00474b33  68b8e38100           push 0x81e3b8
// 00474b38  8d563c               lea edx, [esi + 0x3c]
// 00474b3b  52                   push edx
// 00474b3c  8d442420             lea eax, [esp + 0x20]
// 00474b40  50                   push eax
// 00474b41  ff15e4238000         call dword ptr [0x8023e4]
// 00474b47  d9e8                 fld1 
// 00474b49  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00474b4c  d95c2408             fstp dword ptr [esp + 8]
// 00474b50  d90534c48100         fld dword ptr [0x81c434]
// 00474b56  8b5618               mov edx, dword ptr [esi + 0x18]
// 00474b59  83c404               add esp, 4
// 00474b5c  d91c24               fstp dword ptr [esp]
// 00474b5f  6a00                 push 0
// 00474b61  51                   push ecx
// 00474b62  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00474b65  52                   push edx
// 00474b66  8b15b8fa9600         mov edx, dword ptr [0x96fab8]
// 00474b6c  51                   push ecx
// 00474b6d  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 00474b70  52                   push edx
// 00474b71  8b5664               mov edx, dword ptr [esi + 0x64]
// 00474b74  bd01000000           mov ebp, 1
// 00474b79  55                   push ebp
// 00474b7a  51                   push ecx
// 00474b7b  52                   push edx
// 00474b7c  53                   push ebx
// 00474b7d  57                   push edi
// 00474b7e  50                   push eax
// 00474b7f  8d442444             lea eax, [esp + 0x44]
// 00474b83  50                   push eax
// 00474b84  896c2474             mov dword ptr [esp + 0x74], ebp
// 00474b88  e803fbffff           call 0x474690
// 00474b8d  83c438               add esp, 0x38
// 00474b90  8d4c2418             lea ecx, [esp + 0x18]
// 00474b94  c644243c03           mov byte ptr [esp + 0x3c], 3
// 00474b99  ff1568248000         call dword ptr [0x802468]
// 00474b9f  8b0f                 mov ecx, dword ptr [edi]
// 00474ba1  51                   push ecx
// 00474ba2  e859310900           call 0x507d00
// 00474ba7  57                   push edi
// 00474ba8  e853310900           call 0x507d00
// 00474bad  8b442418             mov eax, dword ptr [esp + 0x18]
// 00474bb1  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00474bb5  83c408               add esp, 8
// 00474bb8  c70700000000         mov dword ptr [edi], 0
// 00474bbe  85c0                 test eax, eax
// 00474bc0  7410                 je 0x474bd2
// 00474bc2  8907                 mov dword ptr [edi], eax
// 00474bc4  83c004               add eax, 4
// 00474bc7  50                   push eax
// 00474bc8  ff15b0218000         call dword ptr [0x8021b0]
// 00474bce  8b442410             mov eax, dword ptr [esp + 0x10]
// 00474bd2  896c2414             mov dword ptr [esp + 0x14], ebp
// 00474bd6  c644243c00           mov byte ptr [esp + 0x3c], 0
// 00474bdb  85c0                 test eax, eax
// 00474bdd  7443                 je 0x474c22
// 00474bdf  83c004               add eax, 4
// 00474be2  50                   push eax
// 00474be3  ff15ac218000         call dword ptr [0x8021ac]
// 00474be9  85c0                 test eax, eax
// 00474beb  7535                 jne 0x474c22
// 00474bed  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00474bf1  8b7108               mov esi, dword ptr [ecx + 8]
// 00474bf4  85f6                 test esi, esi
// 00474bf6  741f                 je 0x474c17
// 00474bf8  8b0e                 mov ecx, dword ptr [esi]
// 00474bfa  8b11                 mov edx, dword ptr [ecx]
// 00474bfc  8b4204               mov eax, dword ptr [edx + 4]
// 00474bff  ffd0                 call eax
// 00474c01  8bc6                 mov eax, esi
// 00474c03  8b7604               mov esi, dword ptr [esi + 4]
// 00474c06  50                   push eax
// 00474c07  e86eba2200           call 0x6a067a
// 00474c0c  83c404               add esp, 4
// 00474c0f  85f6                 test esi, esi
// 00474c11  75e5                 jne 0x474bf8
// 00474c13  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00474c17  85c9                 test ecx, ecx
// 00474c19  7407                 je 0x474c22
// 00474c1b  8b11                 mov edx, dword ptr [ecx]
// 00474c1d  8b02                 mov eax, dword ptr [edx]
// 00474c1f  55                   push ebp
// 00474c20  ffd0                 call eax
// 00474c22  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00474c26  8bc7                 mov eax, edi
// 00474c28  5f                   pop edi
// 00474c29  5d                   pop ebp
// 00474c2a  5b                   pop ebx
// 00474c2b  5e                   pop esi
// 00474c2c  64890d00000000       mov dword ptr fs:[0], ecx
// 00474c33  83c430               add esp, 0x30
// 00474c36  c20400               ret 4
// 00474c39  8d4900               lea ecx, [ecx]
// 00474c3c  f1                   int1 
// 00474c3d  4a                   dec edx
// 00474c3e  47                   inc edi
// 00474c3f  00f1                 add cl, dh
// 00474c41  4a                   dec edx
// 00474c42  47                   inc edi
// 00474c43  00ea                 add dl, ch
// 00474c45  4a                   dec edx
// 00474c46  47                   inc edi
// 00474c47  00e3                 add bl, ah
// 00474c49  4a                   dec edx
// 00474c4a  47                   inc edi
// 00474c4b  00f1                 add cl, dh
// 00474c4d  4a                   dec edx
// 00474c4e  47                   inc edi
// 00474c4f  00e3                 add bl, ah
// 00474c51  4a                   dec edx
// 00474c52  47                   inc edi
// library g3d-6.09-rbx2008/GLG3Dcpp\roc_export_a69fe47bb0e6952c.cpp (function ?alphaOnlyVersion@Texture@G3D@@QBE?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/roc_export_a69fe47bb0e6952c.cpp
