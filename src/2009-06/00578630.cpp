// roc 2009-06 00578630  unit: G3D::LineSegment  size: 247 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00578630
//
// 00578630  81ec90000000         sub esp, 0x90
// 00578636  d9842498000000       fld dword ptr [esp + 0x98]
// 0057863d  56                   push esi
// 0057863e  d9c0                 fld st(0)
// 00578640  8d44244c             lea eax, [esp + 0x4c]
// 00578644  d9ff                 fcos 
// 00578646  50                   push eax
// 00578647  8d4c2474             lea ecx, [esp + 0x74]
// 0057864b  51                   push ecx
// 0057864c  8d4c240c             lea ecx, [esp + 0xc]
// 00578650  d9c9                 fxch st(1)
// 00578652  d9fe                 fsin 
// 00578654  d9c9                 fxch st(1)
// 00578656  d9542430             fst dword ptr [esp + 0x30]
// 0057865a  d9c1                 fld st(1)
// 0057865c  d9e0                 fchs 
// 0057865e  d95c2434             fstp dword ptr [esp + 0x34]
// 00578662  d9ee                 fldz 
// 00578664  d9542438             fst dword ptr [esp + 0x38]
// 00578668  d9542444             fst dword ptr [esp + 0x44]
// 0057866c  d9542448             fst dword ptr [esp + 0x48]
// 00578670  d954244c             fst dword ptr [esp + 0x4c]
// 00578674  d9ca                 fxch st(2)
// 00578676  d95c243c             fstp dword ptr [esp + 0x3c]
// 0057867a  d95c2440             fstp dword ptr [esp + 0x40]
// 0057867e  d9e8                 fld1 
// 00578680  d9542450             fst dword ptr [esp + 0x50]
// 00578684  d98424a8000000       fld dword ptr [esp + 0xa8]
// 0057868b  d9c0                 fld st(0)
// 0057868d  d9ff                 fcos 
// 0057868f  d9c9                 fxch st(1)
// 00578691  d9fe                 fsin 
// 00578693  d9ca                 fxch st(2)
// 00578695  d954240c             fst dword ptr [esp + 0xc]
// 00578699  d9cb                 fxch st(3)
// 0057869b  d9542410             fst dword ptr [esp + 0x10]
// 0057869f  d9542414             fst dword ptr [esp + 0x14]
// 005786a3  d9542418             fst dword ptr [esp + 0x18]
// 005786a7  d9c9                 fxch st(1)
// 005786a9  d954241c             fst dword ptr [esp + 0x1c]
// 005786ad  d9c2                 fld st(2)
// 005786af  d9e0                 fchs 
// 005786b1  d95c2420             fstp dword ptr [esp + 0x20]
// 005786b5  d9c9                 fxch st(1)
// 005786b7  d9542424             fst dword ptr [esp + 0x24]
// 005786bb  d9ca                 fxch st(2)
// 005786bd  d95c2428             fstp dword ptr [esp + 0x28]
// 005786c1  d95c242c             fstp dword ptr [esp + 0x2c]
// 005786c5  d98424ac000000       fld dword ptr [esp + 0xac]
// 005786cc  d9c0                 fld st(0)
// 005786ce  d9ff                 fcos 
// 005786d0  d9c9                 fxch st(1)
// 005786d2  d9fe                 fsin 
// 005786d4  d9c9                 fxch st(1)
// 005786d6  d9542454             fst dword ptr [esp + 0x54]
// 005786da  d9ca                 fxch st(2)
// 005786dc  d9542458             fst dword ptr [esp + 0x58]
// 005786e0  d9542460             fst dword ptr [esp + 0x60]
// 005786e4  d9542468             fst dword ptr [esp + 0x68]
// 005786e8  d9c9                 fxch st(1)
// 005786ea  d954245c             fst dword ptr [esp + 0x5c]
// 005786ee  d9cb                 fxch st(3)
// 005786f0  d95c2464             fstp dword ptr [esp + 0x64]
// 005786f4  d9ca                 fxch st(2)
// 005786f6  d9e0                 fchs 
// 005786f8  d95c246c             fstp dword ptr [esp + 0x6c]
// 005786fc  d9c9                 fxch st(1)
// 005786fe  d95c2470             fstp dword ptr [esp + 0x70]
// 00578702  d95c2474             fstp dword ptr [esp + 0x74]
// 00578706  e8b5f5ffff           call 0x577cc0
// 0057870b  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00578712  50                   push eax
// 00578713  56                   push esi
// 00578714  8d4c2430             lea ecx, [esp + 0x30]
// 00578718  e8a3f5ffff           call 0x577cc0
// 0057871d  8bc6                 mov eax, esi
// 0057871f  5e                   pop esi
// 00578720  81c490000000         add esp, 0x90
// 00578726  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\Matrix3.cpp (function ?fromEulerAnglesZXY@Matrix3@G3D@@SA?AV12@MMM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Matrix3.cpp
