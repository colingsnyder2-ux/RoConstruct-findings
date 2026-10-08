// roc 2012-06 008a8ed0  unit: RBX::Block  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a8ed0
//
// 008a8ed0  56                   push esi
// 008a8ed1  8b742408             mov esi, dword ptr [esp + 8]
// 008a8ed5  8b4614               mov eax, dword ptr [esi + 0x14]
// 008a8ed8  85c0                 test eax, eax
// 008a8eda  7409                 je 0x8a8ee5
// 008a8edc  50                   push eax
// 008a8edd  e832920d00           call 0x982114
// 008a8ee2  83c404               add esp, 4
// 008a8ee5  c7461400000000       mov dword ptr [esi + 0x14], 0
// 008a8eec  c7461800000000       mov dword ptr [esi + 0x18], 0
// 008a8ef3  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 008a8efa  5e                   pop esi
// 008a8efb  c20400               ret 4
// library ogre-1.7.0/OgreEdgeListBuilder.cpp (function ?destroy@?$allocator@UEdgeGroup@EdgeData@Ogre@@@std@@QAEXPAUEdgeGroup@EdgeData@Ogre@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreEdgeListBuilder.cpp
