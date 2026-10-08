// roc 2009-12 00513330  unit: RBX::Network::Players  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00513330
//
// 00513330  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 00513336  c3                   ret 
// library ogre-1.6.4/OgreAnimation.cpp (function ?getVertexBufferUsage@Mesh@Ogre@@QBE?AW4Usage@HardwareBuffer@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAnimation.cpp
