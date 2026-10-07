// roc 2010-06 00423ac0  unit: ThreadLogManager  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00423ac0
//
// 00423ac0  a10808c000           mov eax, dword ptr [0xc00808]
// 00423ac5  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?assertionHook@G3D@@YAP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@ZXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
