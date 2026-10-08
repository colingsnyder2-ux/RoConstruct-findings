// roc 2009-12 006921c0  unit: RBX::VHopperBin::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006921c0
//
// 006921c0  8b8134010000         mov eax, dword ptr [ecx + 0x134]
// 006921c6  c3                   ret 
// library ogre-1.6.4/OgreEntity.cpp (function ?_getSkelAnimVertexData@Entity@Ogre@@QBEPAVVertexData@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreEntity.cpp
