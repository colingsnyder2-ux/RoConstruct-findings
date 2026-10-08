// roc 2009-12 00453370  unit: CRobloxControlMaterialSelector  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00453370
//
// 00453370  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 00453376  c3                   ret 
// library ogre-1.6.4/OgreEntity.cpp (function ?_getHardwareVertexAnimVertexData@Entity@Ogre@@QBEPAVVertexData@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreEntity.cpp
