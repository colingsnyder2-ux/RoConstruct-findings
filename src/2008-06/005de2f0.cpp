// roc 2008-06 005de2f0  unit: RBX::Message  size: 610 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de2f0
//
// 005de2f0  83ec68               sub esp, 0x68
// 005de2f3  d9ee                 fldz 
// 005de2f5  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 005de2f9  53                   push ebx
// 005de2fa  d95c2408             fstp dword ptr [esp + 8]
// 005de2fe  55                   push ebp
// 005de2ff  56                   push esi
// 005de300  57                   push edi
// 005de301  33db                 xor ebx, ebx
// 005de303  53                   push ebx
// 005de304  8d442428             lea eax, [esp + 0x28]
// 005de308  83cdff               or ebp, 0xffffffff
// 005de30b  50                   push eax
// 005de30c  896c2418             mov dword ptr [esp + 0x18], ebp
// 005de310  8d7c245c             lea edi, [esp + 0x5c]
// 005de314  e8274ff3ff           call 0x513240
// 005de319  33f6                 xor esi, esi
// 005de31b  eb1d                 jmp 0x5de33a
// 005de31d  8d4900               lea ecx, [ecx]
// 005de320  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 005de327  ddd8                 fstp st(0)
// 005de329  53                   push ebx
// 005de32a  8d442428             lea eax, [esp + 0x28]
// 005de32e  50                   push eax
// 005de32f  e80c4ff3ff           call 0x513240
// 005de334  33f6                 xor esi, esi
// 005de336  eb02                 jmp 0x5de33a
// 005de338  ddd8                 fstp st(0)
// 005de33a  56                   push esi
// 005de33b  8d4c241c             lea ecx, [esp + 0x1c]
// 005de33f  51                   push ecx
// 005de340  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 005de347  e8f44ef3ff           call 0x513240
// 005de34c  d9442428             fld dword ptr [esp + 0x28]
// 005de350  d84c241c             fmul dword ptr [esp + 0x1c]
// 005de354  d944242c             fld dword ptr [esp + 0x2c]
// 005de358  d84c2420             fmul dword ptr [esp + 0x20]
// 005de35c  dec1                 faddp st(1)
// 005de35e  d9442418             fld dword ptr [esp + 0x18]
// 005de362  d84c2424             fmul dword ptr [esp + 0x24]
// 005de366  dec1                 faddp st(1)
// 005de368  d917                 fst dword ptr [edi]
// 005de36a  d9c0                 fld st(0)
// 005de36c  d9e1                 fabs 
// 005de36e  d9442414             fld dword ptr [esp + 0x14]
// 005de372  d9c0                 fld st(0)
// 005de374  d9e1                 fabs 
// 005de376  d8da                 fcomp st(2)
// 005de378  dfe0                 fnstsw ax
// 005de37a  ddd9                 fstp st(1)
// 005de37c  f6c405               test ah, 5
// 005de37f  7a0e                 jp 0x5de38f
// 005de381  ddd8                 fstp st(0)
// 005de383  895c2410             mov dword ptr [esp + 0x10], ebx
// 005de387  d9542414             fst dword ptr [esp + 0x14]
// 005de38b  8bee                 mov ebp, esi
// 005de38d  eb02                 jmp 0x5de391
// 005de38f  ddd9                 fstp st(1)
// 005de391  46                   inc esi
// 005de392  83c704               add edi, 4
// 005de395  83fe03               cmp esi, 3
// 005de398  7c9e                 jl 0x5de338
// 005de39a  43                   inc ebx
// 005de39b  83fb03               cmp ebx, 3
// 005de39e  7c80                 jl 0x5de320
// 005de3a0  d9ee                 fldz 
// 005de3a2  ded9                 fcompp 
// 005de3a4  dfe0                 fnstsw ax
// 005de3a6  f6c441               test ah, 0x41
// 005de3a9  7a04                 jp 0x5de3af
// 005de3ab  d9e8                 fld1 
// 005de3ad  eb06                 jmp 0x5de3b5
// 005de3af  d905b8c38100         fld dword ptr [0x81c3b8]
// 005de3b5  8b542410             mov edx, dword ptr [esp + 0x10]
// 005de3b9  d95c2414             fstp dword ptr [esp + 0x14]
// 005de3bd  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 005de3c4  52                   push edx
// 005de3c5  8d442428             lea eax, [esp + 0x28]
// 005de3c9  50                   push eax
// 005de3ca  8bcb                 mov ecx, ebx
// 005de3cc  e86f4ef3ff           call 0x513240
// 005de3d1  d94004               fld dword ptr [eax + 4]
// 005de3d4  d9442414             fld dword ptr [esp + 0x14]
// 005de3d8  83ceff               or esi, 0xffffffff
// 005de3db  dcc9                 fmul st(1), st(0)
// 005de3dd  0bfe                 or edi, esi
// 005de3df  d94008               fld dword ptr [eax + 8]
// 005de3e2  33c9                 xor ecx, ecx
// 005de3e4  8d542458             lea edx, [esp + 0x58]
// 005de3e8  d8c9                 fmul st(1)
// 005de3ea  d900                 fld dword ptr [eax]
// 005de3ec  deca                 fmulp st(2)
// 005de3ee  d9c9                 fxch st(1)
// 005de3f0  d95c2430             fstp dword ptr [esp + 0x30]
// 005de3f4  d9c9                 fxch st(1)
// 005de3f6  d95c2434             fstp dword ptr [esp + 0x34]
// 005de3fa  d95c2438             fstp dword ptr [esp + 0x38]
// 005de3fe  d9ee                 fldz 
// 005de400  d9c0                 fld st(0)
// 005de402  3b4c2410             cmp ecx, dword ptr [esp + 0x10]
// 005de406  7463                 je 0x5de46b
// 005de408  85ed                 test ebp, ebp
// 005de40a  741b                 je 0x5de427
// 005de40c  d942fc               fld dword ptr [edx - 4]
// 005de40f  d9e1                 fabs 
// 005de411  d9c1                 fld st(1)
// 005de413  d9e1                 fabs 
// 005de415  ded9                 fcompp 
// 005de417  dfe0                 fnstsw ax
// 005de419  f6c405               test ah, 5
// 005de41c  7a09                 jp 0x5de427
// 005de41e  ddd8                 fstp st(0)
// 005de420  8bf1                 mov esi, ecx
// 005de422  d942fc               fld dword ptr [edx - 4]
// 005de425  33ff                 xor edi, edi
// 005de427  83fd01               cmp ebp, 1
// 005de42a  741c                 je 0x5de448
// 005de42c  d902                 fld dword ptr [edx]
// 005de42e  d9e1                 fabs 
// 005de430  d9c1                 fld st(1)
// 005de432  d9e1                 fabs 
// 005de434  ded9                 fcompp 
// 005de436  dfe0                 fnstsw ax
// 005de438  f6c405               test ah, 5
// 005de43b  7a0b                 jp 0x5de448
// 005de43d  ddd8                 fstp st(0)
// 005de43f  8bf1                 mov esi, ecx
// 005de441  d902                 fld dword ptr [edx]
// 005de443  bf01000000           mov edi, 1
// 005de448  83fd02               cmp ebp, 2
// 005de44b  741e                 je 0x5de46b
// 005de44d  d94204               fld dword ptr [edx + 4]
// 005de450  d9e1                 fabs 
// 005de452  d9c1                 fld st(1)
// 005de454  d9e1                 fabs 
// 005de456  ded9                 fcompp 
// 005de458  dfe0                 fnstsw ax
// 005de45a  f6c405               test ah, 5
// 005de45d  7a0c                 jp 0x5de46b
// 005de45f  ddd8                 fstp st(0)
// 005de461  8bf1                 mov esi, ecx
// 005de463  d94204               fld dword ptr [edx + 4]
// 005de466  bf02000000           mov edi, 2
// 005de46b  41                   inc ecx
// 005de46c  83c20c               add edx, 0xc
// 005de46f  83f903               cmp ecx, 3
// 005de472  7c8e                 jl 0x5de402
// 005de474  ded9                 fcompp 
// 005de476  dfe0                 fnstsw ax
// 005de478  f6c401               test ah, 1
// 005de47b  7504                 jne 0x5de481
// 005de47d  d9e8                 fld1 
// 005de47f  eb06                 jmp 0x5de487
// 005de481  d905b8c38100         fld dword ptr [0x81c3b8]
// 005de487  56                   push esi
// 005de488  d95c2418             fstp dword ptr [esp + 0x18]
// 005de48c  8d4c2428             lea ecx, [esp + 0x28]
// 005de490  51                   push ecx
// 005de491  8bcb                 mov ecx, ebx
// 005de493  e8a84df3ff           call 0x513240
// 005de498  d94004               fld dword ptr [eax + 4]
// 005de49b  d9442414             fld dword ptr [esp + 0x14]
// 005de49f  b903000000           mov ecx, 3
// 005de4a4  dcc9                 fmul st(1), st(0)
// 005de4a6  2bce                 sub ecx, esi
// 005de4a8  d94008               fld dword ptr [eax + 8]
// 005de4ab  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005de4af  be03000000           mov esi, 3
// 005de4b4  d8c9                 fmul st(1)
// 005de4b6  2bf7                 sub esi, edi
// 005de4b8  d900                 fld dword ptr [eax]
// 005de4ba  2bf5                 sub esi, ebp
// 005de4bc  deca                 fmulp st(2)
// 005de4be  8d144e               lea edx, [esi + ecx*2]
// 005de4c1  d9c9                 fxch st(1)
// 005de4c3  03d1                 add edx, ecx
// 005de4c5  d95c243c             fstp dword ptr [esp + 0x3c]
// 005de4c9  d9c9                 fxch st(1)
// 005de4cb  d95c2440             fstp dword ptr [esp + 0x40]
// 005de4cf  d95c2444             fstp dword ptr [esp + 0x44]
// 005de4d3  d9ee                 fldz 
// 005de4d5  d85c9454             fcomp dword ptr [esp + edx*4 + 0x54]
// 005de4d9  dfe0                 fnstsw ax
// 005de4db  f6c441               test ah, 0x41
// 005de4de  7a04                 jp 0x5de4e4
// 005de4e0  d9e8                 fld1 
// 005de4e2  eb06                 jmp 0x5de4ea
// 005de4e4  d905b8c38100         fld dword ptr [0x81c3b8]
// 005de4ea  51                   push ecx
// 005de4eb  d95c2418             fstp dword ptr [esp + 0x18]
// 005de4ef  8d442428             lea eax, [esp + 0x28]
// 005de4f3  50                   push eax
// 005de4f4  8bcb                 mov ecx, ebx
// 005de4f6  e8454df3ff           call 0x513240
// 005de4fb  d94004               fld dword ptr [eax + 4]
// 005de4fe  d9442414             fld dword ptr [esp + 0x14]
// 005de502  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 005de506  dcc9                 fmul st(1), st(0)
// 005de508  8d4c2430             lea ecx, [esp + 0x30]
// 005de50c  d94008               fld dword ptr [eax + 8]
// 005de50f  51                   push ecx
// 005de510  55                   push ebp
// 005de511  d8c9                 fmul st(1)
// 005de513  8bcb                 mov ecx, ebx
// 005de515  d900                 fld dword ptr [eax]
// 005de517  deca                 fmulp st(2)
// 005de519  d9c9                 fxch st(1)
// 005de51b  d95c2450             fstp dword ptr [esp + 0x50]
// 005de51f  d9c9                 fxch st(1)
// 005de521  d95c2454             fstp dword ptr [esp + 0x54]
// 005de525  d95c2458             fstp dword ptr [esp + 0x58]
// 005de529  e8324df3ff           call 0x513260
// 005de52e  8d54243c             lea edx, [esp + 0x3c]
// 005de532  52                   push edx
// 005de533  57                   push edi
// 005de534  8bcb                 mov ecx, ebx
// 005de536  e8254df3ff           call 0x513260
// 005de53b  8d442448             lea eax, [esp + 0x48]
// 005de53f  50                   push eax
// 005de540  56                   push esi
// 005de541  8bcb                 mov ecx, ebx
// 005de543  e8184df3ff           call 0x513260
// 005de548  5f                   pop edi
// 005de549  5e                   pop esi
// 005de54a  5d                   pop ebp
// 005de54b  8bc3                 mov eax, ebx
// 005de54d  5b                   pop ebx
// 005de54e  83c468               add esp, 0x68
// 005de551  c3                   ret 
// library rbxgs-dll/util\Math.cpp (function ?alignAxesClosest@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/Math.cpp
