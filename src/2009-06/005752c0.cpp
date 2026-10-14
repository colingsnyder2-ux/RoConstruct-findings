// roc 2009-06 005752c0  unit: G3D::BinaryInput  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005752c0
//
// 005752c0  8b542408             mov edx, dword ptr [esp + 8]
// 005752c4  d94104               fld dword ptr [ecx + 4]
// 005752c7  d84a08               fmul dword ptr [edx + 8]
// 005752ca  8b442404             mov eax, dword ptr [esp + 4]
// 005752ce  d94204               fld dword ptr [edx + 4]
// 005752d1  d84908               fmul dword ptr [ecx + 8]
// 005752d4  dee9                 fsubp st(1)
// 005752d6  d918                 fstp dword ptr [eax]
// 005752d8  d94108               fld dword ptr [ecx + 8]
// 005752db  d80a                 fmul dword ptr [edx]
// 005752dd  d901                 fld dword ptr [ecx]
// 005752df  d84a08               fmul dword ptr [edx + 8]
// 005752e2  dee9                 fsubp st(1)
// 005752e4  d95804               fstp dword ptr [eax + 4]
// 005752e7  d94204               fld dword ptr [edx + 4]
// 005752ea  d809                 fmul dword ptr [ecx]
// 005752ec  d94104               fld dword ptr [ecx + 4]
// 005752ef  d80a                 fmul dword ptr [edx]
// 005752f1  dee9                 fsubp st(1)
// 005752f3  d95808               fstp dword ptr [eax + 8]
// 005752f6  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\Capsule.cpp (function ?cross@Vector3@G3D@@QBE?AV12@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Capsule.cpp
