// from server: 100% by auto
// roc 2011-06 004c6b00  unit: RBX::Network::VPlayer::?$EventDesc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c6b00
//
// 004c6b00  a1cc7fcb00           mov eax, dword ptr [0xcb7fcc]
// 004c6b05  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?assertionHook@G3D@@YAP6A_NPBDABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0HAA_N_N@ZXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
