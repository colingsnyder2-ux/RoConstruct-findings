// roc 2009-12 0071f740  unit: RBX::VInstance::?$NonFactoryProduct  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071f740
//
// 0071f740  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0071f744  8b442404             mov eax, dword ptr [esp + 4]
// 0071f748  d901                 fld dword ptr [ecx]
// 0071f74a  d918                 fstp dword ptr [eax]
// 0071f74c  d94104               fld dword ptr [ecx + 4]
// 0071f74f  d95804               fstp dword ptr [eax + 4]
// 0071f752  d94108               fld dword ptr [ecx + 8]
// 0071f755  d95808               fstp dword ptr [eax + 8]
// 0071f758  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$01@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
