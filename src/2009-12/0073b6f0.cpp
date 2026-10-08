// roc 2009-12 0073b6f0  unit: RBX::Lua::WeakThreadRef::VNode::?$sp_counted_impl_p  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073b6f0
//
// 0073b6f0  8d81ec000000         lea eax, [ecx + 0xec]
// 0073b6f6  c3                   ret 
// library ogre-1.6.4/OgreMesh.cpp (function ?getBounds@Mesh@Ogre@@QBEABVAxisAlignedBox@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreMesh.cpp
