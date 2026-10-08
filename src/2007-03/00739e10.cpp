// roc 2007-03 00739e10  unit: seg_00730000  size: 628 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00739e10
//
// 00739e10  83ec34               sub esp, 0x34
// 00739e13  53                   push ebx
// 00739e14  56                   push esi
// 00739e15  8b742444             mov esi, dword ptr [esp + 0x44]
// 00739e19  d94604               fld dword ptr [esi + 4]
// 00739e1c  57                   push edi
// 00739e1d  d906                 fld dword ptr [esi]
// 00739e1f  d94608               fld dword ptr [esi + 8]
// 00739e22  d9c1                 fld st(1)
// 00739e24  deca                 fmulp st(2)
// 00739e26  d9c2                 fld st(2)
// 00739e28  decb                 fmulp st(3)
// 00739e2a  d9c9                 fxch st(1)
// 00739e2c  dec2                 faddp st(2)
// 00739e2e  dcc8                 fmul st(0), st(0)
// 00739e30  dec1                 faddp st(1)
// 00739e32  d95c2448             fstp dword ptr [esp + 0x48]
// 00739e36  d9442448             fld dword ptr [esp + 0x48]
// 00739e3a  e86d54eeff           call 0x61f2ac
// 00739e3f  d95c2448             fstp dword ptr [esp + 0x48]
// 00739e43  d9442448             fld dword ptr [esp + 0x48]
// 00739e47  51                   push ecx
// 00739e48  dd54242c             fst qword ptr [esp + 0x2c]
// 00739e4c  8d442438             lea eax, [esp + 0x38]
// 00739e50  d95c244c             fstp dword ptr [esp + 0x4c]
// 00739e54  8bce                 mov ecx, esi
// 00739e56  d944244c             fld dword ptr [esp + 0x4c]
// 00739e5a  d91c24               fstp dword ptr [esp]
// 00739e5d  50                   push eax
// 00739e5e  e88d9edcff           call 0x503cf0
// 00739e63  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00739e67  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00739e6b  d94704               fld dword ptr [edi + 4]
// 00739e6e  d823                 fsub dword ptr [ebx]
// 00739e70  d95c241c             fstp dword ptr [esp + 0x1c]
// 00739e74  d94708               fld dword ptr [edi + 8]
// 00739e77  d86304               fsub dword ptr [ebx + 4]
// 00739e7a  d95c2420             fstp dword ptr [esp + 0x20]
// 00739e7e  d9470c               fld dword ptr [edi + 0xc]
// 00739e81  d86308               fsub dword ptr [ebx + 8]
// 00739e84  d95c2424             fstp dword ptr [esp + 0x24]
// 00739e88  d9442438             fld dword ptr [esp + 0x38]
// 00739e8c  d9442420             fld dword ptr [esp + 0x20]
// 00739e90  d9c0                 fld st(0)
// 00739e92  deca                 fmulp st(2)
// 00739e94  d944241c             fld dword ptr [esp + 0x1c]
// 00739e98  d9c0                 fld st(0)
// 00739e9a  d84c2434             fmul dword ptr [esp + 0x34]
// 00739e9e  dec3                 faddp st(3)
// 00739ea0  d944243c             fld dword ptr [esp + 0x3c]
// 00739ea4  d9442424             fld dword ptr [esp + 0x24]
// 00739ea8  d9c0                 fld st(0)
// 00739eaa  deca                 fmulp st(2)
// 00739eac  d9cc                 fxch st(4)
// 00739eae  dec1                 faddp st(1)
// 00739eb0  d95c2448             fstp dword ptr [esp + 0x48]
// 00739eb4  d9442448             fld dword ptr [esp + 0x48]
// 00739eb8  dd54240c             fst qword ptr [esp + 0xc]
// 00739ebc  d9c1                 fld st(1)
// 00739ebe  deca                 fmulp st(2)
// 00739ec0  d9c2                 fld st(2)
// 00739ec2  decb                 fmulp st(3)
// 00739ec4  d9c9                 fxch st(1)
// 00739ec6  dec2                 faddp st(2)
// 00739ec8  d9c2                 fld st(2)
// 00739eca  decb                 fmulp st(3)
// 00739ecc  d9c9                 fxch st(1)
// 00739ece  dec2                 faddp st(2)
// 00739ed0  d9c9                 fxch st(1)
// 00739ed2  d95c2448             fstp dword ptr [esp + 0x48]
// 00739ed6  d9442448             fld dword ptr [esp + 0x48]
// 00739eda  dd54241c             fst qword ptr [esp + 0x1c]
// 00739ede  d94710               fld dword ptr [edi + 0x10]
// 00739ee1  dcc8                 fmul st(0), st(0)
// 00739ee3  dd542414             fst qword ptr [esp + 0x14]
// 00739ee7  d9c2                 fld st(2)
// 00739ee9  d8cb                 fmul st(3)
// 00739eeb  d9ee                 fldz 
// 00739eed  d8dc                 fcomp st(4)
// 00739eef  dfe0                 fnstsw ax
// 00739ef1  dddb                 fstp st(3)
// 00739ef3  f6c441               test ah, 0x41
// 00739ef6  755e                 jne 0x739f56
// 00739ef8  d8d1                 fcom st(1)
// 00739efa  dfe0                 fnstsw ax
// 00739efc  f6c405               test ah, 5
// 00739eff  7a55                 jp 0x739f56
// 00739f01  ddd8                 fstp st(0)
// 00739f03  ddd8                 fstp st(0)
// 00739f05  ddd8                 fstp st(0)
// 00739f07  e8c4dadaff           call 0x4e79d0
// 00739f0c  d900                 fld dword ptr [eax]
// 00739f0e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00739f12  d919                 fstp dword ptr [ecx]
// 00739f14  d94004               fld dword ptr [eax + 4]
// 00739f17  d95904               fstp dword ptr [ecx + 4]
// 00739f1a  d94008               fld dword ptr [eax + 8]
// 00739f1d  b801000000           mov eax, 1
// 00739f22  d95908               fstp dword ptr [ecx + 8]
// 00739f25  8405d0778b00         test byte ptr [0x8b77d0], al
// 00739f2b  7514                 jne 0x739f41
// 00739f2d  8b0d28e67700         mov ecx, dword ptr [0x77e628]
// 00739f33  0905d0778b00         or dword ptr [0x8b77d0], eax
// 00739f39  dd01                 fld qword ptr [ecx]
// 00739f3b  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 00739f41  dd05c8778b00         fld qword ptr [0x8b77c8]
// 00739f47  5f                   pop edi
// 00739f48  d95c2444             fstp dword ptr [esp + 0x44]
// 00739f4c  5e                   pop esi
// 00739f4d  d9442440             fld dword ptr [esp + 0x40]
// 00739f51  5b                   pop ebx
// 00739f52  83c434               add esp, 0x34
// 00739f55  c3                   ret 
// 00739f56  d9c9                 fxch st(1)
// 00739f58  dee2                 fsubrp st(2)
// 00739f5a  d8d1                 fcom st(1)
// 00739f5c  dfe0                 fnstsw ax
// 00739f5e  f6c405               test ah, 5
// 00739f61  7a53                 jp 0x739fb6
// 00739f63  ddd9                 fstp st(1)
// 00739f65  ddd8                 fstp st(0)
// 00739f67  e864dadaff           call 0x4e79d0
// 00739f6c  d900                 fld dword ptr [eax]
// 00739f6e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00739f72  d919                 fstp dword ptr [ecx]
// 00739f74  d94004               fld dword ptr [eax + 4]
// 00739f77  d95904               fstp dword ptr [ecx + 4]
// 00739f7a  d94008               fld dword ptr [eax + 8]
// 00739f7d  b801000000           mov eax, 1
// 00739f82  d95908               fstp dword ptr [ecx + 8]
// 00739f85  8405d0778b00         test byte ptr [0x8b77d0], al
// 00739f8b  7514                 jne 0x739fa1
// 00739f8d  8b1528e67700         mov edx, dword ptr [0x77e628]
// 00739f93  0905d0778b00         or dword ptr [0x8b77d0], eax
// 00739f99  dd02                 fld qword ptr [edx]
// 00739f9b  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 00739fa1  dd05c8778b00         fld qword ptr [0x8b77c8]
// 00739fa7  5f                   pop edi
// 00739fa8  d95c2444             fstp dword ptr [esp + 0x44]
// 00739fac  5e                   pop esi
// 00739fad  d9442440             fld dword ptr [esp + 0x40]
// 00739fb1  5b                   pop ebx
// 00739fb2  83c434               add esp, 0x34
// 00739fb5  c3                   ret 
// 00739fb6  dee1                 fsubrp st(1)
// 00739fb8  e8ef52eeff           call 0x61f2ac
// 00739fbd  dd442414             fld qword ptr [esp + 0x14]
// 00739fc1  dc5c241c             fcomp qword ptr [esp + 0x1c]
// 00739fc5  dfe0                 fnstsw ax
// 00739fc7  f6c405               test ah, 5
// 00739fca  7a06                 jp 0x739fd2
// 00739fcc  dc6c240c             fsubr qword ptr [esp + 0xc]
// 00739fd0  eb04                 jmp 0x739fd6
// 00739fd2  dc44240c             fadd qword ptr [esp + 0xc]
// 00739fd6  dc742428             fdiv qword ptr [esp + 0x28]
// 00739fda  8b442450             mov eax, dword ptr [esp + 0x50]
// 00739fde  8d4c2428             lea ecx, [esp + 0x28]
// 00739fe2  d95c2448             fstp dword ptr [esp + 0x48]
// 00739fe6  d9442448             fld dword ptr [esp + 0x48]
// 00739fea  d95c244c             fstp dword ptr [esp + 0x4c]
// 00739fee  d906                 fld dword ptr [esi]
// 00739ff0  d944244c             fld dword ptr [esp + 0x4c]
// 00739ff4  d9c0                 fld st(0)
// 00739ff6  deca                 fmulp st(2)
// 00739ff8  d9c9                 fxch st(1)
// 00739ffa  d95c2428             fstp dword ptr [esp + 0x28]
// 00739ffe  d9c0                 fld st(0)
// 0073a000  d84e04               fmul dword ptr [esi + 4]
// 0073a003  d95c242c             fstp dword ptr [esp + 0x2c]
// 0073a007  d84e08               fmul dword ptr [esi + 8]
// 0073a00a  d95c2430             fstp dword ptr [esp + 0x30]
// 0073a00e  d903                 fld dword ptr [ebx]
// 0073a010  d8442428             fadd dword ptr [esp + 0x28]
// 0073a014  d95c241c             fstp dword ptr [esp + 0x1c]
// 0073a018  d94304               fld dword ptr [ebx + 4]
// 0073a01b  d844242c             fadd dword ptr [esp + 0x2c]
// 0073a01f  d95c2420             fstp dword ptr [esp + 0x20]
// 0073a023  d94308               fld dword ptr [ebx + 8]
// 0073a026  d8442430             fadd dword ptr [esp + 0x30]
// 0073a02a  d95c2424             fstp dword ptr [esp + 0x24]
// 0073a02e  d944241c             fld dword ptr [esp + 0x1c]
// 0073a032  d910                 fst dword ptr [eax]
// 0073a034  d9442420             fld dword ptr [esp + 0x20]
// 0073a038  d95004               fst dword ptr [eax + 4]
// 0073a03b  d9442424             fld dword ptr [esp + 0x24]
// 0073a03f  d95008               fst dword ptr [eax + 8]
// 0073a042  8d44241c             lea eax, [esp + 0x1c]
// 0073a046  d94704               fld dword ptr [edi + 4]
// 0073a049  50                   push eax
// 0073a04a  deeb                 fsubp st(3)
// 0073a04c  d9ca                 fxch st(2)
// 0073a04e  d95c242c             fstp dword ptr [esp + 0x2c]
// 0073a052  d86708               fsub dword ptr [edi + 8]
// 0073a055  d95c2430             fstp dword ptr [esp + 0x30]
// 0073a059  d8670c               fsub dword ptr [edi + 0xc]
// 0073a05c  d95c2434             fstp dword ptr [esp + 0x34]
// 0073a060  e82b18daff           call 0x4db890
// 0073a065  d900                 fld dword ptr [eax]
// 0073a067  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0073a06b  d919                 fstp dword ptr [ecx]
// 0073a06d  5f                   pop edi
// 0073a06e  d94004               fld dword ptr [eax + 4]
// 0073a071  5e                   pop esi
// 0073a072  d95904               fstp dword ptr [ecx + 4]
// 0073a075  5b                   pop ebx
// 0073a076  d94008               fld dword ptr [eax + 8]
// 0073a079  d95908               fstp dword ptr [ecx + 8]
// 0073a07c  d944243c             fld dword ptr [esp + 0x3c]
// 0073a080  83c434               add esp, 0x34
// 0073a083  c3                   ret 
// library rbxgs-g3d/G3Dcpp\CollisionDetection.cpp (function ?collisionTimeForMovingPointFixedSphere@CollisionDetection@G3D@@SAMABVVector3@2@0ABVSphere@2@AAV32@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/CollisionDetection.cpp
