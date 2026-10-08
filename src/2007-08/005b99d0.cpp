// roc 2007-08 005b99d0  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b99d0
//
// 005b99d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b99d4  d94108               fld dword ptr [ecx + 8]
// 005b99d7  8b442404             mov eax, dword ptr [esp + 4]
// 005b99db  d9e0                 fchs 
// 005b99dd  d918                 fstp dword ptr [eax]
// 005b99df  d94104               fld dword ptr [ecx + 4]
// 005b99e2  d95804               fstp dword ptr [eax + 4]
// 005b99e5  d901                 fld dword ptr [ecx]
// 005b99e7  d95808               fstp dword ptr [eax + 8]
// 005b99ea  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$02@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
