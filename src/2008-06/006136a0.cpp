// roc 2008-06 006136a0  unit: seg_00610000  size: 791 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006136a0
//
// 006136a0  83ec50               sub esp, 0x50
// 006136a3  8b4104               mov eax, dword ptr [ecx + 4]
// 006136a6  53                   push ebx
// 006136a7  56                   push esi
// 006136a8  57                   push edi
// 006136a9  8b790c               mov edi, dword ptr [ecx + 0xc]
// 006136ac  d9879c000000         fld dword ptr [edi + 0x9c]
// 006136b2  81c794000000         add edi, 0x94
// 006136b8  d84808               fmul dword ptr [eax + 8]
// 006136bb  8b7110               mov esi, dword ptr [ecx + 0x10]
// 006136be  d94704               fld dword ptr [edi + 4]
// 006136c1  81c694000000         add esi, 0x94
// 006136c7  d84804               fmul dword ptr [eax + 4]
// 006136ca  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 006136cd  dec1                 faddp st(1)
// 006136cf  d900                 fld dword ptr [eax]
// 006136d1  d80f                 fmul dword ptr [edi]
// 006136d3  dec1                 faddp st(1)
// 006136d5  d84724               fadd dword ptr [edi + 0x24]
// 006136d8  d9542414             fst dword ptr [esp + 0x14]
// 006136dc  d94714               fld dword ptr [edi + 0x14]
// 006136df  d84808               fmul dword ptr [eax + 8]
// 006136e2  d9470c               fld dword ptr [edi + 0xc]
// 006136e5  d808                 fmul dword ptr [eax]
// 006136e7  dec1                 faddp st(1)
// 006136e9  d94710               fld dword ptr [edi + 0x10]
// 006136ec  d84804               fmul dword ptr [eax + 4]
// 006136ef  dec1                 faddp st(1)
// 006136f1  d84728               fadd dword ptr [edi + 0x28]
// 006136f4  d9542418             fst dword ptr [esp + 0x18]
// 006136f8  d94720               fld dword ptr [edi + 0x20]
// 006136fb  d84808               fmul dword ptr [eax + 8]
// 006136fe  d94718               fld dword ptr [edi + 0x18]
// 00613701  d808                 fmul dword ptr [eax]
// 00613703  dec1                 faddp st(1)
// 00613705  d9471c               fld dword ptr [edi + 0x1c]
// 00613708  d84804               fmul dword ptr [eax + 4]
// 0061370b  8b4108               mov eax, dword ptr [ecx + 8]
// 0061370e  dec1                 faddp st(1)
// 00613710  d8472c               fadd dword ptr [edi + 0x2c]
// 00613713  d95c241c             fstp dword ptr [esp + 0x1c]
// 00613717  d94608               fld dword ptr [esi + 8]
// 0061371a  d84808               fmul dword ptr [eax + 8]
// 0061371d  d94604               fld dword ptr [esi + 4]
// 00613720  d84804               fmul dword ptr [eax + 4]
// 00613723  dec1                 faddp st(1)
// 00613725  d906                 fld dword ptr [esi]
// 00613727  d808                 fmul dword ptr [eax]
// 00613729  dec1                 faddp st(1)
// 0061372b  d84624               fadd dword ptr [esi + 0x24]
// 0061372e  d95c2420             fstp dword ptr [esp + 0x20]
// 00613732  d94614               fld dword ptr [esi + 0x14]
// 00613735  d84808               fmul dword ptr [eax + 8]
// 00613738  d94610               fld dword ptr [esi + 0x10]
// 0061373b  d84804               fmul dword ptr [eax + 4]
// 0061373e  dec1                 faddp st(1)
// 00613740  d9460c               fld dword ptr [esi + 0xc]
// 00613743  d808                 fmul dword ptr [eax]
// 00613745  dec1                 faddp st(1)
// 00613747  d84628               fadd dword ptr [esi + 0x28]
// 0061374a  d95c2424             fstp dword ptr [esp + 0x24]
// 0061374e  d94620               fld dword ptr [esi + 0x20]
// 00613751  d84808               fmul dword ptr [eax + 8]
// 00613754  d9461c               fld dword ptr [esi + 0x1c]
// 00613757  d84804               fmul dword ptr [eax + 4]
// 0061375a  dec1                 faddp st(1)
// 0061375c  d94618               fld dword ptr [esi + 0x18]
// 0061375f  d808                 fmul dword ptr [eax]
// 00613761  b856555555           mov eax, 0x55555556
// 00613766  f7eb                 imul ebx
// 00613768  dec1                 faddp st(1)
// 0061376a  d8462c               fadd dword ptr [esi + 0x2c]
// 0061376d  8bc2                 mov eax, edx
// 0061376f  d95c2428             fstp dword ptr [esp + 0x28]
// 00613773  c1e81f               shr eax, 0x1f
// 00613776  03c2                 add eax, edx
// 00613778  8d1440               lea edx, [eax + eax*2]
// 0061377b  2bda                 sub ebx, edx
// 0061377d  03c0                 add eax, eax
// 0061377f  d9049f               fld dword ptr [edi + ebx*4]
// 00613782  d9449f0c             fld dword ptr [edi + ebx*4 + 0xc]
// 00613786  d9449f18             fld dword ptr [edi + ebx*4 + 0x18]
// 0061378a  8b791c               mov edi, dword ptr [ecx + 0x1c]
// 0061378d  ba01000000           mov edx, 1
// 00613792  2bd0                 sub edx, eax
// 00613794  8954240c             mov dword ptr [esp + 0xc], edx
// 00613798  db44240c             fild dword ptr [esp + 0xc]
// 0061379c  b856555555           mov eax, 0x55555556
// 006137a1  f7ef                 imul edi
// 006137a3  d9c0                 fld st(0)
// 006137a5  decc                 fmulp st(4)
// 006137a7  dcca                 fmul st(2), st(0)
// 006137a9  dec9                 fmulp st(1)
// 006137ab  8bc2                 mov eax, edx
// 006137ad  c1e81f               shr eax, 0x1f
// 006137b0  03c2                 add eax, edx
// 006137b2  8d1440               lea edx, [eax + eax*2]
// 006137b5  2bfa                 sub edi, edx
// 006137b7  03c0                 add eax, eax
// 006137b9  ba01000000           mov edx, 1
// 006137be  d904be               fld dword ptr [esi + edi*4]
// 006137c1  2bd0                 sub edx, eax
// 006137c3  d944be0c             fld dword ptr [esi + edi*4 + 0xc]
// 006137c7  8954240c             mov dword ptr [esp + 0xc], edx
// 006137cb  d95c2430             fstp dword ptr [esp + 0x30]
// 006137cf  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006137d2  d944be18             fld dword ptr [esi + edi*4 + 0x18]
// 006137d6  b856555555           mov eax, 0x55555556
// 006137db  d95c2434             fstp dword ptr [esp + 0x34]
// 006137df  f7e9                 imul ecx
// 006137e1  db44240c             fild dword ptr [esp + 0xc]
// 006137e5  d9c0                 fld st(0)
// 006137e7  deca                 fmulp st(2)
// 006137e9  d9442430             fld dword ptr [esp + 0x30]
// 006137ed  d8c9                 fmul st(1)
// 006137ef  d95c243c             fstp dword ptr [esp + 0x3c]
// 006137f3  8bc2                 mov eax, edx
// 006137f5  c1e81f               shr eax, 0x1f
// 006137f8  d84c2434             fmul dword ptr [esp + 0x34]
// 006137fc  03c2                 add eax, edx
// 006137fe  8d1440               lea edx, [eax + eax*2]
// 00613801  2bca                 sub ecx, edx
// 00613803  d9542440             fst dword ptr [esp + 0x40]
// 00613807  03c0                 add eax, eax
// 00613809  d9442420             fld dword ptr [esp + 0x20]
// 0061380d  dee7                 fsubrp st(7)
// 0061380f  d9ce                 fxch st(6)
// 00613811  d95c242c             fstp dword ptr [esp + 0x2c]
// 00613815  d9442424             fld dword ptr [esp + 0x24]
// 00613819  dee5                 fsubrp st(5)
// 0061381b  d9cc                 fxch st(4)
// 0061381d  d95c2430             fstp dword ptr [esp + 0x30]
// 00613821  d9442428             fld dword ptr [esp + 0x28]
// 00613825  d864241c             fsub dword ptr [esp + 0x1c]
// 00613829  d95c2434             fstp dword ptr [esp + 0x34]
// 0061382d  dccc                 fmul st(4), st(0)
// 0061382f  d944243c             fld dword ptr [esp + 0x3c]
// 00613833  d8ca                 fmul st(2)
// 00613835  dec5                 faddp st(5)
// 00613837  d9c3                 fld st(3)
// 00613839  d8cb                 fmul st(3)
// 0061383b  dec5                 faddp st(5)
// 0061383d  d9c4                 fld st(4)
// 0061383f  d8cd                 fmul st(5)
// 00613841  d9e8                 fld1 
// 00613843  dee1                 fsubrp st(1)
// 00613845  d95c240c             fstp dword ptr [esp + 0xc]
// 00613849  d9048e               fld dword ptr [esi + ecx*4]
// 0061384c  d9448e0c             fld dword ptr [esi + ecx*4 + 0xc]
// 00613850  d95c2448             fstp dword ptr [esp + 0x48]
// 00613854  d9448e18             fld dword ptr [esi + ecx*4 + 0x18]
// 00613858  b901000000           mov ecx, 1
// 0061385d  d95c244c             fstp dword ptr [esp + 0x4c]
// 00613861  2bc8                 sub ecx, eax
// 00613863  894c2410             mov dword ptr [esp + 0x10], ecx
// 00613867  db442410             fild dword ptr [esp + 0x10]
// 0061386b  d9c0                 fld st(0)
// 0061386d  deca                 fmulp st(2)
// 0061386f  d9442448             fld dword ptr [esp + 0x48]
// 00613873  d8c9                 fmul st(1)
// 00613875  d95c2454             fstp dword ptr [esp + 0x54]
// 00613879  d84c244c             fmul dword ptr [esp + 0x4c]
// 0061387d  d9c9                 fxch st(1)
// 0061387f  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00613883  d9e0                 fchs 
// 00613885  d9442454             fld dword ptr [esp + 0x54]
// 00613889  5f                   pop edi
// 0061388a  d9e0                 fchs 
// 0061388c  5e                   pop esi
// 0061388d  d9ca                 fxch st(2)
// 0061388f  5b                   pop ebx
// 00613890  d9e0                 fchs 
// 00613892  d9c9                 fxch st(1)
// 00613894  d919                 fstp dword ptr [ecx]
// 00613896  d9c9                 fxch st(1)
// 00613898  d95904               fstp dword ptr [ecx + 4]
// 0061389b  d95908               fstp dword ptr [ecx + 8]
// 0061389e  d90424               fld dword ptr [esp]
// 006138a1  dc1d808f8200         fcomp qword ptr [0x828f80]
// 006138a7  dfe0                 fnstsw ax
// 006138a9  f6c441               test ah, 0x41
// 006138ac  0f85db000000         jne 0x61398d
// 006138b2  d9442428             fld dword ptr [esp + 0x28]
// 006138b6  d84c2434             fmul dword ptr [esp + 0x34]
// 006138ba  d9442424             fld dword ptr [esp + 0x24]
// 006138be  d84c2430             fmul dword ptr [esp + 0x30]
// 006138c2  dec1                 faddp st(1)
// 006138c4  d9442420             fld dword ptr [esp + 0x20]
// 006138c8  dccd                 fmul st(5), st(0)
// 006138ca  d9c9                 fxch st(1)
// 006138cc  dec5                 faddp st(5)
// 006138ce  d9cc                 fxch st(4)
// 006138d0  d9e0                 fchs 
// 006138d2  decd                 fmulp st(5)
// 006138d4  d9442428             fld dword ptr [esp + 0x28]
// 006138d8  d8c9                 fmul st(1)
// 006138da  d9442424             fld dword ptr [esp + 0x24]
// 006138de  d8cb                 fmul st(3)
// 006138e0  dec1                 faddp st(1)
// 006138e2  d9cc                 fxch st(4)
// 006138e4  d8cb                 fmul st(3)
// 006138e6  dec4                 faddp st(4)
// 006138e8  d9cc                 fxch st(4)
// 006138ea  dec3                 faddp st(3)
// 006138ec  d9ca                 fxch st(2)
// 006138ee  d83424               fdiv dword ptr [esp]
// 006138f1  d9c0                 fld st(0)
// 006138f3  d9e1                 fabs 
// 006138f5  d905746e8200         fld dword ptr [0x826e74]
// 006138fb  d8d1                 fcom st(1)
// 006138fd  dfe0                 fnstsw ax
// 006138ff  ddd9                 fstp st(1)
// 00613901  f6c405               test ah, 5
// 00613904  7a32                 jp 0x613938
// 00613906  d9ee                 fldz 
// 00613908  d8d2                 fcom st(2)
// 0061390a  dfe0                 fnstsw ax
// 0061390c  f6c405               test ah, 5
// 0061390f  7a0a                 jp 0x61391b
// 00613911  ddda                 fstp st(2)
// 00613913  ddd9                 fstp st(1)
// 00613915  d9e8                 fld1 
// 00613917  dec9                 fmulp st(1)
// 00613919  eb1f                 jmp 0x61393a
// 0061391b  d8d2                 fcom st(2)
// 0061391d  dfe0                 fnstsw ax
// 0061391f  ddda                 fstp st(2)
// 00613921  f6c441               test ah, 0x41
// 00613924  750c                 jne 0x613932
// 00613926  ddd9                 fstp st(1)
// 00613928  d905b8c38100         fld dword ptr [0x81c3b8]
// 0061392e  dec9                 fmulp st(1)
// 00613930  eb08                 jmp 0x61393a
// 00613932  d9c9                 fxch st(1)
// 00613934  dec9                 fmulp st(1)
// 00613936  eb02                 jmp 0x61393a
// 00613938  ddd8                 fstp st(0)
// 0061393a  dcc9                 fmul st(1), st(0)
// 0061393c  dcca                 fmul st(2), st(0)
// 0061393e  decb                 fmulp st(3)
// 00613940  d8442408             fadd dword ptr [esp + 8]
// 00613944  d9c9                 fxch st(1)
// 00613946  d844240c             fadd dword ptr [esp + 0xc]
// 0061394a  d9ca                 fxch st(2)
// 0061394c  d8442410             fadd dword ptr [esp + 0x10]
// 00613950  d9c9                 fxch st(1)
// 00613952  d95910               fstp dword ptr [ecx + 0x10]
// 00613955  d9c9                 fxch st(1)
// 00613957  d95914               fstp dword ptr [ecx + 0x14]
// 0061395a  d95918               fstp dword ptr [ecx + 0x18]
// 0061395d  d9442414             fld dword ptr [esp + 0x14]
// 00613961  d86110               fsub dword ptr [ecx + 0x10]
// 00613964  d9442418             fld dword ptr [esp + 0x18]
// 00613968  d86114               fsub dword ptr [ecx + 0x14]
// 0061396b  d944241c             fld dword ptr [esp + 0x1c]
// 0061396f  d86118               fsub dword ptr [ecx + 0x18]
// 00613972  d9ca                 fxch st(2)
// 00613974  d809                 fmul dword ptr [ecx]
// 00613976  d9c9                 fxch st(1)
// 00613978  d84904               fmul dword ptr [ecx + 4]
// 0061397b  dec1                 faddp st(1)
// 0061397d  d94108               fld dword ptr [ecx + 8]
// 00613980  deca                 fmulp st(2)
// 00613982  dec1                 faddp st(1)
// 00613984  d9590c               fstp dword ptr [ecx + 0xc]
// 00613987  83c450               add esp, 0x50
// 0061398a  c20400               ret 4
// 0061398d  dddc                 fstp st(4)
// 0061398f  ddd9                 fstp st(1)
// 00613991  ddd8                 fstp st(0)
// 00613993  ddd9                 fstp st(1)
// 00613995  ddd8                 fstp st(0)
// 00613997  d9442408             fld dword ptr [esp + 8]
// 0061399b  d95910               fstp dword ptr [ecx + 0x10]
// 0061399e  d944240c             fld dword ptr [esp + 0xc]
// 006139a2  d95914               fstp dword ptr [ecx + 0x14]
// 006139a5  d9442410             fld dword ptr [esp + 0x10]
// 006139a9  d95918               fstp dword ptr [ecx + 0x18]
// 006139ac  d9ee                 fldz 
// 006139ae  d9590c               fstp dword ptr [ecx + 0xc]
// 006139b1  83c450               add esp, 0x50
// 006139b4  c20400               ret 4
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?computeEdgeEdgePlane@GeoPair@RBX@@AAEXAAVPairParams@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
