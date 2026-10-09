// roc 2010-06 00738ea0  unit: seg_00730000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00738ea0
//
// 00738ea0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00738ea4  8b442404             mov eax, dword ptr [esp + 4]
// 00738ea8  d901                 fld dword ptr [ecx]
// 00738eaa  d918                 fstp dword ptr [eax]
// 00738eac  d94104               fld dword ptr [ecx + 4]
// 00738eaf  d95804               fstp dword ptr [eax + 4]
// 00738eb2  d94108               fld dword ptr [ecx + 8]
// 00738eb5  d95808               fstp dword ptr [eax + 8]
// 00738eb8  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$01@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
