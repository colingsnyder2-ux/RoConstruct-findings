// roc 2011-06 0093c0f0  unit: Ogre::RbxTextureCompositorSceneManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0093c0f0
//
// 0093c0f0  51                   push ecx
// 0093c0f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0093c0f5  c6042400             mov byte ptr [esp], 0
// 0093c0f9  8b0424               mov eax, dword ptr [esp]
// 0093c0fc  50                   push eax
// 0093c0fd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0093c101  52                   push edx
// 0093c102  8b542410             mov edx, dword ptr [esp + 0x10]
// 0093c106  51                   push ecx
// 0093c107  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0093c10b  50                   push eax
// 0093c10c  51                   push ecx
// 0093c10d  52                   push edx
// 0093c10e  e87deaffff           call 0x93ab90
// 0093c113  83c41c               add esp, 0x1c
// 0093c116  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
