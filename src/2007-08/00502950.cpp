// from server: 100% by auto
// roc 2007-08 00502950  unit: G3D::Log  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00502950
//
// 00502950  8b442404             mov eax, dword ptr [esp + 4]
// 00502954  a3f8808900           mov dword ptr [0x8980f8], eax
// 00502959  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?setAssertionHook@G3D@@YAXP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
