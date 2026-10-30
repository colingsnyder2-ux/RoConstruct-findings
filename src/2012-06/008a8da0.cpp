// roc 2012-06 008a8da0  unit: RBX::Block  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a8da0
//
// 008a8da0  56                   push esi
// 008a8da1  8bf1                 mov esi, ecx
// 008a8da3  8b4614               mov eax, dword ptr [esi + 0x14]
// 008a8da6  85c0                 test eax, eax
// 008a8da8  7409                 je 0x8a8db3
// 008a8daa  50                   push eax
// 008a8dab  e864930d00           call 0x982114
// 008a8db0  83c404               add esp, 4
// 008a8db3  c7461400000000       mov dword ptr [esi + 0x14], 0
// 008a8dba  c7461800000000       mov dword ptr [esi + 0x18], 0
// 008a8dc1  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 008a8dc8  5e                   pop esi
// 008a8dc9  c3                   ret 
// library ogre-1.7.0/OgreEdgeListBuilder.cpp (function ??1EdgeGroup@EdgeData@Ogre@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreEdgeListBuilder.cpp
