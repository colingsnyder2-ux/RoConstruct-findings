// roc 2007-08 006b2c10  unit: CXTPResourceManager  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2c10
//
// 006b2c10  a138938c00           mov eax, dword ptr [0x8c9338]
// 006b2c15  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?assertionHook@G3D@@YAP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@ZXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
