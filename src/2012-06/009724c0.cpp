// from server: 100% by auto
// roc 2012-06 009724c0  unit: PasteVerb  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009724c0
//
// 009724c0  8b442404             mov eax, dword ptr [esp + 4]
// 009724c4  a39c80e500           mov dword ptr [0xe5809c], eax
// 009724c9  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?setAssertionHook@G3D@@YAXP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
