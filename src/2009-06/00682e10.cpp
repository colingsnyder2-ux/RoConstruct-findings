// roc 2009-06 00682e10  unit: RBX::Sky  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00682e10
//
// 00682e10  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00682e14  d901                 fld dword ptr [ecx]
// 00682e16  8b442404             mov eax, dword ptr [esp + 4]
// 00682e1a  d9e0                 fchs 
// 00682e1c  d918                 fstp dword ptr [eax]
// 00682e1e  d94104               fld dword ptr [ecx + 4]
// 00682e21  d95804               fstp dword ptr [eax + 4]
// 00682e24  d94108               fld dword ptr [ecx + 8]
// 00682e27  d9e0                 fchs 
// 00682e29  d95808               fstp dword ptr [eax + 8]
// 00682e2c  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$04@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
