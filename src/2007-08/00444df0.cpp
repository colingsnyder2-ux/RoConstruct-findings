// roc 2007-08 00444df0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444df0
//
// 00444df0  a1607a8900           mov eax, dword ptr [0x897a60]
// 00444df5  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?assertionHook@G3D@@YAP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@ZXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
