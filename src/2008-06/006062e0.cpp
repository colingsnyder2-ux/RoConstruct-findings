// roc 2008-06 006062e0  unit: RBX::Connector  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006062e0
//
// 006062e0  83ec18               sub esp, 0x18
// 006062e3  56                   push esi
// 006062e4  8b742420             mov esi, dword ptr [esp + 0x20]
// 006062e8  57                   push edi
// 006062e9  8bf9                 mov edi, ecx
// 006062eb  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 006062ee  8b470c               mov eax, dword ptr [edi + 0xc]
// 006062f1  d9411c               fld dword ptr [ecx + 0x1c]
// 006062f4  d8601c               fsub dword ptr [eax + 0x1c]
// 006062f7  83c11c               add ecx, 0x1c
// 006062fa  d94104               fld dword ptr [ecx + 4]
// 006062fd  83c01c               add eax, 0x1c
// 00606300  d86004               fsub dword ptr [eax + 4]
// 00606303  51                   push ecx
// 00606304  d94108               fld dword ptr [ecx + 8]
// 00606307  8bce                 mov ecx, esi
// 00606309  d86008               fsub dword ptr [eax + 8]
// 0060630c  d9ca                 fxch st(2)
// 0060630e  d91e                 fstp dword ptr [esi]
// 00606310  d95e04               fstp dword ptr [esi + 4]
// 00606313  d95e08               fstp dword ptr [esi + 8]
// 00606316  d905706e8200         fld dword ptr [0x826e70]
// 0060631c  d91c24               fstp dword ptr [esp]
// 0060631f  e84c21f1ff           call 0x518470
// 00606324  ddd8                 fstp st(0)
// 00606326  8b470c               mov eax, dword ptr [edi + 0xc]
// 00606329  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0060632c  d9411c               fld dword ptr [ecx + 0x1c]
// 0060632f  83c11c               add ecx, 0x1c
// 00606332  d8601c               fsub dword ptr [eax + 0x1c]
// 00606335  d94104               fld dword ptr [ecx + 4]
// 00606338  d86020               fsub dword ptr [eax + 0x20]
// 0060633b  d94108               fld dword ptr [ecx + 8]
// 0060633e  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00606341  d86024               fsub dword ptr [eax + 0x24]
// 00606344  83c11c               add ecx, 0x1c
// 00606347  d901                 fld dword ptr [ecx]
// 00606349  d8601c               fsub dword ptr [eax + 0x1c]
// 0060634c  d94104               fld dword ptr [ecx + 4]
// 0060634f  d86020               fsub dword ptr [eax + 0x20]
// 00606352  d94108               fld dword ptr [ecx + 8]
// 00606355  d86024               fsub dword ptr [eax + 0x24]
// 00606358  d954241c             fst dword ptr [esp + 0x1c]
// 0060635c  d94608               fld dword ptr [esi + 8]
// 0060635f  d8cc                 fmul st(4)
// 00606361  d906                 fld dword ptr [esi]
// 00606363  d8cf                 fmul st(7)
// 00606365  dec1                 faddp st(1)
// 00606367  d9c5                 fld st(5)
// 00606369  d84e04               fmul dword ptr [esi + 4]
// 0060636c  dec1                 faddp st(1)
// 0060636e  d94608               fld dword ptr [esi + 8]
// 00606371  deca                 fmulp st(2)
// 00606373  d906                 fld dword ptr [esi]
// 00606375  d8cc                 fmul st(4)
// 00606377  dec2                 faddp st(2)
// 00606379  d9c2                 fld st(2)
// 0060637b  d84e04               fmul dword ptr [esi + 4]
// 0060637e  dec2                 faddp st(2)
// 00606380  d906                 fld dword ptr [esi]
// 00606382  d8c9                 fmul st(1)
// 00606384  d95c2408             fstp dword ptr [esp + 8]
// 00606388  d9c0                 fld st(0)
// 0060638a  d84e04               fmul dword ptr [esi + 4]
// 0060638d  d95c240c             fstp dword ptr [esp + 0xc]
// 00606391  d84e08               fmul dword ptr [esi + 8]
// 00606394  d9ce                 fxch st(6)
// 00606396  d8642408             fsub dword ptr [esp + 8]
// 0060639a  d9cd                 fxch st(5)
// 0060639c  d864240c             fsub dword ptr [esp + 0xc]
// 006063a0  d9cc                 fxch st(4)
// 006063a2  dee6                 fsubrp st(6)
// 006063a4  d906                 fld dword ptr [esi]
// 006063a6  d8c9                 fmul st(1)
// 006063a8  d9c1                 fld st(1)
// 006063aa  d84e04               fmul dword ptr [esi + 4]
// 006063ad  d95c240c             fstp dword ptr [esp + 0xc]
// 006063b1  d94608               fld dword ptr [esi + 8]
// 006063b4  deca                 fmulp st(2)
// 006063b6  deeb                 fsubp st(3)
// 006063b8  d9c9                 fxch st(1)
// 006063ba  d864240c             fsub dword ptr [esp + 0xc]
// 006063be  d944241c             fld dword ptr [esp + 0x1c]
// 006063c2  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006063c5  dee2                 fsubrp st(2)
// 006063c7  894c2424             mov dword ptr [esp + 0x24], ecx
// 006063cb  d9c9                 fxch st(1)
// 006063cd  d9542410             fst dword ptr [esp + 0x10]
// 006063d1  d9c0                 fld st(0)
// 006063d3  d8cc                 fmul st(4)
// 006063d5  d9c2                 fld st(2)
// 006063d7  d8cf                 fmul st(7)
// 006063d9  dee9                 fsubp st(1)
// 006063db  d9c6                 fld st(6)
// 006063dd  d8cc                 fmul st(4)
// 006063df  d9ca                 fxch st(2)
// 006063e1  d8ce                 fmul st(6)
// 006063e3  deea                 fsubp st(2)
// 006063e5  d9c9                 fxch st(1)
// 006063e7  d95c2418             fstp dword ptr [esp + 0x18]
// 006063eb  d9c1                 fld st(1)
// 006063ed  d8cd                 fmul st(5)
// 006063ef  d9c4                 fld st(4)
// 006063f1  d8cc                 fmul st(4)
// 006063f3  dee9                 fsubp st(1)
// 006063f5  d84e08               fmul dword ptr [esi + 8]
// 006063f8  d906                 fld dword ptr [esi]
// 006063fa  deca                 fmulp st(2)
// 006063fc  dec1                 faddp st(1)
// 006063fe  d9442418             fld dword ptr [esp + 0x18]
// 00606402  d84e04               fmul dword ptr [esi + 4]
// 00606405  dec1                 faddp st(1)
// 00606407  d9442410             fld dword ptr [esp + 0x10]
// 0060640b  dece                 fmulp st(6)
// 0060640d  d9c9                 fxch st(1)
// 0060640f  decb                 fmulp st(3)
// 00606411  d9cc                 fxch st(4)
// 00606413  dec2                 faddp st(2)
// 00606415  deca                 fmulp st(2)
// 00606417  dec1                 faddp st(1)
// 00606419  d9f3                 fpatan 
// 0060641b  d9471c               fld dword ptr [edi + 0x1c]
// 0060641e  dd0530888200         fld qword ptr [0x828830]
// 00606424  d8d1                 fcom st(1)
// 00606426  dfe0                 fnstsw ax
// 00606428  ddd9                 fstp st(1)
// 0060642a  f6c405               test ah, 5
// 0060642d  7a15                 jp 0x606444
// 0060642f  ddd8                 fstp st(0)
// 00606431  dc1538888200         fcom qword ptr [0x828838]
// 00606437  dfe0                 fnstsw ax
// 00606439  f6c405               test ah, 5
// 0060643c  7a27                 jp 0x606465
// 0060643e  41                   inc ecx
// 0060643f  894f20               mov dword ptr [edi + 0x20], ecx
// 00606442  eb21                 jmp 0x606465
// 00606444  d9471c               fld dword ptr [edi + 0x1c]
// 00606447  dc1d38888200         fcomp qword ptr [0x828838]
// 0060644d  dfe0                 fnstsw ax
// 0060644f  f6c405               test ah, 5
// 00606452  7a0f                 jp 0x606463
// 00606454  d8d9                 fcomp st(1)
// 00606456  dfe0                 fnstsw ax
// 00606458  f6c405               test ah, 5
// 0060645b  7a08                 jp 0x606465
// 0060645d  49                   dec ecx
// 0060645e  894f20               mov dword ptr [edi + 0x20], ecx
// 00606461  eb02                 jmp 0x606465
// 00606463  ddd8                 fstp st(0)
// 00606465  db4720               fild dword ptr [edi + 0x20]
// 00606468  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060646c  d905b4b38200         fld dword ptr [0x82b3b4]
// 00606472  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00606476  dcc9                 fmul st(1), st(0)
// 00606478  d9c9                 fxch st(1)
// 0060647a  d8c2                 fadd st(2)
// 0060647c  d910                 fst dword ptr [eax]
// 0060647e  db442424             fild dword ptr [esp + 0x24]
// 00606482  deca                 fmulp st(2)
// 00606484  d9c9                 fxch st(1)
// 00606486  d8471c               fadd dword ptr [edi + 0x1c]
// 00606489  dee9                 fsubp st(1)
// 0060648b  d919                 fstp dword ptr [ecx]
// 0060648d  d95f1c               fstp dword ptr [edi + 0x1c]
// 00606490  5f                   pop edi
// 00606491  5e                   pop esi
// 00606492  83c418               add esp, 0x18
// 00606495  c20c00               ret 0xc
// library rbxgs-dll/v8kernel\Connector.cpp (function ?computeParams@RotateConnector@RBX@@AAEXAAVVector3@G3D@@AAM1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8kernel/Connector.cpp
