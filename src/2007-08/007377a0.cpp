// from server: 100% by auto
// roc 2007-08 007377a0  unit: G3D::GFont  size: 628 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007377a0
//
// 007377a0  83ec34               sub esp, 0x34
// 007377a3  53                   push ebx
// 007377a4  56                   push esi
// 007377a5  8b742444             mov esi, dword ptr [esp + 0x44]
// 007377a9  d94604               fld dword ptr [esi + 4]
// 007377ac  57                   push edi
// 007377ad  d906                 fld dword ptr [esi]
// 007377af  d94608               fld dword ptr [esi + 8]
// 007377b2  d9c1                 fld st(1)
// 007377b4  deca                 fmulp st(2)
// 007377b6  d9c2                 fld st(2)
// 007377b8  decb                 fmulp st(3)
// 007377ba  d9c9                 fxch st(1)
// 007377bc  dec2                 faddp st(2)
// 007377be  dcc8                 fmul st(0), st(0)
// 007377c0  dec1                 faddp st(1)
// 007377c2  d95c2448             fstp dword ptr [esp + 0x48]
// 007377c6  d9442448             fld dword ptr [esp + 0x48]
// 007377ca  e83d96efff           call 0x630e0c
// 007377cf  d95c2448             fstp dword ptr [esp + 0x48]
// 007377d3  d9442448             fld dword ptr [esp + 0x48]
// 007377d7  51                   push ecx
// 007377d8  dd54242c             fst qword ptr [esp + 0x2c]
// 007377dc  8d442438             lea eax, [esp + 0x38]
// 007377e0  d95c244c             fstp dword ptr [esp + 0x4c]
// 007377e4  8bce                 mov ecx, esi
// 007377e6  d944244c             fld dword ptr [esp + 0x4c]
// 007377ea  d91c24               fstp dword ptr [esp]
// 007377ed  50                   push eax
// 007377ee  e83d7eddff           call 0x50f630
// 007377f3  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 007377f7  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 007377fb  d94704               fld dword ptr [edi + 4]
// 007377fe  d823                 fsub dword ptr [ebx]
// 00737800  d95c241c             fstp dword ptr [esp + 0x1c]
// 00737804  d94708               fld dword ptr [edi + 8]
// 00737807  d86304               fsub dword ptr [ebx + 4]
// 0073780a  d95c2420             fstp dword ptr [esp + 0x20]
// 0073780e  d9470c               fld dword ptr [edi + 0xc]
// 00737811  d86308               fsub dword ptr [ebx + 8]
// 00737814  d95c2424             fstp dword ptr [esp + 0x24]
// 00737818  d9442438             fld dword ptr [esp + 0x38]
// 0073781c  d9442420             fld dword ptr [esp + 0x20]
// 00737820  d9c0                 fld st(0)
// 00737822  deca                 fmulp st(2)
// 00737824  d944241c             fld dword ptr [esp + 0x1c]
// 00737828  d9c0                 fld st(0)
// 0073782a  d84c2434             fmul dword ptr [esp + 0x34]
// 0073782e  dec3                 faddp st(3)
// 00737830  d944243c             fld dword ptr [esp + 0x3c]
// 00737834  d9442424             fld dword ptr [esp + 0x24]
// 00737838  d9c0                 fld st(0)
// 0073783a  deca                 fmulp st(2)
// 0073783c  d9cc                 fxch st(4)
// 0073783e  dec1                 faddp st(1)
// 00737840  d95c2448             fstp dword ptr [esp + 0x48]
// 00737844  d9442448             fld dword ptr [esp + 0x48]
// 00737848  dd54240c             fst qword ptr [esp + 0xc]
// 0073784c  d9c1                 fld st(1)
// 0073784e  deca                 fmulp st(2)
// 00737850  d9c2                 fld st(2)
// 00737852  decb                 fmulp st(3)
// 00737854  d9c9                 fxch st(1)
// 00737856  dec2                 faddp st(2)
// 00737858  d9c2                 fld st(2)
// 0073785a  decb                 fmulp st(3)
// 0073785c  d9c9                 fxch st(1)
// 0073785e  dec2                 faddp st(2)
// 00737860  d9c9                 fxch st(1)
// 00737862  d95c2448             fstp dword ptr [esp + 0x48]
// 00737866  d9442448             fld dword ptr [esp + 0x48]
// 0073786a  dd54241c             fst qword ptr [esp + 0x1c]
// 0073786e  d94710               fld dword ptr [edi + 0x10]
// 00737871  dcc8                 fmul st(0), st(0)
// 00737873  dd542414             fst qword ptr [esp + 0x14]
// 00737877  d9c2                 fld st(2)
// 00737879  d8cb                 fmul st(3)
// 0073787b  d9ee                 fldz 
// 0073787d  d8dc                 fcomp st(4)
// 0073787f  dfe0                 fnstsw ax
// 00737881  dddb                 fstp st(3)
// 00737883  f6c441               test ah, 0x41
// 00737886  755e                 jne 0x7378e6
// 00737888  d8d1                 fcom st(1)
// 0073788a  dfe0                 fnstsw ax
// 0073788c  f6c405               test ah, 5
// 0073788f  7a55                 jp 0x7378e6
// 00737891  ddd8                 fstp st(0)
// 00737893  ddd8                 fstp st(0)
// 00737895  ddd8                 fstp st(0)
// 00737897  e844c7dbff           call 0x4f3fe0
// 0073789c  d900                 fld dword ptr [eax]
// 0073789e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007378a2  d919                 fstp dword ptr [ecx]
// 007378a4  d94004               fld dword ptr [eax + 4]
// 007378a7  d95904               fstp dword ptr [ecx + 4]
// 007378aa  d94008               fld dword ptr [eax + 8]
// 007378ad  b801000000           mov eax, 1
// 007378b2  d95908               fstp dword ptr [ecx + 8]
// 007378b5  840508d18b00         test byte ptr [0x8bd108], al
// 007378bb  7514                 jne 0x7378d1
// 007378bd  8b0d64e57700         mov ecx, dword ptr [0x77e564]
// 007378c3  090508d18b00         or dword ptr [0x8bd108], eax
// 007378c9  dd01                 fld qword ptr [ecx]
// 007378cb  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 007378d1  dd0500d18b00         fld qword ptr [0x8bd100]
// 007378d7  5f                   pop edi
// 007378d8  d95c2444             fstp dword ptr [esp + 0x44]
// 007378dc  5e                   pop esi
// 007378dd  d9442440             fld dword ptr [esp + 0x40]
// 007378e1  5b                   pop ebx
// 007378e2  83c434               add esp, 0x34
// 007378e5  c3                   ret 
// 007378e6  d9c9                 fxch st(1)
// 007378e8  dee2                 fsubrp st(2)
// 007378ea  d8d1                 fcom st(1)
// 007378ec  dfe0                 fnstsw ax
// 007378ee  f6c405               test ah, 5
// 007378f1  7a53                 jp 0x737946
// 007378f3  ddd9                 fstp st(1)
// 007378f5  ddd8                 fstp st(0)
// 007378f7  e8e4c6dbff           call 0x4f3fe0
// 007378fc  d900                 fld dword ptr [eax]
// 007378fe  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00737902  d919                 fstp dword ptr [ecx]
// 00737904  d94004               fld dword ptr [eax + 4]
// 00737907  d95904               fstp dword ptr [ecx + 4]
// 0073790a  d94008               fld dword ptr [eax + 8]
// 0073790d  b801000000           mov eax, 1
// 00737912  d95908               fstp dword ptr [ecx + 8]
// 00737915  840508d18b00         test byte ptr [0x8bd108], al
// 0073791b  7514                 jne 0x737931
// 0073791d  8b1564e57700         mov edx, dword ptr [0x77e564]
// 00737923  090508d18b00         or dword ptr [0x8bd108], eax
// 00737929  dd02                 fld qword ptr [edx]
// 0073792b  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 00737931  dd0500d18b00         fld qword ptr [0x8bd100]
// 00737937  5f                   pop edi
// 00737938  d95c2444             fstp dword ptr [esp + 0x44]
// 0073793c  5e                   pop esi
// 0073793d  d9442440             fld dword ptr [esp + 0x40]
// 00737941  5b                   pop ebx
// 00737942  83c434               add esp, 0x34
// 00737945  c3                   ret 
// 00737946  dee1                 fsubrp st(1)
// 00737948  e8bf94efff           call 0x630e0c
// 0073794d  dd442414             fld qword ptr [esp + 0x14]
// 00737951  dc5c241c             fcomp qword ptr [esp + 0x1c]
// 00737955  dfe0                 fnstsw ax
// 00737957  f6c405               test ah, 5
// 0073795a  7a06                 jp 0x737962
// 0073795c  dc6c240c             fsubr qword ptr [esp + 0xc]
// 00737960  eb04                 jmp 0x737966
// 00737962  dc44240c             fadd qword ptr [esp + 0xc]
// 00737966  dc742428             fdiv qword ptr [esp + 0x28]
// 0073796a  8b442450             mov eax, dword ptr [esp + 0x50]
// 0073796e  8d4c2428             lea ecx, [esp + 0x28]
// 00737972  d95c2448             fstp dword ptr [esp + 0x48]
// 00737976  d9442448             fld dword ptr [esp + 0x48]
// 0073797a  d95c244c             fstp dword ptr [esp + 0x4c]
// 0073797e  d906                 fld dword ptr [esi]
// 00737980  d944244c             fld dword ptr [esp + 0x4c]
// 00737984  d9c0                 fld st(0)
// 00737986  deca                 fmulp st(2)
// 00737988  d9c9                 fxch st(1)
// 0073798a  d95c2428             fstp dword ptr [esp + 0x28]
// 0073798e  d9c0                 fld st(0)
// 00737990  d84e04               fmul dword ptr [esi + 4]
// 00737993  d95c242c             fstp dword ptr [esp + 0x2c]
// 00737997  d84e08               fmul dword ptr [esi + 8]
// 0073799a  d95c2430             fstp dword ptr [esp + 0x30]
// 0073799e  d903                 fld dword ptr [ebx]
// 007379a0  d8442428             fadd dword ptr [esp + 0x28]
// 007379a4  d95c241c             fstp dword ptr [esp + 0x1c]
// 007379a8  d94304               fld dword ptr [ebx + 4]
// 007379ab  d844242c             fadd dword ptr [esp + 0x2c]
// 007379af  d95c2420             fstp dword ptr [esp + 0x20]
// 007379b3  d94308               fld dword ptr [ebx + 8]
// 007379b6  d8442430             fadd dword ptr [esp + 0x30]
// 007379ba  d95c2424             fstp dword ptr [esp + 0x24]
// 007379be  d944241c             fld dword ptr [esp + 0x1c]
// 007379c2  d910                 fst dword ptr [eax]
// 007379c4  d9442420             fld dword ptr [esp + 0x20]
// 007379c8  d95004               fst dword ptr [eax + 4]
// 007379cb  d9442424             fld dword ptr [esp + 0x24]
// 007379cf  d95008               fst dword ptr [eax + 8]
// 007379d2  8d44241c             lea eax, [esp + 0x1c]
// 007379d6  d94704               fld dword ptr [edi + 4]
// 007379d9  50                   push eax
// 007379da  deeb                 fsubp st(3)
// 007379dc  d9ca                 fxch st(2)
// 007379de  d95c242c             fstp dword ptr [esp + 0x2c]
// 007379e2  d86708               fsub dword ptr [edi + 8]
// 007379e5  d95c2430             fstp dword ptr [esp + 0x30]
// 007379e9  d8670c               fsub dword ptr [edi + 0xc]
// 007379ec  d95c2434             fstp dword ptr [esp + 0x34]
// 007379f0  e8fb03dbff           call 0x4e7df0
// 007379f5  d900                 fld dword ptr [eax]
// 007379f7  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007379fb  d919                 fstp dword ptr [ecx]
// 007379fd  5f                   pop edi
// 007379fe  d94004               fld dword ptr [eax + 4]
// 00737a01  5e                   pop esi
// 00737a02  d95904               fstp dword ptr [ecx + 4]
// 00737a05  5b                   pop ebx
// 00737a06  d94008               fld dword ptr [eax + 8]
// 00737a09  d95908               fstp dword ptr [ecx + 8]
// 00737a0c  d944243c             fld dword ptr [esp + 0x3c]
// 00737a10  83c434               add esp, 0x34
// 00737a13  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ?collisionTimeForMovingPointFixedSphere@CollisionDetection@G3D@@SAMABVVector3@2@0ABVSphere@2@AAV32@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
