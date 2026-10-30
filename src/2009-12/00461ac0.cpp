// roc 2009-12 00461ac0  unit: G3D::TextureManager::TextureArgs  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00461ac0
//
// 00461ac0  8d8114010000         lea eax, [ecx + 0x114]
// 00461ac6  c3                   ret 
// library ogre-1.6.4/OgreBillboardSet.cpp (function ?getMaterialName@BillboardSet@Ogre@@UBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreBillboardSet.cpp
