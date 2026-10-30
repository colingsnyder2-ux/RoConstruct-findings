// roc 2009-12 0073b700  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073b700
//
// 0073b700  8d81f8000000         lea eax, [ecx + 0xf8]
// 0073b706  c3                   ret 
// library ogre-1.6.4/OgreFrustum.cpp (function ?getFrustumOffset@Frustum@Ogre@@UBEABVVector2@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreFrustum.cpp
