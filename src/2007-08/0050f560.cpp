// roc 2007-08 0050f560  unit: G3D::TextInput::WrongSymbol  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f560
//
// 0050f560  d9ee                 fldz 
// 0050f562  83ec14               sub esp, 0x14
// 0050f565  56                   push esi
// 0050f566  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0050f56a  d916                 fst dword ptr [esi]
// 0050f56c  57                   push edi
// 0050f56d  8b3df4e87700         mov edi, dword ptr [0x77e8f4]
// 0050f573  d95604               fst dword ptr [esi + 4]
// 0050f576  d95e08               fstp dword ptr [esi + 8]
// 0050f579  8da42400000000       lea esp, [esp]
// 0050f580  ffd7                 call edi
// 0050f582  89442420             mov dword ptr [esp + 0x20], eax
// 0050f586  db442420             fild dword ptr [esp + 0x20]
// 0050f58a  dcc0                 fadd st(0), st(0)
// 0050f58c  dc35c8f27900         fdiv qword ptr [0x79f2c8]
// 0050f592  dc2598317900         fsub qword ptr [0x793198]
// 0050f598  d95c240c             fstp dword ptr [esp + 0xc]
// 0050f59c  ffd7                 call edi
// 0050f59e  89442420             mov dword ptr [esp + 0x20], eax
// 0050f5a2  db442420             fild dword ptr [esp + 0x20]
// 0050f5a6  dcc0                 fadd st(0), st(0)
// 0050f5a8  dc35c8f27900         fdiv qword ptr [0x79f2c8]
// 0050f5ae  dc2598317900         fsub qword ptr [0x793198]
// 0050f5b4  d95c2408             fstp dword ptr [esp + 8]
// 0050f5b8  ffd7                 call edi
// 0050f5ba  89442420             mov dword ptr [esp + 0x20], eax
// 0050f5be  db442420             fild dword ptr [esp + 0x20]
// 0050f5c2  dcc0                 fadd st(0), st(0)
// 0050f5c4  dc35c8f27900         fdiv qword ptr [0x79f2c8]
// 0050f5ca  dc2598317900         fsub qword ptr [0x793198]
// 0050f5d0  d95c2410             fstp dword ptr [esp + 0x10]
// 0050f5d4  d9442410             fld dword ptr [esp + 0x10]
// 0050f5d8  d916                 fst dword ptr [esi]
// 0050f5da  d9442408             fld dword ptr [esp + 8]
// 0050f5de  d95604               fst dword ptr [esi + 4]
// 0050f5e1  d944240c             fld dword ptr [esp + 0xc]
// 0050f5e5  d95608               fst dword ptr [esi + 8]
// 0050f5e8  d9c2                 fld st(2)
// 0050f5ea  decb                 fmulp st(3)
// 0050f5ec  d9c1                 fld st(1)
// 0050f5ee  deca                 fmulp st(2)
// 0050f5f0  d9ca                 fxch st(2)
// 0050f5f2  dec1                 faddp st(1)
// 0050f5f4  d9c1                 fld st(1)
// 0050f5f6  deca                 fmulp st(2)
// 0050f5f8  dec1                 faddp st(1)
// 0050f5fa  d95c2420             fstp dword ptr [esp + 0x20]
// 0050f5fe  d9442420             fld dword ptr [esp + 0x20]
// 0050f602  d81d60377900         fcomp dword ptr [0x793760]
// 0050f608  dfe0                 fnstsw ax
// 0050f60a  f6c401               test ah, 1
// 0050f60d  0f846dffffff         je 0x50f580
// 0050f613  d90550fe7900         fld dword ptr [0x79fe50]
// 0050f619  51                   push ecx
// 0050f61a  8bce                 mov ecx, esi
// 0050f61c  d91c24               fstp dword ptr [esp]
// 0050f61f  e87cfdffff           call 0x50f3a0
// 0050f624  ddd8                 fstp st(0)
// 0050f626  5f                   pop edi
// 0050f627  8bc6                 mov eax, esi
// 0050f629  5e                   pop esi
// 0050f62a  83c414               add esp, 0x14
// 0050f62d  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\roc_export_2e510945f61df65f.cpp (function ?random@Vector3@G3D@@SA?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_export_2e510945f61df65f.cpp
