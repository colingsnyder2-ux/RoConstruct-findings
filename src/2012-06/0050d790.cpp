// roc 2012-06 0050d790  unit: Ogre::RbxSpatialHashedSceneNode::?3??_findVisibleObjects::NodeVisiter  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0050d790
//
// 0050d790  8bc1                 mov eax, ecx
// 0050d792  33c9                 xor ecx, ecx
// 0050d794  894804               mov dword ptr [eax + 4], ecx
// 0050d797  894808               mov dword ptr [eax + 8], ecx
// 0050d79a  89480c               mov dword ptr [eax + 0xc], ecx
// 0050d79d  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??0?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
