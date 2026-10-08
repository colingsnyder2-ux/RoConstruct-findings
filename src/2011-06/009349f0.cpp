// roc 2011-06 009349f0  unit: Ogre::RbxSceneManagerFactory  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009349f0
//
// 009349f0  8a442404             mov al, byte ptr [esp + 4]
// 009349f4  884114               mov byte ptr [ecx + 0x14], al
// 009349f7  c20400               ret 4
// library rbxgs-render/DepthBlur.cpp (function ?setPreserveState@Shader@G3D@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
