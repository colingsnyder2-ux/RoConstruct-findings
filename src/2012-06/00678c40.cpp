// roc 2012-06 00678c40  unit: DummyArbiter  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00678c40
//
// 00678c40  a17ca2e100           mov eax, dword ptr [0xe1a27c]
// 00678c45  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?assertionHook@G3D@@YAP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@ZXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
