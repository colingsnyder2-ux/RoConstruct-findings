// roc 2012-06 00464d00  unit: Ogre::RbxCluster  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00464d00
//
// 00464d00  a17068d900           mov eax, dword ptr [0xd96870]
// 00464d05  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?assertionHook@G3D@@YAP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@ZXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
