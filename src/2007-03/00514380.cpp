// roc 2007-03 00514380  unit: seg_00510000  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00514380
//
// 00514380  83ec24               sub esp, 0x24
// 00514383  d9ee                 fldz 
// 00514385  8b442430             mov eax, dword ptr [esp + 0x30]
// 00514389  56                   push esi
// 0051438a  8bf1                 mov esi, ecx
// 0051438c  c7063cfd7900         mov dword ptr [esi], 0x79fd3c
// 00514392  d95604               fst dword ptr [esi + 4]
// 00514395  d95608               fst dword ptr [esi + 8]
// 00514398  57                   push edi
// 00514399  d95e0c               fstp dword ptr [esi + 0xc]
// 0051439c  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005143a0  d900                 fld dword ptr [eax]
// 005143a2  d827                 fsub dword ptr [edi]
// 005143a4  d95c2414             fstp dword ptr [esp + 0x14]
// 005143a8  d94004               fld dword ptr [eax + 4]
// 005143ab  d86704               fsub dword ptr [edi + 4]
// 005143ae  d95c2418             fstp dword ptr [esp + 0x18]
// 005143b2  d94008               fld dword ptr [eax + 8]
// 005143b5  8b442434             mov eax, dword ptr [esp + 0x34]
// 005143b9  d86708               fsub dword ptr [edi + 8]
// 005143bc  d95c241c             fstp dword ptr [esp + 0x1c]
// 005143c0  d900                 fld dword ptr [eax]
// 005143c2  d827                 fsub dword ptr [edi]
// 005143c4  d95c2420             fstp dword ptr [esp + 0x20]
// 005143c8  d94004               fld dword ptr [eax + 4]
// 005143cb  d86704               fsub dword ptr [edi + 4]
// 005143ce  d95c2424             fstp dword ptr [esp + 0x24]
// 005143d2  d94008               fld dword ptr [eax + 8]
// 005143d5  d86708               fsub dword ptr [edi + 8]
// 005143d8  d95c2428             fstp dword ptr [esp + 0x28]
// 005143dc  d9442424             fld dword ptr [esp + 0x24]
// 005143e0  d9c0                 fld st(0)
// 005143e2  d944241c             fld dword ptr [esp + 0x1c]
// 005143e6  d9c0                 fld st(0)
// 005143e8  deca                 fmulp st(2)
// 005143ea  d9442428             fld dword ptr [esp + 0x28]
// 005143ee  d9c0                 fld st(0)
// 005143f0  d9442418             fld dword ptr [esp + 0x18]
// 005143f4  d9c0                 fld st(0)
// 005143f6  deca                 fmulp st(2)
// 005143f8  d9cc                 fxch st(4)
// 005143fa  dee1                 fsubrp st(1)
// 005143fc  d95c2408             fstp dword ptr [esp + 8]
// 00514400  d9442414             fld dword ptr [esp + 0x14]
// 00514404  d9c0                 fld st(0)
// 00514406  deca                 fmulp st(2)
// 00514408  d9442420             fld dword ptr [esp + 0x20]
// 0051440c  d9c0                 fld st(0)
// 0051440e  decc                 fmulp st(4)
// 00514410  d9ca                 fxch st(2)
// 00514412  dee3                 fsubrp st(3)
// 00514414  d9ca                 fxch st(2)
// 00514416  d95c240c             fstp dword ptr [esp + 0xc]
// 0051441a  deca                 fmulp st(2)
// 0051441c  deca                 fmulp st(2)
// 0051441e  dee1                 fsubrp st(1)
// 00514420  d95c2410             fstp dword ptr [esp + 0x10]
// 00514424  d944240c             fld dword ptr [esp + 0xc]
// 00514428  d9442408             fld dword ptr [esp + 8]
// 0051442c  d9442410             fld dword ptr [esp + 0x10]
// 00514430  d9c1                 fld st(1)
// 00514432  deca                 fmulp st(2)
// 00514434  d9c2                 fld st(2)
// 00514436  decb                 fmulp st(3)
// 00514438  d9c9                 fxch st(1)
// 0051443a  dec2                 faddp st(2)
// 0051443c  dcc8                 fmul st(0), st(0)
// 0051443e  dec1                 faddp st(1)
// 00514440  d95c2438             fstp dword ptr [esp + 0x38]
// 00514444  d9442438             fld dword ptr [esp + 0x38]
// 00514448  e85fae1000           call 0x61f2ac
// 0051444d  d95c2438             fstp dword ptr [esp + 0x38]
// 00514451  d9442438             fld dword ptr [esp + 0x38]
// 00514455  d9e8                 fld1 
// 00514457  def1                 fdivrp st(1)
// 00514459  d95c2438             fstp dword ptr [esp + 0x38]
// 0051445d  d9442408             fld dword ptr [esp + 8]
// 00514461  d9442438             fld dword ptr [esp + 0x38]
// 00514465  d9c0                 fld st(0)
// 00514467  deca                 fmulp st(2)
// 00514469  d9c9                 fxch st(1)
// 0051446b  d95c2420             fstp dword ptr [esp + 0x20]
// 0051446f  d944240c             fld dword ptr [esp + 0xc]
// 00514473  8bc6                 mov eax, esi
// 00514475  d8c9                 fmul st(1)
// 00514477  d95c2424             fstp dword ptr [esp + 0x24]
// 0051447b  d84c2410             fmul dword ptr [esp + 0x10]
// 0051447f  d95c2428             fstp dword ptr [esp + 0x28]
// 00514483  d9442420             fld dword ptr [esp + 0x20]
// 00514487  d95e04               fstp dword ptr [esi + 4]
// 0051448a  d9442424             fld dword ptr [esp + 0x24]
// 0051448e  d95e08               fstp dword ptr [esi + 8]
// 00514491  d9442428             fld dword ptr [esp + 0x28]
// 00514495  d95e0c               fstp dword ptr [esi + 0xc]
// 00514498  d94608               fld dword ptr [esi + 8]
// 0051449b  d84f04               fmul dword ptr [edi + 4]
// 0051449e  d907                 fld dword ptr [edi]
// 005144a0  d84e04               fmul dword ptr [esi + 4]
// 005144a3  dec1                 faddp st(1)
// 005144a5  d9460c               fld dword ptr [esi + 0xc]
// 005144a8  d84f08               fmul dword ptr [edi + 8]
// 005144ab  5f                   pop edi
// 005144ac  dec1                 faddp st(1)
// 005144ae  d95e10               fstp dword ptr [esi + 0x10]
// 005144b1  5e                   pop esi
// 005144b2  83c424               add esp, 0x24
// 005144b5  c20c00               ret 0xc
// library g3d-6.09-rbx2008/G3Dcpp\Plane.cpp (function ??0Plane@G3D@@QAE@ABVVector3@1@00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Plane.cpp
