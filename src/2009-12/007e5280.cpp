// roc 2009-12 007e5280  unit: RBX::Log  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e5280
//
// 007e5280  8b442404             mov eax, dword ptr [esp + 4]
// 007e5284  a30091b900           mov dword ptr [0xb99100], eax
// 007e5289  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?setAssertionHook@G3D@@YAXP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
