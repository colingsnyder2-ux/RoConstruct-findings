// roc 2009-12 0073b710  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073b710
//
// 0073b710  8d8104010000         lea eax, [ecx + 0x104]
// 0073b716  c3                   ret 
// library ogre-1.6.4/OgreFontManager.cpp (function ?getCodePointRangeList@Font@Ogre@@QBEABV?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreFontManager.cpp
