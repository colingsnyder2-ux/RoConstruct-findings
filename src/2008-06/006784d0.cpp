// roc 2008-06 006784d0  unit: Ogre::RbxSceneManagerFactory  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006784d0
//
// 006784d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006784d4  8b442404             mov eax, dword ptr [esp + 4]
// 006784d8  d901                 fld dword ptr [ecx]
// 006784da  d918                 fstp dword ptr [eax]
// 006784dc  d94104               fld dword ptr [ecx + 4]
// 006784df  d95804               fstp dword ptr [eax + 4]
// 006784e2  d94108               fld dword ptr [ecx + 8]
// 006784e5  d95808               fstp dword ptr [eax + 8]
// 006784e8  c3                   ret 
// library openrbx-client/App\util\NormalId.cpp (function ??$uvwToObject@$01@RBX@@YA?AVVector3@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/NormalId.cpp
