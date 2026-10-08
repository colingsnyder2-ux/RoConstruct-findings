// from server: 100% by auto
// roc 2009-06 004821b0  unit: Ogre::RbxCullableSceneNode  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004821b0
//
// 004821b0  8b442404             mov eax, dword ptr [esp + 4]
// 004821b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004821b8  3bc1                 cmp eax, ecx
// 004821ba  7d02                 jge 0x4821be
// 004821bc  8bc1                 mov eax, ecx
// 004821be  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?iMax@G3D@@YAHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
