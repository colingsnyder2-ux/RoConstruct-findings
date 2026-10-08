// roc 2007-03 0073a090  unit: seg_00730000  size: 597 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0073a090
//
// 0073a090  83ec10               sub esp, 0x10
// 0073a093  d90578587900         fld dword ptr [0x795878]
// 0073a099  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073a09d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0073a0a1  d9542404             fst dword ptr [esp + 4]
// 0073a0a5  53                   push ebx
// 0073a0a6  d954240c             fst dword ptr [esp + 0xc]
// 0073a0aa  55                   push ebp
// 0073a0ab  d95c2414             fstp dword ptr [esp + 0x14]
// 0073a0af  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0073a0b3  56                   push esi
// 0073a0b4  8b742424             mov esi, dword ptr [esp + 0x24]
// 0073a0b8  57                   push edi
// 0073a0b9  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0073a0bd  c60701               mov byte ptr [edi], 1
// 0073a0c0  d901                 fld dword ptr [ecx]
// 0073a0c2  d902                 fld dword ptr [edx]
// 0073a0c4  8d5a0c               lea ebx, [edx + 0xc]
// 0073a0c7  d8d9                 fcomp st(1)
// 0073a0c9  dfe0                 fnstsw ax
// 0073a0cb  f6c441               test ah, 0x41
// 0073a0ce  7513                 jne 0x73a0e3
// 0073a0d0  ddd8                 fstp st(0)
// 0073a0d2  d902                 fld dword ptr [edx]
// 0073a0d4  d95d00               fstp dword ptr [ebp]
// 0073a0d7  c60700               mov byte ptr [edi], 0
// 0073a0da  833e00               cmp dword ptr [esi], 0
// 0073a0dd  7426                 je 0x73a105
// 0073a0df  d902                 fld dword ptr [edx]
// 0073a0e1  eb1a                 jmp 0x73a0fd
// 0073a0e3  d903                 fld dword ptr [ebx]
// 0073a0e5  ded9                 fcompp 
// 0073a0e7  dfe0                 fnstsw ax
// 0073a0e9  f6c405               test ah, 5
// 0073a0ec  7a17                 jp 0x73a105
// 0073a0ee  d903                 fld dword ptr [ebx]
// 0073a0f0  d95d00               fstp dword ptr [ebp]
// 0073a0f3  c60700               mov byte ptr [edi], 0
// 0073a0f6  833e00               cmp dword ptr [esi], 0
// 0073a0f9  740a                 je 0x73a105
// 0073a0fb  d903                 fld dword ptr [ebx]
// 0073a0fd  d821                 fsub dword ptr [ecx]
// 0073a0ff  d836                 fdiv dword ptr [esi]
// 0073a101  d95c2414             fstp dword ptr [esp + 0x14]
// 0073a105  d94104               fld dword ptr [ecx + 4]
// 0073a108  d94204               fld dword ptr [edx + 4]
// 0073a10b  d8d9                 fcomp st(1)
// 0073a10d  dfe0                 fnstsw ax
// 0073a10f  f6c441               test ah, 0x41
// 0073a112  7516                 jne 0x73a12a
// 0073a114  ddd8                 fstp st(0)
// 0073a116  d94204               fld dword ptr [edx + 4]
// 0073a119  d95d04               fstp dword ptr [ebp + 4]
// 0073a11c  c60700               mov byte ptr [edi], 0
// 0073a11f  837e0400             cmp dword ptr [esi + 4], 0
// 0073a123  742d                 je 0x73a152
// 0073a125  d94204               fld dword ptr [edx + 4]
// 0073a128  eb1e                 jmp 0x73a148
// 0073a12a  d94304               fld dword ptr [ebx + 4]
// 0073a12d  ded9                 fcompp 
// 0073a12f  dfe0                 fnstsw ax
// 0073a131  f6c405               test ah, 5
// 0073a134  7a1c                 jp 0x73a152
// 0073a136  d94304               fld dword ptr [ebx + 4]
// 0073a139  d95d04               fstp dword ptr [ebp + 4]
// 0073a13c  c60700               mov byte ptr [edi], 0
// 0073a13f  837e0400             cmp dword ptr [esi + 4], 0
// 0073a143  740d                 je 0x73a152
// 0073a145  d94304               fld dword ptr [ebx + 4]
// 0073a148  d86104               fsub dword ptr [ecx + 4]
// 0073a14b  d87604               fdiv dword ptr [esi + 4]
// 0073a14e  d95c2418             fstp dword ptr [esp + 0x18]
// 0073a152  d94108               fld dword ptr [ecx + 8]
// 0073a155  d94208               fld dword ptr [edx + 8]
// 0073a158  d8d9                 fcomp st(1)
// 0073a15a  dfe0                 fnstsw ax
// 0073a15c  f6c441               test ah, 0x41
// 0073a15f  0f852b010000         jne 0x73a290
// 0073a165  ddd8                 fstp st(0)
// 0073a167  d94208               fld dword ptr [edx + 8]
// 0073a16a  d95d08               fstp dword ptr [ebp + 8]
// 0073a16d  c60700               mov byte ptr [edi], 0
// 0073a170  837e0800             cmp dword ptr [esi + 8], 0
// 0073a174  740d                 je 0x73a183
// 0073a176  d94208               fld dword ptr [edx + 8]
// 0073a179  d86108               fsub dword ptr [ecx + 8]
// 0073a17c  d87608               fdiv dword ptr [esi + 8]
// 0073a17f  d95c241c             fstp dword ptr [esp + 0x1c]
// 0073a183  d9442418             fld dword ptr [esp + 0x18]
// 0073a187  33ff                 xor edi, edi
// 0073a189  d9442414             fld dword ptr [esp + 0x14]
// 0073a18d  897c2434             mov dword ptr [esp + 0x34], edi
// 0073a191  ded9                 fcompp 
// 0073a193  dfe0                 fnstsw ax
// 0073a195  f6c405               test ah, 5
// 0073a198  7a08                 jp 0x73a1a2
// 0073a19a  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0073a1a2  8b442434             mov eax, dword ptr [esp + 0x34]
// 0073a1a6  d944241c             fld dword ptr [esp + 0x1c]
// 0073a1aa  d9448414             fld dword ptr [esp + eax*4 + 0x14]
// 0073a1ae  ded9                 fcompp 
// 0073a1b0  dfe0                 fnstsw ax
// 0073a1b2  f6c405               test ah, 5
// 0073a1b5  7a08                 jp 0x73a1bf
// 0073a1b7  c744243402000000     mov dword ptr [esp + 0x34], 2
// 0073a1bf  8b442434             mov eax, dword ptr [esp + 0x34]
// 0073a1c3  f744841400000080     test dword ptr [esp + eax*4 + 0x14], 0x80000000
// 0073a1cb  0f85ef000000         jne 0x73a2c0
// 0073a1d1  8bc6                 mov eax, esi
// 0073a1d3  2bc1                 sub eax, ecx
// 0073a1d5  2be9                 sub ebp, ecx
// 0073a1d7  2bd1                 sub edx, ecx
// 0073a1d9  89442410             mov dword ptr [esp + 0x10], eax
// 0073a1dd  2bd9                 sub ebx, ecx
// 0073a1df  90                   nop 
// 0073a1e0  3b7c2434             cmp edi, dword ptr [esp + 0x34]
// 0073a1e4  743c                 je 0x73a222
// 0073a1e6  d90408               fld dword ptr [eax + ecx]
// 0073a1e9  8b442434             mov eax, dword ptr [esp + 0x34]
// 0073a1ed  d84c8414             fmul dword ptr [esp + eax*4 + 0x14]
// 0073a1f1  d801                 fadd dword ptr [ecx]
// 0073a1f3  d95c242c             fstp dword ptr [esp + 0x2c]
// 0073a1f7  d944242c             fld dword ptr [esp + 0x2c]
// 0073a1fb  d91429               fst dword ptr [ecx + ebp]
// 0073a1fe  d9040a               fld dword ptr [edx + ecx]
// 0073a201  d8d9                 fcomp st(1)
// 0073a203  dfe0                 fnstsw ax
// 0073a205  f6c441               test ah, 0x41
// 0073a208  0f84bc000000         je 0x73a2ca
// 0073a20e  d9040b               fld dword ptr [ebx + ecx]
// 0073a211  ded9                 fcompp 
// 0073a213  dfe0                 fnstsw ax
// 0073a215  f6c405               test ah, 5
// 0073a218  0f8bae000000         jnp 0x73a2cc
// 0073a21e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0073a222  83c701               add edi, 1
// 0073a225  83c104               add ecx, 4
// 0073a228  83ff03               cmp edi, 3
// 0073a22b  7cb3                 jl 0x73a1e0
// 0073a22d  f60500788b0001       test byte ptr [0x8b7800], 1
// 0073a234  d9ee                 fldz 
// 0073a236  7519                 jne 0x73a251
// 0073a238  830d00788b0001       or dword ptr [0x8b7800], 1
// 0073a23f  d915f4778b00         fst dword ptr [0x8b77f4]
// 0073a245  d915f8778b00         fst dword ptr [0x8b77f8]
// 0073a24b  d915fc778b00         fst dword ptr [0x8b77fc]
// 0073a251  d905f4778b00         fld dword ptr [0x8b77f4]
// 0073a257  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0073a25b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0073a25f  d919                 fstp dword ptr [ecx]
// 0073a261  d905f8778b00         fld dword ptr [0x8b77f8]
// 0073a267  d95904               fstp dword ptr [ecx + 4]
// 0073a26a  d905fc778b00         fld dword ptr [0x8b77fc]
// 0073a270  d95908               fstp dword ptr [ecx + 8]
// 0073a273  d81c96               fcomp dword ptr [esi + edx*4]
// 0073a276  dfe0                 fnstsw ax
// 0073a278  f6c405               test ah, 5
// 0073a27b  7a59                 jp 0x73a2d6
// 0073a27d  dd05a0597900         fld qword ptr [0x7959a0]
// 0073a283  5f                   pop edi
// 0073a284  5e                   pop esi
// 0073a285  d91c91               fstp dword ptr [ecx + edx*4]
// 0073a288  5d                   pop ebp
// 0073a289  b001                 mov al, 1
// 0073a28b  5b                   pop ebx
// 0073a28c  83c410               add esp, 0x10
// 0073a28f  c3                   ret 
// 0073a290  d94308               fld dword ptr [ebx + 8]
// 0073a293  ded9                 fcompp 
// 0073a295  dfe0                 fnstsw ax
// 0073a297  f6c405               test ah, 5
// 0073a29a  7a1b                 jp 0x73a2b7
// 0073a29c  d94308               fld dword ptr [ebx + 8]
// 0073a29f  d95d08               fstp dword ptr [ebp + 8]
// 0073a2a2  c60700               mov byte ptr [edi], 0
// 0073a2a5  837e0800             cmp dword ptr [esi + 8], 0
// 0073a2a9  0f84d4feffff         je 0x73a183
// 0073a2af  d94308               fld dword ptr [ebx + 8]
// 0073a2b2  e9c2feffff           jmp 0x73a179
// 0073a2b7  803f00               cmp byte ptr [edi], 0
// 0073a2ba  0f84c3feffff         je 0x73a183
// 0073a2c0  5f                   pop edi
// 0073a2c1  5e                   pop esi
// 0073a2c2  5d                   pop ebp
// 0073a2c3  32c0                 xor al, al
// 0073a2c5  5b                   pop ebx
// 0073a2c6  83c410               add esp, 0x10
// 0073a2c9  c3                   ret 
// 0073a2ca  ddd8                 fstp st(0)
// 0073a2cc  5f                   pop edi
// 0073a2cd  5e                   pop esi
// 0073a2ce  5d                   pop ebp
// 0073a2cf  32c0                 xor al, al
// 0073a2d1  5b                   pop ebx
// 0073a2d2  83c410               add esp, 0x10
// 0073a2d5  c3                   ret 
// 0073a2d6  d9e8                 fld1 
// 0073a2d8  5f                   pop edi
// 0073a2d9  5e                   pop esi
// 0073a2da  d91c91               fstp dword ptr [ecx + edx*4]
// 0073a2dd  5d                   pop ebp
// 0073a2de  b001                 mov al, 1
// 0073a2e0  5b                   pop ebx
// 0073a2e1  83c410               add esp, 0x10
// 0073a2e4  c3                   ret 
// library rbxgs-g3d/G3Dcpp\CollisionDetection.cpp (function ?collisionLocationForMovingPointFixedAABox@CollisionDetection@G3D@@SA_NABVVector3@2@0ABVAABox@2@AAV32@AA_N2@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/CollisionDetection.cpp
