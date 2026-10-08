// from server: 100% by auto
// roc 2009-06 004821a0  unit: Ogre::RbxCullableSceneNode  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004821a0
//
// 004821a0  8b442404             mov eax, dword ptr [esp + 4]
// 004821a4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004821a8  3bc1                 cmp eax, ecx
// 004821aa  7c02                 jl 0x4821ae
// 004821ac  8bc1                 mov eax, ecx
// 004821ae  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?iMin@G3D@@YAHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
