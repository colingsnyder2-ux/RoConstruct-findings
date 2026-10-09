// roc 2011-06 00794310  unit: seg_00790000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00794310
//
// 00794310  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00794314  8b442404             mov eax, dword ptr [esp + 4]
// 00794318  d901                 fld dword ptr [ecx]
// 0079431a  d918                 fstp dword ptr [eax]
// 0079431c  d94104               fld dword ptr [ecx + 4]
// 0079431f  d95804               fstp dword ptr [eax + 4]
// 00794322  d94108               fld dword ptr [ecx + 8]
// 00794325  d95808               fstp dword ptr [eax + 8]
// 00794328  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$01@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
