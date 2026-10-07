// roc 2012-06 00598db0  unit: RBX::Network::ServerReplicator  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00598db0
//
// 00598db0  a1a852e200           mov eax, dword ptr [0xe252a8]
// 00598db5  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?assertionHook@G3D@@YAP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@ZXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
