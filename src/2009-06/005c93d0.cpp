// roc 2009-06 005c93d0  unit: seg_005c0000  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c93d0
//
// 005c93d0  a12807a500           mov eax, dword ptr [0xa50728]
// 005c93d5  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?assertionHook@G3D@@YAP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@ZXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
