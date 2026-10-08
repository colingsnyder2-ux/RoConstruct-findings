// roc 2009-12 0075fff0  unit: RBX::SelectionLasso  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075fff0
//
// 0075fff0  8d81b0000000         lea eax, [ecx + 0xb0]
// 0075fff6  c3                   ret 
// library ogre-1.6.4/OgreAutoParamDataSource.cpp (function ?getRenderOperationVector@InstancedGeometry@Ogre@@QAEAAV?$vector@PAVRenderOperation@Ogre@@V?$allocator@PAVRenderOperation@Ogre@@@std@@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
