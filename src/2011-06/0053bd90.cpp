// roc 2011-06 0053bd90  unit: G3D::Log  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053bd90
//
// 0053bd90  8b442404             mov eax, dword ptr [esp + 4]
// 0053bd94  a36831c300           mov dword ptr [0xc33168], eax
// 0053bd99  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?setAssertionHook@G3D@@YAXP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
