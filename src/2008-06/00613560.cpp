// roc 2008-06 00613560  unit: seg_00610000  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00613560
//
// 00613560  8b5104               mov edx, dword ptr [ecx + 4]
// 00613563  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00613566  d9809c000000         fld dword ptr [eax + 0x9c]
// 0061356c  0594000000           add eax, 0x94
// 00613571  d84a08               fmul dword ptr [edx + 8]
// 00613574  56                   push esi
// 00613575  d94004               fld dword ptr [eax + 4]
// 00613578  57                   push edi
// 00613579  d84a04               fmul dword ptr [edx + 4]
// 0061357c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00613580  dec1                 faddp st(1)
// 00613582  d902                 fld dword ptr [edx]
// 00613584  d808                 fmul dword ptr [eax]
// 00613586  dec1                 faddp st(1)
// 00613588  d84024               fadd dword ptr [eax + 0x24]
// 0061358b  d9400c               fld dword ptr [eax + 0xc]
// 0061358e  d80a                 fmul dword ptr [edx]
// 00613590  d94014               fld dword ptr [eax + 0x14]
// 00613593  d84a08               fmul dword ptr [edx + 8]
// 00613596  dec1                 faddp st(1)
// 00613598  d94010               fld dword ptr [eax + 0x10]
// 0061359b  d84a04               fmul dword ptr [edx + 4]
// 0061359e  dec1                 faddp st(1)
// 006135a0  d84028               fadd dword ptr [eax + 0x28]
// 006135a3  d94018               fld dword ptr [eax + 0x18]
// 006135a6  d80a                 fmul dword ptr [edx]
// 006135a8  d94020               fld dword ptr [eax + 0x20]
// 006135ab  d84a08               fmul dword ptr [edx + 8]
// 006135ae  dec1                 faddp st(1)
// 006135b0  d9401c               fld dword ptr [eax + 0x1c]
// 006135b3  d84a04               fmul dword ptr [edx + 4]
// 006135b6  dec1                 faddp st(1)
// 006135b8  d8402c               fadd dword ptr [eax + 0x2c]
// 006135bb  d9ca                 fxch st(2)
// 006135bd  d95f10               fstp dword ptr [edi + 0x10]
// 006135c0  d95f14               fstp dword ptr [edi + 0x14]
// 006135c3  d95f18               fstp dword ptr [edi + 0x18]
// 006135c6  8b4108               mov eax, dword ptr [ecx + 8]
// 006135c9  8b7110               mov esi, dword ptr [ecx + 0x10]
// 006135cc  d9869c000000         fld dword ptr [esi + 0x9c]
// 006135d2  81c694000000         add esi, 0x94
// 006135d8  d84808               fmul dword ptr [eax + 8]
// 006135db  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 006135de  d94604               fld dword ptr [esi + 4]
// 006135e1  d84804               fmul dword ptr [eax + 4]
// 006135e4  dec1                 faddp st(1)
// 006135e6  d900                 fld dword ptr [eax]
// 006135e8  d80e                 fmul dword ptr [esi]
// 006135ea  dec1                 faddp st(1)
// 006135ec  d84624               fadd dword ptr [esi + 0x24]
// 006135ef  d94614               fld dword ptr [esi + 0x14]
// 006135f2  d84808               fmul dword ptr [eax + 8]
// 006135f5  d9460c               fld dword ptr [esi + 0xc]
// 006135f8  d808                 fmul dword ptr [eax]
// 006135fa  dec1                 faddp st(1)
// 006135fc  d94610               fld dword ptr [esi + 0x10]
// 006135ff  d84804               fmul dword ptr [eax + 4]
// 00613602  dec1                 faddp st(1)
// 00613604  d84628               fadd dword ptr [esi + 0x28]
// 00613607  d94620               fld dword ptr [esi + 0x20]
// 0061360a  d84808               fmul dword ptr [eax + 8]
// 0061360d  d94618               fld dword ptr [esi + 0x18]
// 00613610  d808                 fmul dword ptr [eax]
// 00613612  dec1                 faddp st(1)
// 00613614  d9461c               fld dword ptr [esi + 0x1c]
// 00613617  d84804               fmul dword ptr [eax + 4]
// 0061361a  b856555555           mov eax, 0x55555556
// 0061361f  f7e9                 imul ecx
// 00613621  dec1                 faddp st(1)
// 00613623  d8462c               fadd dword ptr [esi + 0x2c]
// 00613626  8bc2                 mov eax, edx
// 00613628  c1e81f               shr eax, 0x1f
// 0061362b  03c2                 add eax, edx
// 0061362d  8d1440               lea edx, [eax + eax*2]
// 00613630  2bca                 sub ecx, edx
// 00613632  03c0                 add eax, eax
// 00613634  d9048e               fld dword ptr [esi + ecx*4]
// 00613637  d9448e0c             fld dword ptr [esi + ecx*4 + 0xc]
// 0061363b  d9448e18             fld dword ptr [esi + ecx*4 + 0x18]
// 0061363f  b901000000           mov ecx, 1
// 00613644  2bc8                 sub ecx, eax
// 00613646  894c240c             mov dword ptr [esp + 0xc], ecx
// 0061364a  db44240c             fild dword ptr [esp + 0xc]
// 0061364e  d9c0                 fld st(0)
// 00613650  decc                 fmulp st(4)
// 00613652  dcca                 fmul st(2), st(0)
// 00613654  dec9                 fmulp st(1)
// 00613656  d9ca                 fxch st(2)
// 00613658  d9e0                 fchs 
// 0061365a  d9c9                 fxch st(1)
// 0061365c  d9e0                 fchs 
// 0061365e  d9ca                 fxch st(2)
// 00613660  d9e0                 fchs 
// 00613662  d9c9                 fxch st(1)
// 00613664  d917                 fst dword ptr [edi]
// 00613666  d9ca                 fxch st(2)
// 00613668  d95704               fst dword ptr [edi + 4]
// 0061366b  d9c9                 fxch st(1)
// 0061366d  d95708               fst dword ptr [edi + 8]
// 00613670  d9cd                 fxch st(5)
// 00613672  d86710               fsub dword ptr [edi + 0x10]
// 00613675  d9cc                 fxch st(4)
// 00613677  d86714               fsub dword ptr [edi + 0x14]
// 0061367a  d9cb                 fxch st(3)
// 0061367c  d86718               fsub dword ptr [edi + 0x18]
// 0061367f  decd                 fmulp st(5)
// 00613681  deca                 fmulp st(2)
// 00613683  d9cb                 fxch st(3)
// 00613685  dec1                 faddp st(1)
// 00613687  d9c9                 fxch st(1)
// 00613689  deca                 fmulp st(2)
// 0061368b  dec1                 faddp st(1)
// 0061368d  d95f0c               fstp dword ptr [edi + 0xc]
// 00613690  5f                   pop edi
// 00613691  5e                   pop esi
// 00613692  c20400               ret 4
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?computePointPlane@GeoPair@RBX@@AAEXAAVPairParams@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
