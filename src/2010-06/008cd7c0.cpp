// roc 2010-06 008cd7c0  unit: Ogre::RbxMeshLoader  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008cd7c0
//
// 008cd7c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008cd7c4  e8a7f0ffff           call 0x8cc870
// 008cd7c9  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?destroy@?$allocator@V?$basic_option@D@program_options@boost@@@std@@QAEXPAV?$basic_option@D@program_options@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
