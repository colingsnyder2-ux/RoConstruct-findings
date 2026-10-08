// roc 2007-08 005b9990  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9990
//
// 005b9990  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b9994  d901                 fld dword ptr [ecx]
// 005b9996  8b442404             mov eax, dword ptr [esp + 4]
// 005b999a  d9e0                 fchs 
// 005b999c  d918                 fstp dword ptr [eax]
// 005b999e  d94108               fld dword ptr [ecx + 8]
// 005b99a1  d95804               fstp dword ptr [eax + 4]
// 005b99a4  d94104               fld dword ptr [ecx + 4]
// 005b99a7  d95808               fstp dword ptr [eax + 8]
// 005b99aa  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$00@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
