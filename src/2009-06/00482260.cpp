// roc 2009-06 00482260  unit: Ogre::RbxCullableSceneNode  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00482260
//
// 00482260  8b442404             mov eax, dword ptr [esp + 4]
// 00482264  d94008               fld dword ptr [eax + 8]
// 00482267  d84908               fmul dword ptr [ecx + 8]
// 0048226a  d94004               fld dword ptr [eax + 4]
// 0048226d  d84904               fmul dword ptr [ecx + 4]
// 00482270  dec1                 faddp st(1)
// 00482272  d900                 fld dword ptr [eax]
// 00482274  d809                 fmul dword ptr [ecx]
// 00482276  dec1                 faddp st(1)
// 00482278  c20400               ret 4
// library g3d-6.09/G3Dcpp\AABox.cpp (function ?dot@Vector3@G3D@@QBEMABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/AABox.cpp
