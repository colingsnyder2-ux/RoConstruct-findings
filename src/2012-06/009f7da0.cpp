// from server: 100% by auto
// roc 2012-06 009f7da0  unit: CXTPResourceManager  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f7da0
//
// 009f7da0  a150a0e500           mov eax, dword ptr [0xe5a050]
// 009f7da5  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?assertionHook@G3D@@YAP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@ZXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
