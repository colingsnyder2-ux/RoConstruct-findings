// from server: 100% by auto
// roc 2007-08 00473080  unit: G3D::VARArea  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473080
//
// 00473080  8b442404             mov eax, dword ptr [esp + 4]
// 00473084  d9ee                 fldz 
// 00473086  8b542408             mov edx, dword ptr [esp + 8]
// 0047308a  d910                 fst dword ptr [eax]
// 0047308c  d95004               fst dword ptr [eax + 4]
// 0047308f  d95808               fstp dword ptr [eax + 8]
// 00473092  d94204               fld dword ptr [edx + 4]
// 00473095  d902                 fld dword ptr [edx]
// 00473097  d94208               fld dword ptr [edx + 8]
// 0047309a  d94104               fld dword ptr [ecx + 4]
// 0047309d  d8cb                 fmul st(3)
// 0047309f  d901                 fld dword ptr [ecx]
// 004730a1  d8cb                 fmul st(3)
// 004730a3  dec1                 faddp st(1)
// 004730a5  d94108               fld dword ptr [ecx + 8]
// 004730a8  d8ca                 fmul st(2)
// 004730aa  dec1                 faddp st(1)
// 004730ac  d918                 fstp dword ptr [eax]
// 004730ae  d9410c               fld dword ptr [ecx + 0xc]
// 004730b1  d8ca                 fmul st(2)
// 004730b3  d94110               fld dword ptr [ecx + 0x10]
// 004730b6  d8cc                 fmul st(4)
// 004730b8  dec1                 faddp st(1)
// 004730ba  d94114               fld dword ptr [ecx + 0x14]
// 004730bd  d8ca                 fmul st(2)
// 004730bf  dec1                 faddp st(1)
// 004730c1  d95804               fstp dword ptr [eax + 4]
// 004730c4  d94118               fld dword ptr [ecx + 0x18]
// 004730c7  deca                 fmulp st(2)
// 004730c9  d9411c               fld dword ptr [ecx + 0x1c]
// 004730cc  decb                 fmulp st(3)
// 004730ce  d9c9                 fxch st(1)
// 004730d0  dec2                 faddp st(2)
// 004730d2  d84920               fmul dword ptr [ecx + 0x20]
// 004730d5  dec1                 faddp st(1)
// 004730d7  d95808               fstp dword ptr [eax + 8]
// 004730da  c20800               ret 8
// library g3d-6.09/G3Dcpp\Box.cpp (function ??DMatrix3@G3D@@QBE?AVVector3@1@ABV21@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
