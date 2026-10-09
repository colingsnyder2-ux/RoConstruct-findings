// roc 2012-06 00827620  unit: RBX::$01::?$SurfaceDescriptor  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00827620
//
// 00827620  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00827624  8b442404             mov eax, dword ptr [esp + 4]
// 00827628  d901                 fld dword ptr [ecx]
// 0082762a  d918                 fstp dword ptr [eax]
// 0082762c  d94104               fld dword ptr [ecx + 4]
// 0082762f  d95804               fstp dword ptr [eax + 4]
// 00827632  d94108               fld dword ptr [ecx + 8]
// 00827635  d95808               fstp dword ptr [eax + 8]
// 00827638  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$01@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
