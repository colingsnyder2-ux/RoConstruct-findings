// roc 2008-06 006139c0  unit: seg_00610000  size: 741 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006139c0
//
// 006139c0  83ec38               sub esp, 0x38
// 006139c3  8b4104               mov eax, dword ptr [ecx + 4]
// 006139c6  53                   push ebx
// 006139c7  56                   push esi
// 006139c8  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006139cb  d9869c000000         fld dword ptr [esi + 0x9c]
// 006139d1  81c694000000         add esi, 0x94
// 006139d7  d84808               fmul dword ptr [eax + 8]
// 006139da  57                   push edi
// 006139db  d94604               fld dword ptr [esi + 4]
// 006139de  8b7910               mov edi, dword ptr [ecx + 0x10]
// 006139e1  d84804               fmul dword ptr [eax + 4]
// 006139e4  81c794000000         add edi, 0x94
// 006139ea  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 006139ed  dec1                 faddp st(1)
// 006139ef  d906                 fld dword ptr [esi]
// 006139f1  d808                 fmul dword ptr [eax]
// 006139f3  dec1                 faddp st(1)
// 006139f5  d84624               fadd dword ptr [esi + 0x24]
// 006139f8  d9542414             fst dword ptr [esp + 0x14]
// 006139fc  d94614               fld dword ptr [esi + 0x14]
// 006139ff  d84808               fmul dword ptr [eax + 8]
// 00613a02  d94610               fld dword ptr [esi + 0x10]
// 00613a05  d84804               fmul dword ptr [eax + 4]
// 00613a08  dec1                 faddp st(1)
// 00613a0a  d9460c               fld dword ptr [esi + 0xc]
// 00613a0d  d808                 fmul dword ptr [eax]
// 00613a0f  dec1                 faddp st(1)
// 00613a11  d84628               fadd dword ptr [esi + 0x28]
// 00613a14  d95c2418             fstp dword ptr [esp + 0x18]
// 00613a18  d94620               fld dword ptr [esi + 0x20]
// 00613a1b  d84808               fmul dword ptr [eax + 8]
// 00613a1e  d9461c               fld dword ptr [esi + 0x1c]
// 00613a21  d84804               fmul dword ptr [eax + 4]
// 00613a24  dec1                 faddp st(1)
// 00613a26  d94618               fld dword ptr [esi + 0x18]
// 00613a29  d808                 fmul dword ptr [eax]
// 00613a2b  8b4108               mov eax, dword ptr [ecx + 8]
// 00613a2e  dec1                 faddp st(1)
// 00613a30  d8462c               fadd dword ptr [esi + 0x2c]
// 00613a33  d95c241c             fstp dword ptr [esp + 0x1c]
// 00613a37  d94708               fld dword ptr [edi + 8]
// 00613a3a  d84808               fmul dword ptr [eax + 8]
// 00613a3d  d94704               fld dword ptr [edi + 4]
// 00613a40  d84804               fmul dword ptr [eax + 4]
// 00613a43  dec1                 faddp st(1)
// 00613a45  d900                 fld dword ptr [eax]
// 00613a47  d80f                 fmul dword ptr [edi]
// 00613a49  dec1                 faddp st(1)
// 00613a4b  d84724               fadd dword ptr [edi + 0x24]
// 00613a4e  d95c2420             fstp dword ptr [esp + 0x20]
// 00613a52  d9470c               fld dword ptr [edi + 0xc]
// 00613a55  d808                 fmul dword ptr [eax]
// 00613a57  d94714               fld dword ptr [edi + 0x14]
// 00613a5a  d84808               fmul dword ptr [eax + 8]
// 00613a5d  dec1                 faddp st(1)
// 00613a5f  d94710               fld dword ptr [edi + 0x10]
// 00613a62  d84804               fmul dword ptr [eax + 4]
// 00613a65  dec1                 faddp st(1)
// 00613a67  d84728               fadd dword ptr [edi + 0x28]
// 00613a6a  d95c2424             fstp dword ptr [esp + 0x24]
// 00613a6e  d94718               fld dword ptr [edi + 0x18]
// 00613a71  d808                 fmul dword ptr [eax]
// 00613a73  d94720               fld dword ptr [edi + 0x20]
// 00613a76  d84808               fmul dword ptr [eax + 8]
// 00613a79  dec1                 faddp st(1)
// 00613a7b  d9471c               fld dword ptr [edi + 0x1c]
// 00613a7e  d84804               fmul dword ptr [eax + 4]
// 00613a81  b856555555           mov eax, 0x55555556
// 00613a86  f7eb                 imul ebx
// 00613a88  dec1                 faddp st(1)
// 00613a8a  d8472c               fadd dword ptr [edi + 0x2c]
// 00613a8d  8bc2                 mov eax, edx
// 00613a8f  d95c2428             fstp dword ptr [esp + 0x28]
// 00613a93  c1e81f               shr eax, 0x1f
// 00613a96  03c2                 add eax, edx
// 00613a98  8d1440               lea edx, [eax + eax*2]
// 00613a9b  2bda                 sub ebx, edx
// 00613a9d  03c0                 add eax, eax
// 00613a9f  d9049e               fld dword ptr [esi + ebx*4]
// 00613aa2  d9449e0c             fld dword ptr [esi + ebx*4 + 0xc]
// 00613aa6  d9449e18             fld dword ptr [esi + ebx*4 + 0x18]
// 00613aaa  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00613aad  ba01000000           mov edx, 1
// 00613ab2  2bd0                 sub edx, eax
// 00613ab4  8954240c             mov dword ptr [esp + 0xc], edx
// 00613ab8  db44240c             fild dword ptr [esp + 0xc]
// 00613abc  b856555555           mov eax, 0x55555556
// 00613ac1  f7e9                 imul ecx
// 00613ac3  d9c0                 fld st(0)
// 00613ac5  decc                 fmulp st(4)
// 00613ac7  dcca                 fmul st(2), st(0)
// 00613ac9  dec9                 fmulp st(1)
// 00613acb  8bc2                 mov eax, edx
// 00613acd  c1e81f               shr eax, 0x1f
// 00613ad0  03c2                 add eax, edx
// 00613ad2  8d1440               lea edx, [eax + eax*2]
// 00613ad5  2bca                 sub ecx, edx
// 00613ad7  03c0                 add eax, eax
// 00613ad9  d9048f               fld dword ptr [edi + ecx*4]
// 00613adc  d9448f0c             fld dword ptr [edi + ecx*4 + 0xc]
// 00613ae0  d9448f18             fld dword ptr [edi + ecx*4 + 0x18]
// 00613ae4  b901000000           mov ecx, 1
// 00613ae9  d95c2434             fstp dword ptr [esp + 0x34]
// 00613aed  2bc8                 sub ecx, eax
// 00613aef  894c240c             mov dword ptr [esp + 0xc], ecx
// 00613af3  db44240c             fild dword ptr [esp + 0xc]
// 00613af7  d9c0                 fld st(0)
// 00613af9  decb                 fmulp st(3)
// 00613afb  dcc9                 fmul st(1), st(0)
// 00613afd  d9c9                 fxch st(1)
// 00613aff  d954243c             fst dword ptr [esp + 0x3c]
// 00613b03  d9442434             fld dword ptr [esp + 0x34]
// 00613b07  deca                 fmulp st(2)
// 00613b09  d9c9                 fxch st(1)
// 00613b0b  d9542440             fst dword ptr [esp + 0x40]
// 00613b0f  d9442420             fld dword ptr [esp + 0x20]
// 00613b13  dee7                 fsubrp st(7)
// 00613b15  d9ce                 fxch st(6)
// 00613b17  d95c242c             fstp dword ptr [esp + 0x2c]
// 00613b1b  d9442424             fld dword ptr [esp + 0x24]
// 00613b1f  d8642418             fsub dword ptr [esp + 0x18]
// 00613b23  d95c2430             fstp dword ptr [esp + 0x30]
// 00613b27  d9442428             fld dword ptr [esp + 0x28]
// 00613b2b  d864241c             fsub dword ptr [esp + 0x1c]
// 00613b2f  d9542434             fst dword ptr [esp + 0x34]
// 00613b33  d9ce                 fxch st(6)
// 00613b35  d8cb                 fmul st(3)
// 00613b37  d9c1                 fld st(1)
// 00613b39  d8cd                 fmul st(5)
// 00613b3b  dec1                 faddp st(1)
// 00613b3d  d9c2                 fld st(2)
// 00613b3f  d8ce                 fmul st(6)
// 00613b41  dec1                 faddp st(1)
// 00613b43  d9ce                 fxch st(6)
// 00613b45  d8cb                 fmul st(3)
// 00613b47  d9442430             fld dword ptr [esp + 0x30]
// 00613b4b  d8cd                 fmul st(5)
// 00613b4d  dec1                 faddp st(1)
// 00613b4f  d944242c             fld dword ptr [esp + 0x2c]
// 00613b53  d8ce                 fmul st(6)
// 00613b55  dec1                 faddp st(1)
// 00613b57  d95c2410             fstp dword ptr [esp + 0x10]
// 00613b5b  d9442434             fld dword ptr [esp + 0x34]
// 00613b5f  d84c2440             fmul dword ptr [esp + 0x40]
// 00613b63  d9442430             fld dword ptr [esp + 0x30]
// 00613b67  deca                 fmulp st(2)
// 00613b69  dec1                 faddp st(1)
// 00613b6b  d9c1                 fld st(1)
// 00613b6d  d84c242c             fmul dword ptr [esp + 0x2c]
// 00613b71  dec1                 faddp st(1)
// 00613b73  d9e0                 fchs 
// 00613b75  d95c240c             fstp dword ptr [esp + 0xc]
// 00613b79  d9c4                 fld st(4)
// 00613b7b  d8cd                 fmul st(5)
// 00613b7d  d9e8                 fld1 
// 00613b7f  d9c0                 fld st(0)
// 00613b81  dee2                 fsubrp st(2)
// 00613b83  d905706e8200         fld dword ptr [0x826e70]
// 00613b89  d8da                 fcomp st(2)
// 00613b8b  dfe0                 fnstsw ax
// 00613b8d  f6c405               test ah, 5
// 00613b90  0f8ad6000000         jp 0x613c6c
// 00613b96  def1                 fdivrp st(1)
// 00613b98  8b742448             mov esi, dword ptr [esp + 0x48]
// 00613b9c  51                   push ecx
// 00613b9d  8bce                 mov ecx, esi
// 00613b9f  d9442410             fld dword ptr [esp + 0x10]
// 00613ba3  d8ce                 fmul st(6)
// 00613ba5  d9442414             fld dword ptr [esp + 0x14]
// 00613ba9  dcc1                 fadd st(1), st(0)
// 00613bab  d9c9                 fxch st(1)
// 00613bad  d8ca                 fmul st(2)
// 00613baf  d9c9                 fxch st(1)
// 00613bb1  decf                 fmulp st(7)
// 00613bb3  d9ce                 fxch st(6)
// 00613bb5  d8442410             fadd dword ptr [esp + 0x10]
// 00613bb9  dec9                 fmulp st(1)
// 00613bbb  d9cc                 fxch st(4)
// 00613bbd  d8cd                 fmul st(5)
// 00613bbf  d9cb                 fxch st(3)
// 00613bc1  d8cd                 fmul st(5)
// 00613bc3  d9ca                 fxch st(2)
// 00613bc5  decd                 fmulp st(5)
// 00613bc7  d9ca                 fxch st(2)
// 00613bc9  d8442418             fadd dword ptr [esp + 0x18]
// 00613bcd  d9c9                 fxch st(1)
// 00613bcf  d844241c             fadd dword ptr [esp + 0x1c]
// 00613bd3  d9cc                 fxch st(4)
// 00613bd5  d8442420             fadd dword ptr [esp + 0x20]
// 00613bd9  d9ca                 fxch st(2)
// 00613bdb  d8cb                 fmul st(3)
// 00613bdd  d9442440             fld dword ptr [esp + 0x40]
// 00613be1  d8cc                 fmul st(4)
// 00613be3  d9442444             fld dword ptr [esp + 0x44]
// 00613be7  decd                 fmulp st(5)
// 00613be9  d9c9                 fxch st(1)
// 00613beb  d8442424             fadd dword ptr [esp + 0x24]
// 00613bef  d9c9                 fxch st(1)
// 00613bf1  d8442428             fadd dword ptr [esp + 0x28]
// 00613bf5  d9cc                 fxch st(4)
// 00613bf7  d844242c             fadd dword ptr [esp + 0x2c]
// 00613bfb  d9c1                 fld st(1)
// 00613bfd  d8c3                 fadd st(3)
// 00613bff  d9c5                 fld st(5)
// 00613c01  d8c7                 fadd st(7)
// 00613c03  d95c2440             fstp dword ptr [esp + 0x40]
// 00613c07  d9c1                 fld st(1)
// 00613c09  d8c5                 fadd st(5)
// 00613c0b  d95c2444             fstp dword ptr [esp + 0x44]
// 00613c0f  d905ac9b8100         fld dword ptr [0x819bac]
// 00613c15  dcc9                 fmul st(1), st(0)
// 00613c17  d9c9                 fxch st(1)
// 00613c19  d95c2430             fstp dword ptr [esp + 0x30]
// 00613c1d  d9442440             fld dword ptr [esp + 0x40]
// 00613c21  d8c9                 fmul st(1)
// 00613c23  d95c2434             fstp dword ptr [esp + 0x34]
// 00613c27  d84c2444             fmul dword ptr [esp + 0x44]
// 00613c2b  d9442430             fld dword ptr [esp + 0x30]
// 00613c2f  d95e10               fstp dword ptr [esi + 0x10]
// 00613c32  d9442434             fld dword ptr [esp + 0x34]
// 00613c36  d95e14               fstp dword ptr [esi + 0x14]
// 00613c39  d95e18               fstp dword ptr [esi + 0x18]
// 00613c3c  d9ca                 fxch st(2)
// 00613c3e  dee1                 fsubrp st(1)
// 00613c40  d9cc                 fxch st(4)
// 00613c42  dee3                 fsubrp st(3)
// 00613c44  dee9                 fsubp st(1)
// 00613c46  d9ca                 fxch st(2)
// 00613c48  d91e                 fstp dword ptr [esi]
// 00613c4a  d95e04               fstp dword ptr [esi + 4]
// 00613c4d  d95e08               fstp dword ptr [esi + 8]
// 00613c50  d905706e8200         fld dword ptr [0x826e70]
// 00613c56  d91c24               fstp dword ptr [esp]
// 00613c59  e81248f0ff           call 0x518470
// 00613c5e  d9e0                 fchs 
// 00613c60  5f                   pop edi
// 00613c61  d95e0c               fstp dword ptr [esi + 0xc]
// 00613c64  5e                   pop esi
// 00613c65  5b                   pop ebx
// 00613c66  83c438               add esp, 0x38
// 00613c69  c20400               ret 4
// 00613c6c  8b442448             mov eax, dword ptr [esp + 0x48]
// 00613c70  ddde                 fstp st(6)
// 00613c72  ddd8                 fstp st(0)
// 00613c74  5f                   pop edi
// 00613c75  ddd8                 fstp st(0)
// 00613c77  5e                   pop esi
// 00613c78  dddb                 fstp st(3)
// 00613c7a  5b                   pop ebx
// 00613c7b  d9442408             fld dword ptr [esp + 8]
// 00613c7f  d95810               fstp dword ptr [eax + 0x10]
// 00613c82  d944240c             fld dword ptr [esp + 0xc]
// 00613c86  d95814               fstp dword ptr [eax + 0x14]
// 00613c89  d9442410             fld dword ptr [esp + 0x10]
// 00613c8d  d95818               fstp dword ptr [eax + 0x18]
// 00613c90  d9c9                 fxch st(1)
// 00613c92  d918                 fstp dword ptr [eax]
// 00613c94  d95804               fstp dword ptr [eax + 4]
// 00613c97  d95808               fstp dword ptr [eax + 8]
// 00613c9a  d9ee                 fldz 
// 00613c9c  d9580c               fstp dword ptr [eax + 0xc]
// 00613c9f  83c438               add esp, 0x38
// 00613ca2  c20400               ret 4
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?computeEdgeEdge@GeoPair@RBX@@AAEXAAVPairParams@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
