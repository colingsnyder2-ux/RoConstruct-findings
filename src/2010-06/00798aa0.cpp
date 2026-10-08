// from server: 100% by auto
// roc 2010-06 00798aa0  unit: RBX::Log  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00798aa0
//
// 00798aa0  8b442404             mov eax, dword ptr [esp + 4]
// 00798aa4  a3dc37c200           mov dword ptr [0xc237dc], eax
// 00798aa9  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?setAssertionHook@G3D@@YAXP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
