// from server: 100% by auto
// roc 2007-08 0050f740  unit: G3D::TextInput::WrongSymbol  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f740
//
// 0050f740  83ec0c               sub esp, 0xc
// 0050f743  56                   push esi
// 0050f744  8bf1                 mov esi, ecx
// 0050f746  d94604               fld dword ptr [esi + 4]
// 0050f749  d906                 fld dword ptr [esi]
// 0050f74b  d94608               fld dword ptr [esi + 8]
// 0050f74e  d9c1                 fld st(1)
// 0050f750  deca                 fmulp st(2)
// 0050f752  d9c2                 fld st(2)
// 0050f754  decb                 fmulp st(3)
// 0050f756  d9c9                 fxch st(1)
// 0050f758  dec2                 faddp st(2)
// 0050f75a  dcc8                 fmul st(0), st(0)
// 0050f75c  dec1                 faddp st(1)
// 0050f75e  d95c2404             fstp dword ptr [esp + 4]
// 0050f762  d9442404             fld dword ptr [esp + 4]
// 0050f766  e8a1161200           call 0x630e0c
// 0050f76b  d95c2404             fstp dword ptr [esp + 4]
// 0050f76f  d9442404             fld dword ptr [esp + 4]
// 0050f773  d95c2404             fstp dword ptr [esp + 4]
// 0050f777  d9442404             fld dword ptr [esp + 4]
// 0050f77b  d9ee                 fldz 
// 0050f77d  d9c0                 fld st(0)
// 0050f77f  ddea                 fucomp st(2)
// 0050f781  dfe0                 fnstsw ax
// 0050f783  f6c444               test ah, 0x44
// 0050f786  7b5e                 jnp 0x50f7e6
// 0050f788  d9c1                 fld st(1)
// 0050f78a  83ec10               sub esp, 0x10
// 0050f78d  d8e1                 fsub st(1)
// 0050f78f  d9e1                 fabs 
// 0050f791  dd5c2418             fstp qword ptr [esp + 0x18]
// 0050f795  dd5c2408             fstp qword ptr [esp + 8]
// 0050f799  dd1c24               fstp qword ptr [esp]
// 0050f79c  e8bf9cffff           call 0x509460
// 0050f7a1  dc5c2418             fcomp qword ptr [esp + 0x18]
// 0050f7a5  83c410               add esp, 0x10
// 0050f7a8  dfe0                 fnstsw ax
// 0050f7aa  f6c401               test ah, 1
// 0050f7ad  743b                 je 0x50f7ea
// 0050f7af  d9e8                 fld1 
// 0050f7b1  83ec10               sub esp, 0x10
// 0050f7b4  dd5c2408             fstp qword ptr [esp + 8]
// 0050f7b8  d9442414             fld dword ptr [esp + 0x14]
// 0050f7bc  dd1c24               fstp qword ptr [esp]
// 0050f7bf  e8ec9cffff           call 0x5094b0
// 0050f7c4  83c410               add esp, 0x10
// 0050f7c7  84c0                 test al, al
// 0050f7c9  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050f7cd  7467                 je 0x50f836
// 0050f7cf  d906                 fld dword ptr [esi]
// 0050f7d1  d918                 fstp dword ptr [eax]
// 0050f7d3  d94604               fld dword ptr [esi + 4]
// 0050f7d6  d95804               fstp dword ptr [eax + 4]
// 0050f7d9  d94608               fld dword ptr [esi + 8]
// 0050f7dc  5e                   pop esi
// 0050f7dd  d95808               fstp dword ptr [eax + 8]
// 0050f7e0  83c40c               add esp, 0xc
// 0050f7e3  c20400               ret 4
// 0050f7e6  ddd9                 fstp st(1)
// 0050f7e8  ddd8                 fstp st(0)
// 0050f7ea  b801000000           mov eax, 1
// 0050f7ef  840538d18b00         test byte ptr [0x8bd138], al
// 0050f7f5  751a                 jne 0x50f811
// 0050f7f7  d9ee                 fldz 
// 0050f7f9  090538d18b00         or dword ptr [0x8bd138], eax
// 0050f7ff  d9152cd18b00         fst dword ptr [0x8bd12c]
// 0050f805  d91530d18b00         fst dword ptr [0x8bd130]
// 0050f80b  d91d34d18b00         fstp dword ptr [0x8bd134]
// 0050f811  8b442414             mov eax, dword ptr [esp + 0x14]
// 0050f815  d9052cd18b00         fld dword ptr [0x8bd12c]
// 0050f81b  d918                 fstp dword ptr [eax]
// 0050f81d  5e                   pop esi
// 0050f81e  d90530d18b00         fld dword ptr [0x8bd130]
// 0050f824  d95804               fstp dword ptr [eax + 4]
// 0050f827  d90534d18b00         fld dword ptr [0x8bd134]
// 0050f82d  d95808               fstp dword ptr [eax + 8]
// 0050f830  83c40c               add esp, 0xc
// 0050f833  c20400               ret 4
// 0050f836  d9442404             fld dword ptr [esp + 4]
// 0050f83a  d9e8                 fld1 
// 0050f83c  def1                 fdivrp st(1)
// 0050f83e  d95c2404             fstp dword ptr [esp + 4]
// 0050f842  d906                 fld dword ptr [esi]
// 0050f844  d9442404             fld dword ptr [esp + 4]
// 0050f848  d9c0                 fld st(0)
// 0050f84a  deca                 fmulp st(2)
// 0050f84c  d9c9                 fxch st(1)
// 0050f84e  d918                 fstp dword ptr [eax]
// 0050f850  d9c0                 fld st(0)
// 0050f852  d84e04               fmul dword ptr [esi + 4]
// 0050f855  d95804               fstp dword ptr [eax + 4]
// 0050f858  d84e08               fmul dword ptr [esi + 8]
// 0050f85b  5e                   pop esi
// 0050f85c  d95808               fstp dword ptr [eax + 8]
// 0050f85f  83c40c               add esp, 0xc
// 0050f862  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?directionOrZero@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
