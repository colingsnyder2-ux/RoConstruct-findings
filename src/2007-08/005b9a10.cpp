// roc 2007-08 005b9a10  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9a10
//
// 005b9a10  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b9a14  d901                 fld dword ptr [ecx]
// 005b9a16  8b442404             mov eax, dword ptr [esp + 4]
// 005b9a1a  d9e0                 fchs 
// 005b9a1c  d918                 fstp dword ptr [eax]
// 005b9a1e  d94104               fld dword ptr [ecx + 4]
// 005b9a21  d95804               fstp dword ptr [eax + 4]
// 005b9a24  d94108               fld dword ptr [ecx + 8]
// 005b9a27  d9e0                 fchs 
// 005b9a29  d95808               fstp dword ptr [eax + 8]
// 005b9a2c  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$04@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
