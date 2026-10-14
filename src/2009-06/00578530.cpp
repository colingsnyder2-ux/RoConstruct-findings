// roc 2009-06 00578530  unit: G3D::LineSegment  size: 245 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00578530
//
// 00578530  81ec90000000         sub esp, 0x90
// 00578536  d9842498000000       fld dword ptr [esp + 0x98]
// 0057853d  56                   push esi
// 0057853e  d9c0                 fld st(0)
// 00578540  8d44244c             lea eax, [esp + 0x4c]
// 00578544  d9ff                 fcos 
// 00578546  50                   push eax
// 00578547  8d4c2474             lea ecx, [esp + 0x74]
// 0057854b  51                   push ecx
// 0057854c  8d4c240c             lea ecx, [esp + 0xc]
// 00578550  d9c9                 fxch st(1)
// 00578552  d9fe                 fsin 
// 00578554  d9e8                 fld1 
// 00578556  d9542430             fst dword ptr [esp + 0x30]
// 0057855a  d9ee                 fldz 
// 0057855c  d9542434             fst dword ptr [esp + 0x34]
// 00578560  d9542438             fst dword ptr [esp + 0x38]
// 00578564  d954243c             fst dword ptr [esp + 0x3c]
// 00578568  d9cb                 fxch st(3)
// 0057856a  d9542440             fst dword ptr [esp + 0x40]
// 0057856e  d9c2                 fld st(2)
// 00578570  d9e0                 fchs 
// 00578572  d95c2444             fstp dword ptr [esp + 0x44]
// 00578576  d9cb                 fxch st(3)
// 00578578  d9542448             fst dword ptr [esp + 0x48]
// 0057857c  d9ca                 fxch st(2)
// 0057857e  d95c244c             fstp dword ptr [esp + 0x4c]
// 00578582  d9ca                 fxch st(2)
// 00578584  d95c2450             fstp dword ptr [esp + 0x50]
// 00578588  d98424a8000000       fld dword ptr [esp + 0xa8]
// 0057858f  d9c0                 fld st(0)
// 00578591  d9ff                 fcos 
// 00578593  d9c9                 fxch st(1)
// 00578595  d9fe                 fsin 
// 00578597  d9c9                 fxch st(1)
// 00578599  d954240c             fst dword ptr [esp + 0xc]
// 0057859d  d9ca                 fxch st(2)
// 0057859f  d9542410             fst dword ptr [esp + 0x10]
// 005785a3  d9542418             fst dword ptr [esp + 0x18]
// 005785a7  d9542420             fst dword ptr [esp + 0x20]
// 005785ab  d9c9                 fxch st(1)
// 005785ad  d9542414             fst dword ptr [esp + 0x14]
// 005785b1  d9cb                 fxch st(3)
// 005785b3  d954241c             fst dword ptr [esp + 0x1c]
// 005785b7  d9cb                 fxch st(3)
// 005785b9  d9e0                 fchs 
// 005785bb  d95c2424             fstp dword ptr [esp + 0x24]
// 005785bf  d9542428             fst dword ptr [esp + 0x28]
// 005785c3  d9c9                 fxch st(1)
// 005785c5  d95c242c             fstp dword ptr [esp + 0x2c]
// 005785c9  d98424ac000000       fld dword ptr [esp + 0xac]
// 005785d0  d9c0                 fld st(0)
// 005785d2  d9ff                 fcos 
// 005785d4  d9c9                 fxch st(1)
// 005785d6  d9fe                 fsin 
// 005785d8  d9c9                 fxch st(1)
// 005785da  d9542454             fst dword ptr [esp + 0x54]
// 005785de  d9c1                 fld st(1)
// 005785e0  d9e0                 fchs 
// 005785e2  d95c2458             fstp dword ptr [esp + 0x58]
// 005785e6  d9ca                 fxch st(2)
// 005785e8  d954245c             fst dword ptr [esp + 0x5c]
// 005785ec  d9542468             fst dword ptr [esp + 0x68]
// 005785f0  d954246c             fst dword ptr [esp + 0x6c]
// 005785f4  d95c2470             fstp dword ptr [esp + 0x70]
// 005785f8  d95c2460             fstp dword ptr [esp + 0x60]
// 005785fc  d95c2464             fstp dword ptr [esp + 0x64]
// 00578600  d95c2474             fstp dword ptr [esp + 0x74]
// 00578604  e8b7f6ffff           call 0x577cc0
// 00578609  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00578610  50                   push eax
// 00578611  56                   push esi
// 00578612  8d4c2430             lea ecx, [esp + 0x30]
// 00578616  e8a5f6ffff           call 0x577cc0
// 0057861b  8bc6                 mov eax, esi
// 0057861d  5e                   pop esi
// 0057861e  81c490000000         add esp, 0x90
// 00578624  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ?fromEulerAnglesXYZ@Matrix3@G3D@@SA?AV12@MMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
