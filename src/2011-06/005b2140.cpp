// from server: 100% by auto
// roc 2011-06 005b2140  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b2140
//
// 005b2140  a180dfcb00           mov eax, dword ptr [0xcbdf80]
// 005b2145  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?assertionHook@G3D@@YAP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@ZXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
