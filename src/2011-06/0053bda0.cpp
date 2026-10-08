// from server: 100% by auto
// roc 2011-06 0053bda0  unit: G3D::Log  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053bda0
//
// 0053bda0  8b442404             mov eax, dword ptr [esp + 4]
// 0053bda4  a36c31c300           mov dword ptr [0xc3316c], eax
// 0053bda9  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?setAssertionHook@G3D@@YAXP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
