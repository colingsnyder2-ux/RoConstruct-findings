// roc 2009-12 0074adc0  unit: RBX::Handles  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0074adc0
//
// 0074adc0  8b81c0010000         mov eax, dword ptr [ecx + 0x1c0]
// 0074adc6  c3                   ret 
// library ogre-1.6.4/OgreAutoParamDataSource.cpp (function ?getIndexData@GeometryBucket@InstancedGeometry@Ogre@@QBEPBVIndexData@3@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp
