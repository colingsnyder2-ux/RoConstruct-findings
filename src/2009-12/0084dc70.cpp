// roc 2009-12 0084dc70  unit: CXTPPropertyGrid  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084dc70
//
// 0084dc70  8b8184010000         mov eax, dword ptr [ecx + 0x184]
// 0084dc76  c3                   ret 
// library ogre-1.6.4/OgreEntity.cpp (function ?_getSoftwareVertexAnimVertexData@Entity@Ogre@@QBEPAVVertexData@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreEntity.cpp
