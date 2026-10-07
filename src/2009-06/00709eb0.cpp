// roc 2009-06 00709eb0  unit: boost::detail::thread_data_base  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00709eb0
//
// 00709eb0  8b442404             mov eax, dword ptr [esp + 4]
// 00709eb4  a31005a500           mov dword ptr [0xa50510], eax
// 00709eb9  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?setAssertionHook@G3D@@YAXP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
