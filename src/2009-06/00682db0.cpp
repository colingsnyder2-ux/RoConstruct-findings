// roc 2009-06 00682db0  unit: RBX::Sky  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00682db0
//
// 00682db0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00682db4  8b442404             mov eax, dword ptr [esp + 4]
// 00682db8  d901                 fld dword ptr [ecx]
// 00682dba  d918                 fstp dword ptr [eax]
// 00682dbc  d94104               fld dword ptr [ecx + 4]
// 00682dbf  d95804               fstp dword ptr [eax + 4]
// 00682dc2  d94108               fld dword ptr [ecx + 8]
// 00682dc5  d95808               fstp dword ptr [eax + 8]
// 00682dc8  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$01@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
