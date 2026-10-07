// roc 2011-06 00953f70  unit: Ogre::UTVertexSurfaceTexTangent::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00953f70
//
// 00953f70  51                   push ecx
// 00953f71  8b542410             mov edx, dword ptr [esp + 0x10]
// 00953f75  c6042400             mov byte ptr [esp], 0
// 00953f79  8b0424               mov eax, dword ptr [esp]
// 00953f7c  50                   push eax
// 00953f7d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00953f81  52                   push edx
// 00953f82  8b542410             mov edx, dword ptr [esp + 0x10]
// 00953f86  51                   push ecx
// 00953f87  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00953f8b  50                   push eax
// 00953f8c  51                   push ecx
// 00953f8d  52                   push edx
// 00953f8e  e84dfdffff           call 0x953ce0
// 00953f93  83c41c               add esp, 0x1c
// 00953f96  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
