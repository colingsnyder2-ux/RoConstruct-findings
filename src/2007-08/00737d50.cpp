// from server: 100% by tester
// roc 2007-03 0073a3c0  unit: seg_00730000  size: 747 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0073a3c0
//
// 0073a3c0  6aff                 push -1
// 0073a3c2  6870d77600           push 0x76d770
// 0073a3c7  64a100000000         mov eax, dword ptr fs:[0]
// 0073a3cd  50                   push eax
// 0073a3ce  81ec84000000         sub esp, 0x84
// 0073a3d4  53                   push ebx
// 0073a3d5  56                   push esi
// 0073a3d6  57                   push edi
// 0073a3d7  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0073a3dc  33c4                 xor eax, esp
// 0073a3de  50                   push eax
// 0073a3df  8d842494000000       lea eax, [esp + 0x94]
// 0073a3e6  64a300000000         mov dword ptr fs:[0], eax
// 0073a3ec  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 0073a3f3  d94604               fld dword ptr [esi + 4]
// 0073a3f6  d906                 fld dword ptr [esi]
// 0073a3f8  d94608               fld dword ptr [esi + 8]
// 0073a3fb  d9c1                 fld st(1)
// 0073a3fd  deca                 fmulp st(2)
// 0073a3ff  d9c2                 fld st(2)
// 0073a401  decb                 fmulp st(3)
// 0073a403  d9c9                 fxch st(1)
// 0073a405  dec2                 faddp st(2)
// 0073a407  dcc8                 fmul st(0), st(0)
// 0073a409  dec1                 faddp st(1)
// 0073a40b  d95c2414             fstp dword ptr [esp + 0x14]
// 0073a40f  d9442414             fld dword ptr [esp + 0x14]
// 0073a413  e8944eeeff           call 0x61f2ac
// 0073a418  d95c2414             fstp dword ptr [esp + 0x14]
// 0073a41c  d9442414             fld dword ptr [esp + 0x14]
// 0073a420  d95c2414             fstp dword ptr [esp + 0x14]
// 0073a424  d9ee                 fldz 
// 0073a426  d85c2414             fcomp dword ptr [esp + 0x14]
// 0073a42a  dfe0                 fnstsw ax
// 0073a42c  f6c444               test ah, 0x44
// 0073a42f  7a06                 jp 0x73a437
// 0073a431  d9e8                 fld1 
// 0073a433  d95c2414             fstp dword ptr [esp + 0x14]
// 0073a437  d9442414             fld dword ptr [esp + 0x14]
// 0073a43b  51                   push ecx
// 0073a43c  8d442458             lea eax, [esp + 0x58]
// 0073a440  d91c24               fstp dword ptr [esp]
// 0073a443  50                   push eax
// 0073a444  8bce                 mov ecx, esi
// 0073a446  e8a598dcff           call 0x503cf0
// 0073a44b  d9ee                 fldz 
// 0073a44d  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 0073a454  d9542424             fst dword ptr [esp + 0x24]
// 0073a458  8d4c2454             lea ecx, [esp + 0x54]
// 0073a45c  d9542428             fst dword ptr [esp + 0x28]
// 0073a460  51                   push ecx
// 0073a461  d9542430             fst dword ptr [esp + 0x30]
// 0073a465  8d54247c             lea edx, [esp + 0x7c]
// 0073a469  d9542434             fst dword ptr [esp + 0x34]
// 0073a46d  56                   push esi
// 0073a46e  d954243c             fst dword ptr [esp + 0x3c]
// 0073a472  52                   push edx
// 0073a473  d95c2444             fstp dword ptr [esp + 0x44]
// 0073a477  e8d497ddff           call 0x513c50
// 0073a47c  8b9c24b8000000       mov ebx, dword ptr [esp + 0xb8]
// 0073a483  8d4c2430             lea ecx, [esp + 0x30]
// 0073a487  51                   push ecx
// 0073a488  8d54242c             lea edx, [esp + 0x2c]
// 0073a48c  52                   push edx
// 0073a48d  50                   push eax
// 0073a48e  8bc3                 mov eax, ebx
// 0073a490  c78424b400000000000000 mov dword ptr [esp + 0xb4], 0
// 0073a49b  e850feffff           call 0x73a2f0
// 0073a4a0  83c418               add esp, 0x18
// 0073a4a3  837c241c02           cmp dword ptr [esp + 0x1c], 2
// 0073a4a8  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 0073a4b3  0f858f010000         jne 0x73a648
// 0073a4b9  d906                 fld dword ptr [esi]
// 0073a4bb  8bbc24b4000000       mov edi, dword ptr [esp + 0xb4]
// 0073a4c2  81ff842c8c00         cmp edi, 0x8c2c84
// 0073a4c8  d9442424             fld dword ptr [esp + 0x24]
// 0073a4cc  d8e1                 fsub st(1)
// 0073a4ce  d95c2420             fstp dword ptr [esp + 0x20]
// 0073a4d2  d94604               fld dword ptr [esi + 4]
// 0073a4d5  d9442428             fld dword ptr [esp + 0x28]
// 0073a4d9  d8e1                 fsub st(1)
// 0073a4db  d95c241c             fstp dword ptr [esp + 0x1c]
// 0073a4df  d94608               fld dword ptr [esi + 8]
// 0073a4e2  d944242c             fld dword ptr [esp + 0x2c]
// 0073a4e6  d8e1                 fsub st(1)
// 0073a4e8  d95c2418             fstp dword ptr [esp + 0x18]
// 0073a4ec  d944241c             fld dword ptr [esp + 0x1c]
// 0073a4f0  d9442420             fld dword ptr [esp + 0x20]
// 0073a4f4  d9442418             fld dword ptr [esp + 0x18]
// 0073a4f8  d9c1                 fld st(1)
// 0073a4fa  deca                 fmulp st(2)
// 0073a4fc  d9c2                 fld st(2)
// 0073a4fe  decb                 fmulp st(3)
// 0073a500  d9c9                 fxch st(1)
// 0073a502  dec2                 faddp st(2)
// 0073a504  dcc8                 fmul st(0), st(0)
// 0073a506  dec1                 faddp st(1)
// 0073a508  d95c2410             fstp dword ptr [esp + 0x10]
// 0073a50c  d9442430             fld dword ptr [esp + 0x30]
// 0073a510  dee3                 fsubrp st(3)
// 0073a512  d9ca                 fxch st(2)
// 0073a514  d95c2420             fstp dword ptr [esp + 0x20]
// 0073a518  d86c2434             fsubr dword ptr [esp + 0x34]
// 0073a51c  d95c2418             fstp dword ptr [esp + 0x18]
// 0073a520  d86c2438             fsubr dword ptr [esp + 0x38]
// 0073a524  d95c241c             fstp dword ptr [esp + 0x1c]
// 0073a528  d9442418             fld dword ptr [esp + 0x18]
// 0073a52c  d9442420             fld dword ptr [esp + 0x20]
// 0073a530  d944241c             fld dword ptr [esp + 0x1c]
// 0073a534  d9c1                 fld st(1)
// 0073a536  deca                 fmulp st(2)
// 0073a538  d9c2                 fld st(2)
// 0073a53a  decb                 fmulp st(3)
// 0073a53c  d9c9                 fxch st(1)
// 0073a53e  dec2                 faddp st(2)
// 0073a540  dcc8                 fmul st(0), st(0)
// 0073a542  dec1                 faddp st(1)
// 0073a544  d95c2418             fstp dword ptr [esp + 0x18]
// 0073a548  0f8480000000         je 0x73a5ce
// 0073a54e  8d44243c             lea eax, [esp + 0x3c]
// 0073a552  50                   push eax
// 0073a553  8bcb                 mov ecx, ebx
// 0073a555  e8f646deff           call 0x51ec50
// 0073a55a  50                   push eax
// 0073a55b  8d4c2470             lea ecx, [esp + 0x70]
// 0073a55f  51                   push ecx
// 0073a560  8bcb                 mov ecx, ebx
// 0073a562  e8e961dcff           call 0x500750
// 0073a567  50                   push eax
// 0073a568  8d942480000000       lea edx, [esp + 0x80]
// 0073a56f  52                   push edx
// 0073a570  e87b45deff           call 0x51eaf0
// 0073a575  83c40c               add esp, 0xc
// 0073a578  56                   push esi
// 0073a579  8d4c244c             lea ecx, [esp + 0x4c]
// 0073a57d  51                   push ecx
// 0073a57e  8bc8                 mov ecx, eax
// 0073a580  c78424a400000001000000 mov dword ptr [esp + 0xa4], 1
// 0073a58b  e8000bdfff           call 0x52b090
// 0073a590  d906                 fld dword ptr [esi]
// 0073a592  d8642448             fsub dword ptr [esp + 0x48]
// 0073a596  8d542460             lea edx, [esp + 0x60]
// 0073a59a  52                   push edx
// 0073a59b  8d4c2440             lea ecx, [esp + 0x40]
// 0073a59f  d95c2440             fstp dword ptr [esp + 0x40]
// 0073a5a3  d94604               fld dword ptr [esi + 4]
// 0073a5a6  d8642450             fsub dword ptr [esp + 0x50]
// 0073a5aa  d95c2444             fstp dword ptr [esp + 0x44]
// 0073a5ae  d94608               fld dword ptr [esi + 8]
// 0073a5b1  d8642454             fsub dword ptr [esp + 0x54]
// 0073a5b5  d95c2448             fstp dword ptr [esp + 0x48]
// 0073a5b9  e8d212daff           call 0x4db890
// 0073a5be  d900                 fld dword ptr [eax]
// 0073a5c0  d91f                 fstp dword ptr [edi]
// 0073a5c2  d94004               fld dword ptr [eax + 4]
// 0073a5c5  d95f04               fstp dword ptr [edi + 4]
// 0073a5c8  d94008               fld dword ptr [eax + 8]
// 0073a5cb  d95f08               fstp dword ptr [edi + 8]
// 0073a5ce  d9442410             fld dword ptr [esp + 0x10]
// 0073a5d2  d9442418             fld dword ptr [esp + 0x18]
// 0073a5d6  d8d1                 fcom st(1)
// 0073a5d8  dfe0                 fnstsw ax
// 0073a5da  f6c405               test ah, 5
// 0073a5dd  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 0073a5e4  7a31                 jp 0x73a617
// 0073a5e6  ddd9                 fstp st(1)
// 0073a5e8  d9442430             fld dword ptr [esp + 0x30]
// 0073a5ec  d918                 fstp dword ptr [eax]
// 0073a5ee  d9442434             fld dword ptr [esp + 0x34]
// 0073a5f2  d95804               fstp dword ptr [eax + 4]
// 0073a5f5  d9442438             fld dword ptr [esp + 0x38]
// 0073a5f9  d95808               fstp dword ptr [eax + 8]
// 0073a5fc  e8ab4ceeff           call 0x61f2ac
// 0073a601  d95c2410             fstp dword ptr [esp + 0x10]
// 0073a605  d9442410             fld dword ptr [esp + 0x10]
// 0073a609  d8742414             fdiv dword ptr [esp + 0x14]
// 0073a60d  d95c2410             fstp dword ptr [esp + 0x10]
// 0073a611  d9442410             fld dword ptr [esp + 0x10]
// 0073a615  eb7b                 jmp 0x73a692
// 0073a617  ddd8                 fstp st(0)
// 0073a619  d9442424             fld dword ptr [esp + 0x24]
// 0073a61d  d918                 fstp dword ptr [eax]
// 0073a61f  d9442428             fld dword ptr [esp + 0x28]
// 0073a623  d95804               fstp dword ptr [eax + 4]
// 0073a626  d944242c             fld dword ptr [esp + 0x2c]
// 0073a62a  d95808               fstp dword ptr [eax + 8]
// 0073a62d  e87a4ceeff           call 0x61f2ac
// 0073a632  d95c2410             fstp dword ptr [esp + 0x10]
// 0073a636  d9442410             fld dword ptr [esp + 0x10]
// 0073a63a  d8742414             fdiv dword ptr [esp + 0x14]
// 0073a63e  d95c2410             fstp dword ptr [esp + 0x10]
// 0073a642  d9442410             fld dword ptr [esp + 0x10]
// 0073a646  eb4a                 jmp 0x73a692
// 0073a648  e883d3daff           call 0x4e79d0
// 0073a64d  d900                 fld dword ptr [eax]
// 0073a64f  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 0073a656  d919                 fstp dword ptr [ecx]
// 0073a658  d94004               fld dword ptr [eax + 4]
// 0073a65b  d95904               fstp dword ptr [ecx + 4]
// 0073a65e  d94008               fld dword ptr [eax + 8]
// 0073a661  b801000000           mov eax, 1
// 0073a666  d95908               fstp dword ptr [ecx + 8]
// 0073a669  8405d0778b00         test byte ptr [0x8b77d0], al
// 0073a66f  7513                 jne 0x73a684
// 0073a671  0905d0778b00         or dword ptr [0x8b77d0], eax
// 0073a677  a128e67700           mov eax, dword ptr [0x77e628]
// 0073a67c  dd00                 fld qword ptr [eax]
// 0073a67e  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 0073a684  dd05c8778b00         fld qword ptr [0x8b77c8]
// 0073a68a  d95c2410             fstp dword ptr [esp + 0x10]
// 0073a68e  d9442410             fld dword ptr [esp + 0x10]
// 0073a692  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0073a699  64890d00000000       mov dword ptr fs:[0], ecx
// 0073a6a0  59                   pop ecx
// 0073a6a1  5f                   pop edi
// 0073a6a2  5e                   pop esi
// 0073a6a3  5b                   pop ebx
// 0073a6a4  81c490000000         add esp, 0x90
// 0073a6aa  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?collisionTimeForMovingPointFixedCapsule@CollisionDetection@G3D@@SAMABVVector3@2@0ABVCapsule@2@AAV32@2@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
