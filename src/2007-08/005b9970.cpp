// roc 2007-08 005b9970  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9970
//
// 005b9970  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b9974  8b442404             mov eax, dword ptr [esp + 4]
// 005b9978  d94108               fld dword ptr [ecx + 8]
// 005b997b  d918                 fstp dword ptr [eax]
// 005b997d  d94104               fld dword ptr [ecx + 4]
// 005b9980  d95804               fstp dword ptr [eax + 4]
// 005b9983  d901                 fld dword ptr [ecx]
// 005b9985  d9e0                 fchs 
// 005b9987  d95808               fstp dword ptr [eax + 8]
// 005b998a  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$0A@@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
