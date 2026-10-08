// from server: 100% by auto
// roc 2007-08 0057fec0  unit: RBX::Workspace  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057fec0
//
// 0057fec0  8b442404             mov eax, dword ptr [esp + 4]
// 0057fec4  a3ec308c00           mov dword ptr [0x8c30ec], eax
// 0057fec9  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?setAssertionHook@G3D@@YAXP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
