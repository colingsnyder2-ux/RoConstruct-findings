// roc 2007-08 00737a20  unit: G3D::GFont  size: 597 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00737a20
//
// 00737a20  83ec10               sub esp, 0x10
// 00737a23  d9056c647900         fld dword ptr [0x79646c]
// 00737a29  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00737a2d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00737a31  d9542404             fst dword ptr [esp + 4]
// 00737a35  53                   push ebx
// 00737a36  d954240c             fst dword ptr [esp + 0xc]
// 00737a3a  55                   push ebp
// 00737a3b  d95c2414             fstp dword ptr [esp + 0x14]
// 00737a3f  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00737a43  56                   push esi
// 00737a44  8b742424             mov esi, dword ptr [esp + 0x24]
// 00737a48  57                   push edi
// 00737a49  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00737a4d  c60701               mov byte ptr [edi], 1
// 00737a50  d901                 fld dword ptr [ecx]
// 00737a52  d902                 fld dword ptr [edx]
// 00737a54  8d5a0c               lea ebx, [edx + 0xc]
// 00737a57  d8d9                 fcomp st(1)
// 00737a59  dfe0                 fnstsw ax
// 00737a5b  f6c441               test ah, 0x41
// 00737a5e  7513                 jne 0x737a73
// 00737a60  ddd8                 fstp st(0)
// 00737a62  d902                 fld dword ptr [edx]
// 00737a64  d95d00               fstp dword ptr [ebp]
// 00737a67  c60700               mov byte ptr [edi], 0
// 00737a6a  833e00               cmp dword ptr [esi], 0
// 00737a6d  7426                 je 0x737a95
// 00737a6f  d902                 fld dword ptr [edx]
// 00737a71  eb1a                 jmp 0x737a8d
// 00737a73  d903                 fld dword ptr [ebx]
// 00737a75  ded9                 fcompp 
// 00737a77  dfe0                 fnstsw ax
// 00737a79  f6c405               test ah, 5
// 00737a7c  7a17                 jp 0x737a95
// 00737a7e  d903                 fld dword ptr [ebx]
// 00737a80  d95d00               fstp dword ptr [ebp]
// 00737a83  c60700               mov byte ptr [edi], 0
// 00737a86  833e00               cmp dword ptr [esi], 0
// 00737a89  740a                 je 0x737a95
// 00737a8b  d903                 fld dword ptr [ebx]
// 00737a8d  d821                 fsub dword ptr [ecx]
// 00737a8f  d836                 fdiv dword ptr [esi]
// 00737a91  d95c2414             fstp dword ptr [esp + 0x14]
// 00737a95  d94104               fld dword ptr [ecx + 4]
// 00737a98  d94204               fld dword ptr [edx + 4]
// 00737a9b  d8d9                 fcomp st(1)
// 00737a9d  dfe0                 fnstsw ax
// 00737a9f  f6c441               test ah, 0x41
// 00737aa2  7516                 jne 0x737aba
// 00737aa4  ddd8                 fstp st(0)
// 00737aa6  d94204               fld dword ptr [edx + 4]
// 00737aa9  d95d04               fstp dword ptr [ebp + 4]
// 00737aac  c60700               mov byte ptr [edi], 0
// 00737aaf  837e0400             cmp dword ptr [esi + 4], 0
// 00737ab3  742d                 je 0x737ae2
// 00737ab5  d94204               fld dword ptr [edx + 4]
// 00737ab8  eb1e                 jmp 0x737ad8
// 00737aba  d94304               fld dword ptr [ebx + 4]
// 00737abd  ded9                 fcompp 
// 00737abf  dfe0                 fnstsw ax
// 00737ac1  f6c405               test ah, 5
// 00737ac4  7a1c                 jp 0x737ae2
// 00737ac6  d94304               fld dword ptr [ebx + 4]
// 00737ac9  d95d04               fstp dword ptr [ebp + 4]
// 00737acc  c60700               mov byte ptr [edi], 0
// 00737acf  837e0400             cmp dword ptr [esi + 4], 0
// 00737ad3  740d                 je 0x737ae2
// 00737ad5  d94304               fld dword ptr [ebx + 4]
// 00737ad8  d86104               fsub dword ptr [ecx + 4]
// 00737adb  d87604               fdiv dword ptr [esi + 4]
// 00737ade  d95c2418             fstp dword ptr [esp + 0x18]
// 00737ae2  d94108               fld dword ptr [ecx + 8]
// 00737ae5  d94208               fld dword ptr [edx + 8]
// 00737ae8  d8d9                 fcomp st(1)
// 00737aea  dfe0                 fnstsw ax
// 00737aec  f6c441               test ah, 0x41
// 00737aef  0f852b010000         jne 0x737c20
// 00737af5  ddd8                 fstp st(0)
// 00737af7  d94208               fld dword ptr [edx + 8]
// 00737afa  d95d08               fstp dword ptr [ebp + 8]
// 00737afd  c60700               mov byte ptr [edi], 0
// 00737b00  837e0800             cmp dword ptr [esi + 8], 0
// 00737b04  740d                 je 0x737b13
// 00737b06  d94208               fld dword ptr [edx + 8]
// 00737b09  d86108               fsub dword ptr [ecx + 8]
// 00737b0c  d87608               fdiv dword ptr [esi + 8]
// 00737b0f  d95c241c             fstp dword ptr [esp + 0x1c]
// 00737b13  d9442418             fld dword ptr [esp + 0x18]
// 00737b17  33ff                 xor edi, edi
// 00737b19  d9442414             fld dword ptr [esp + 0x14]
// 00737b1d  897c2434             mov dword ptr [esp + 0x34], edi
// 00737b21  ded9                 fcompp 
// 00737b23  dfe0                 fnstsw ax
// 00737b25  f6c405               test ah, 5
// 00737b28  7a08                 jp 0x737b32
// 00737b2a  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00737b32  8b442434             mov eax, dword ptr [esp + 0x34]
// 00737b36  d944241c             fld dword ptr [esp + 0x1c]
// 00737b3a  d9448414             fld dword ptr [esp + eax*4 + 0x14]
// 00737b3e  ded9                 fcompp 
// 00737b40  dfe0                 fnstsw ax
// 00737b42  f6c405               test ah, 5
// 00737b45  7a08                 jp 0x737b4f
// 00737b47  c744243402000000     mov dword ptr [esp + 0x34], 2
// 00737b4f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00737b53  f744841400000080     test dword ptr [esp + eax*4 + 0x14], 0x80000000
// 00737b5b  0f85ef000000         jne 0x737c50
// 00737b61  8bc6                 mov eax, esi
// 00737b63  2bc1                 sub eax, ecx
// 00737b65  2be9                 sub ebp, ecx
// 00737b67  2bd1                 sub edx, ecx
// 00737b69  89442410             mov dword ptr [esp + 0x10], eax
// 00737b6d  2bd9                 sub ebx, ecx
// 00737b6f  90                   nop 
// 00737b70  3b7c2434             cmp edi, dword ptr [esp + 0x34]
// 00737b74  743c                 je 0x737bb2
// 00737b76  d90408               fld dword ptr [eax + ecx]
// 00737b79  8b442434             mov eax, dword ptr [esp + 0x34]
// 00737b7d  d84c8414             fmul dword ptr [esp + eax*4 + 0x14]
// 00737b81  d801                 fadd dword ptr [ecx]
// 00737b83  d95c242c             fstp dword ptr [esp + 0x2c]
// 00737b87  d944242c             fld dword ptr [esp + 0x2c]
// 00737b8b  d91429               fst dword ptr [ecx + ebp]
// 00737b8e  d9040a               fld dword ptr [edx + ecx]
// 00737b91  d8d9                 fcomp st(1)
// 00737b93  dfe0                 fnstsw ax
// 00737b95  f6c441               test ah, 0x41
// 00737b98  0f84bc000000         je 0x737c5a
// 00737b9e  d9040b               fld dword ptr [ebx + ecx]
// 00737ba1  ded9                 fcompp 
// 00737ba3  dfe0                 fnstsw ax
// 00737ba5  f6c405               test ah, 5
// 00737ba8  0f8bae000000         jnp 0x737c5c
// 00737bae  8b442410             mov eax, dword ptr [esp + 0x10]
// 00737bb2  83c701               add edi, 1
// 00737bb5  83c104               add ecx, 4
// 00737bb8  83ff03               cmp edi, 3
// 00737bbb  7cb3                 jl 0x737b70
// 00737bbd  f60538d18b0001       test byte ptr [0x8bd138], 1
// 00737bc4  d9ee                 fldz 
// 00737bc6  7519                 jne 0x737be1
// 00737bc8  830d38d18b0001       or dword ptr [0x8bd138], 1
// 00737bcf  d9152cd18b00         fst dword ptr [0x8bd12c]
// 00737bd5  d91530d18b00         fst dword ptr [0x8bd130]
// 00737bdb  d91534d18b00         fst dword ptr [0x8bd134]
// 00737be1  d9052cd18b00         fld dword ptr [0x8bd12c]
// 00737be7  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00737beb  8b542434             mov edx, dword ptr [esp + 0x34]
// 00737bef  d919                 fstp dword ptr [ecx]
// 00737bf1  d90530d18b00         fld dword ptr [0x8bd130]
// 00737bf7  d95904               fstp dword ptr [ecx + 4]
// 00737bfa  d90534d18b00         fld dword ptr [0x8bd134]
// 00737c00  d95908               fstp dword ptr [ecx + 8]
// 00737c03  d81c96               fcomp dword ptr [esi + edx*4]
// 00737c06  dfe0                 fnstsw ax
// 00737c08  f6c405               test ah, 5
// 00737c0b  7a59                 jp 0x737c66
// 00737c0d  dd0590657900         fld qword ptr [0x796590]
// 00737c13  5f                   pop edi
// 00737c14  5e                   pop esi
// 00737c15  d91c91               fstp dword ptr [ecx + edx*4]
// 00737c18  5d                   pop ebp
// 00737c19  b001                 mov al, 1
// 00737c1b  5b                   pop ebx
// 00737c1c  83c410               add esp, 0x10
// 00737c1f  c3                   ret 
// 00737c20  d94308               fld dword ptr [ebx + 8]
// 00737c23  ded9                 fcompp 
// 00737c25  dfe0                 fnstsw ax
// 00737c27  f6c405               test ah, 5
// 00737c2a  7a1b                 jp 0x737c47
// 00737c2c  d94308               fld dword ptr [ebx + 8]
// 00737c2f  d95d08               fstp dword ptr [ebp + 8]
// 00737c32  c60700               mov byte ptr [edi], 0
// 00737c35  837e0800             cmp dword ptr [esi + 8], 0
// 00737c39  0f84d4feffff         je 0x737b13
// 00737c3f  d94308               fld dword ptr [ebx + 8]
// 00737c42  e9c2feffff           jmp 0x737b09
// 00737c47  803f00               cmp byte ptr [edi], 0
// 00737c4a  0f84c3feffff         je 0x737b13
// 00737c50  5f                   pop edi
// 00737c51  5e                   pop esi
// 00737c52  5d                   pop ebp
// 00737c53  32c0                 xor al, al
// 00737c55  5b                   pop ebx
// 00737c56  83c410               add esp, 0x10
// 00737c59  c3                   ret 
// 00737c5a  ddd8                 fstp st(0)
// 00737c5c  5f                   pop edi
// 00737c5d  5e                   pop esi
// 00737c5e  5d                   pop ebp
// 00737c5f  32c0                 xor al, al
// 00737c61  5b                   pop ebx
// 00737c62  83c410               add esp, 0x10
// 00737c65  c3                   ret 
// 00737c66  d9e8                 fld1 
// 00737c68  5f                   pop edi
// 00737c69  5e                   pop esi
// 00737c6a  d91c91               fstp dword ptr [ecx + edx*4]
// 00737c6d  5d                   pop ebp
// 00737c6e  b001                 mov al, 1
// 00737c70  5b                   pop ebx
// 00737c71  83c410               add esp, 0x10
// 00737c74  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?collisionLocationForMovingPointFixedAABox@CollisionDetection@G3D@@SA_NABVVector3@2@0ABVAABox@2@AAV32@AA_N2@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
