// roc 2011-06 007f7fd0  unit: RBX::CircleRadialNormal  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f7fd0
//
// 007f7fd0  8b442404             mov eax, dword ptr [esp + 4]
// 007f7fd4  a38061cd00           mov dword ptr [0xcd6180], eax
// 007f7fd9  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?setAssertionHook@G3D@@YAXP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
