// from server: 100% by auto
// roc 2008-06 00569910  unit: RBX::StandardOut  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569910
//
// 00569910  8b442404             mov eax, dword ptr [esp + 4]
// 00569914  a374629400           mov dword ptr [0x946274], eax
// 00569919  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?setAssertionHook@G3D@@YAXP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
