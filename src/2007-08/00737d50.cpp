// roc 2007-08 00737d50  unit: G3D::GFont  size: 747 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00737d50
//
// 00737d50  6aff                 push -1
// 00737d52  6810c57600           push 0x76c510
// 00737d57  64a100000000         mov eax, dword ptr fs:[0]
// 00737d5d  50                   push eax
// 00737d5e  81ec84000000         sub esp, 0x84
// 00737d64  53                   push ebx
// 00737d65  56                   push esi
// 00737d66  57                   push edi
// 00737d67  a188518b00           mov eax, dword ptr [0x8b5188]
// 00737d6c  33c4                 xor eax, esp
// 00737d6e  50                   push eax
// 00737d6f  8d842494000000       lea eax, [esp + 0x94]
// 00737d76  64a300000000         mov dword ptr fs:[0], eax
// 00737d7c  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 00737d83  d94604               fld dword ptr [esi + 4]
// 00737d86  d906                 fld dword ptr [esi]
// 00737d88  d94608               fld dword ptr [esi + 8]
// 00737d8b  d9c1                 fld st(1)
// 00737d8d  deca                 fmulp st(2)
// 00737d8f  d9c2                 fld st(2)
// 00737d91  decb                 fmulp st(3)
// 00737d93  d9c9                 fxch st(1)
// 00737d95  dec2                 faddp st(2)
// 00737d97  dcc8                 fmul st(0), st(0)
// 00737d99  dec1                 faddp st(1)
// 00737d9b  d95c2414             fstp dword ptr [esp + 0x14]
// 00737d9f  d9442414             fld dword ptr [esp + 0x14]
// 00737da3  e86490efff           call 0x630e0c
// 00737da8  d95c2414             fstp dword ptr [esp + 0x14]
// 00737dac  d9442414             fld dword ptr [esp + 0x14]
// 00737db0  d95c2414             fstp dword ptr [esp + 0x14]
// 00737db4  d9ee                 fldz 
// 00737db6  d85c2414             fcomp dword ptr [esp + 0x14]
// 00737dba  dfe0                 fnstsw ax
// 00737dbc  f6c444               test ah, 0x44
// 00737dbf  7a06                 jp 0x737dc7
// 00737dc1  d9e8                 fld1 
// 00737dc3  d95c2414             fstp dword ptr [esp + 0x14]
// 00737dc7  d9442414             fld dword ptr [esp + 0x14]
// 00737dcb  51                   push ecx
// 00737dcc  8d442458             lea eax, [esp + 0x58]
// 00737dd0  d91c24               fstp dword ptr [esp]
// 00737dd3  50                   push eax
// 00737dd4  8bce                 mov ecx, esi
// 00737dd6  e85578ddff           call 0x50f630
// 00737ddb  d9ee                 fldz 
// 00737ddd  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 00737de4  d9542424             fst dword ptr [esp + 0x24]
// 00737de8  8d4c2454             lea ecx, [esp + 0x54]
// 00737dec  d9542428             fst dword ptr [esp + 0x28]
// 00737df0  51                   push ecx
// 00737df1  d9542430             fst dword ptr [esp + 0x30]
// 00737df5  8d54247c             lea edx, [esp + 0x7c]
// 00737df9  d9542434             fst dword ptr [esp + 0x34]
// 00737dfd  56                   push esi
// 00737dfe  d954243c             fst dword ptr [esp + 0x3c]
// 00737e02  52                   push edx
// 00737e03  d95c2444             fstp dword ptr [esp + 0x44]
// 00737e07  e8845adeff           call 0x51d890
// 00737e0c  8b9c24b8000000       mov ebx, dword ptr [esp + 0xb8]
// 00737e13  8d4c2430             lea ecx, [esp + 0x30]
// 00737e17  51                   push ecx
// 00737e18  8d54242c             lea edx, [esp + 0x2c]
// 00737e1c  52                   push edx
// 00737e1d  50                   push eax
// 00737e1e  8bc3                 mov eax, ebx
// 00737e20  c78424b400000000000000 mov dword ptr [esp + 0xb4], 0
// 00737e2b  e850feffff           call 0x737c80
// 00737e30  83c418               add esp, 0x18
// 00737e33  837c241c02           cmp dword ptr [esp + 0x1c], 2
// 00737e38  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00737e43  0f858f010000         jne 0x737fd8
// 00737e49  d906                 fld dword ptr [esi]
// 00737e4b  8bbc24b4000000       mov edi, dword ptr [esp + 0xb4]
// 00737e52  81ffcc9b8c00         cmp edi, 0x8c9bcc
// 00737e58  d9442424             fld dword ptr [esp + 0x24]
// 00737e5c  d8e1                 fsub st(1)
// 00737e5e  d95c2420             fstp dword ptr [esp + 0x20]
// 00737e62  d94604               fld dword ptr [esi + 4]
// 00737e65  d9442428             fld dword ptr [esp + 0x28]
// 00737e69  d8e1                 fsub st(1)
// 00737e6b  d95c241c             fstp dword ptr [esp + 0x1c]
// 00737e6f  d94608               fld dword ptr [esi + 8]
// 00737e72  d944242c             fld dword ptr [esp + 0x2c]
// 00737e76  d8e1                 fsub st(1)
// 00737e78  d95c2418             fstp dword ptr [esp + 0x18]
// 00737e7c  d944241c             fld dword ptr [esp + 0x1c]
// 00737e80  d9442420             fld dword ptr [esp + 0x20]
// 00737e84  d9442418             fld dword ptr [esp + 0x18]
// 00737e88  d9c1                 fld st(1)
// 00737e8a  deca                 fmulp st(2)
// 00737e8c  d9c2                 fld st(2)
// 00737e8e  decb                 fmulp st(3)
// 00737e90  d9c9                 fxch st(1)
// 00737e92  dec2                 faddp st(2)
// 00737e94  dcc8                 fmul st(0), st(0)
// 00737e96  dec1                 faddp st(1)
// 00737e98  d95c2410             fstp dword ptr [esp + 0x10]
// 00737e9c  d9442430             fld dword ptr [esp + 0x30]
// 00737ea0  dee3                 fsubrp st(3)
// 00737ea2  d9ca                 fxch st(2)
// 00737ea4  d95c2420             fstp dword ptr [esp + 0x20]
// 00737ea8  d86c2434             fsubr dword ptr [esp + 0x34]
// 00737eac  d95c2418             fstp dword ptr [esp + 0x18]
// 00737eb0  d86c2438             fsubr dword ptr [esp + 0x38]
// 00737eb4  d95c241c             fstp dword ptr [esp + 0x1c]
// 00737eb8  d9442418             fld dword ptr [esp + 0x18]
// 00737ebc  d9442420             fld dword ptr [esp + 0x20]
// 00737ec0  d944241c             fld dword ptr [esp + 0x1c]
// 00737ec4  d9c1                 fld st(1)
// 00737ec6  deca                 fmulp st(2)
// 00737ec8  d9c2                 fld st(2)
// 00737eca  decb                 fmulp st(3)
// 00737ecc  d9c9                 fxch st(1)
// 00737ece  dec2                 faddp st(2)
// 00737ed0  dcc8                 fmul st(0), st(0)
// 00737ed2  dec1                 faddp st(1)
// 00737ed4  d95c2418             fstp dword ptr [esp + 0x18]
// 00737ed8  0f8480000000         je 0x737f5e
// 00737ede  8d44243c             lea eax, [esp + 0x3c]
// 00737ee2  50                   push eax
// 00737ee3  8bcb                 mov ecx, ebx
// 00737ee5  e8a6c0deff           call 0x523f90
// 00737eea  50                   push eax
// 00737eeb  8d4c2470             lea ecx, [esp + 0x70]
// 00737eef  51                   push ecx
// 00737ef0  8bcb                 mov ecx, ebx
// 00737ef2  e83931ddff           call 0x50b030
// 00737ef7  50                   push eax
// 00737ef8  8d942480000000       lea edx, [esp + 0x80]
// 00737eff  52                   push edx
// 00737f00  e82bbfdeff           call 0x523e30
// 00737f05  83c40c               add esp, 0xc
// 00737f08  56                   push esi
// 00737f09  8d4c244c             lea ecx, [esp + 0x4c]
// 00737f0d  51                   push ecx
// 00737f0e  8bc8                 mov ecx, eax
// 00737f10  c78424a400000001000000 mov dword ptr [esp + 0xa4], 1
// 00737f1b  e8602fdfff           call 0x52ae80
// 00737f20  d906                 fld dword ptr [esi]
// 00737f22  d8642448             fsub dword ptr [esp + 0x48]
// 00737f26  8d542460             lea edx, [esp + 0x60]
// 00737f2a  52                   push edx
// 00737f2b  8d4c2440             lea ecx, [esp + 0x40]
// 00737f2f  d95c2440             fstp dword ptr [esp + 0x40]
// 00737f33  d94604               fld dword ptr [esi + 4]
// 00737f36  d8642450             fsub dword ptr [esp + 0x50]
// 00737f3a  d95c2444             fstp dword ptr [esp + 0x44]
// 00737f3e  d94608               fld dword ptr [esi + 8]
// 00737f41  d8642454             fsub dword ptr [esp + 0x54]
// 00737f45  d95c2448             fstp dword ptr [esp + 0x48]
// 00737f49  e8a2fedaff           call 0x4e7df0
// 00737f4e  d900                 fld dword ptr [eax]
// 00737f50  d91f                 fstp dword ptr [edi]
// 00737f52  d94004               fld dword ptr [eax + 4]
// 00737f55  d95f04               fstp dword ptr [edi + 4]
// 00737f58  d94008               fld dword ptr [eax + 8]
// 00737f5b  d95f08               fstp dword ptr [edi + 8]
// 00737f5e  d9442410             fld dword ptr [esp + 0x10]
// 00737f62  d9442418             fld dword ptr [esp + 0x18]
// 00737f66  d8d1                 fcom st(1)
// 00737f68  dfe0                 fnstsw ax
// 00737f6a  f6c405               test ah, 5
// 00737f6d  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00737f74  7a31                 jp 0x737fa7
// 00737f76  ddd9                 fstp st(1)
// 00737f78  d9442430             fld dword ptr [esp + 0x30]
// 00737f7c  d918                 fstp dword ptr [eax]
// 00737f7e  d9442434             fld dword ptr [esp + 0x34]
// 00737f82  d95804               fstp dword ptr [eax + 4]
// 00737f85  d9442438             fld dword ptr [esp + 0x38]
// 00737f89  d95808               fstp dword ptr [eax + 8]
// 00737f8c  e87b8eefff           call 0x630e0c
// 00737f91  d95c2410             fstp dword ptr [esp + 0x10]
// 00737f95  d9442410             fld dword ptr [esp + 0x10]
// 00737f99  d8742414             fdiv dword ptr [esp + 0x14]
// 00737f9d  d95c2410             fstp dword ptr [esp + 0x10]
// 00737fa1  d9442410             fld dword ptr [esp + 0x10]
// 00737fa5  eb7b                 jmp 0x738022
// 00737fa7  ddd8                 fstp st(0)
// 00737fa9  d9442424             fld dword ptr [esp + 0x24]
// 00737fad  d918                 fstp dword ptr [eax]
// 00737faf  d9442428             fld dword ptr [esp + 0x28]
// 00737fb3  d95804               fstp dword ptr [eax + 4]
// 00737fb6  d944242c             fld dword ptr [esp + 0x2c]
// 00737fba  d95808               fstp dword ptr [eax + 8]
// 00737fbd  e84a8eefff           call 0x630e0c
// 00737fc2  d95c2410             fstp dword ptr [esp + 0x10]
// 00737fc6  d9442410             fld dword ptr [esp + 0x10]
// 00737fca  d8742414             fdiv dword ptr [esp + 0x14]
// 00737fce  d95c2410             fstp dword ptr [esp + 0x10]
// 00737fd2  d9442410             fld dword ptr [esp + 0x10]
// 00737fd6  eb4a                 jmp 0x738022
// 00737fd8  e803c0dbff           call 0x4f3fe0
// 00737fdd  d900                 fld dword ptr [eax]
// 00737fdf  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00737fe6  d919                 fstp dword ptr [ecx]
// 00737fe8  d94004               fld dword ptr [eax + 4]
// 00737feb  d95904               fstp dword ptr [ecx + 4]
// 00737fee  d94008               fld dword ptr [eax + 8]
// 00737ff1  b801000000           mov eax, 1
// 00737ff6  d95908               fstp dword ptr [ecx + 8]
// 00737ff9  840508d18b00         test byte ptr [0x8bd108], al
// 00737fff  7513                 jne 0x738014
// 00738001  090508d18b00         or dword ptr [0x8bd108], eax
// 00738007  a164e57700           mov eax, dword ptr [0x77e564]
// 0073800c  dd00                 fld qword ptr [eax]
// 0073800e  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 00738014  dd0500d18b00         fld qword ptr [0x8bd100]
// 0073801a  d95c2410             fstp dword ptr [esp + 0x10]
// 0073801e  d9442410             fld dword ptr [esp + 0x10]
// 00738022  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00738029  64890d00000000       mov dword ptr fs:[0], ecx
// 00738030  59                   pop ecx
// 00738031  5f                   pop edi
// 00738032  5e                   pop esi
// 00738033  5b                   pop ebx
// 00738034  81c490000000         add esp, 0x90
// 0073803a  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?collisionTimeForMovingPointFixedCapsule@CollisionDetection@G3D@@SAMABVVector3@2@0ABVCapsule@2@AAV32@2@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
