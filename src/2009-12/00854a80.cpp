// roc 2009-12 00854a80  unit: CXTPTabClientWnd::CWorkspace  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854a80
//
// 00854a80  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00854a86  c3                   ret 
// library ogre-1.6.4/OgreMeshManager.cpp (function ?getListener@MeshManager@Ogre@@QAEPAVMeshSerializerListener@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreMeshManager.cpp
