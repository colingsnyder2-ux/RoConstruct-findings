// roc 2009-12 007e5290  unit: RBX::Log  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007e5290
//
// 007e5290  8b442404             mov eax, dword ptr [esp + 4]
// 007e5294  a30491b900           mov dword ptr [0xb99104], eax
// 007e5299  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?setAssertionHook@G3D@@YAXP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
