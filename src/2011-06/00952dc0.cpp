// roc 2011-06 00952dc0  unit: Ogre::UTVertexBasic::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00952dc0
//
// 00952dc0  51                   push ecx
// 00952dc1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00952dc5  c6042400             mov byte ptr [esp], 0
// 00952dc9  8b0424               mov eax, dword ptr [esp]
// 00952dcc  50                   push eax
// 00952dcd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00952dd1  52                   push edx
// 00952dd2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00952dd6  51                   push ecx
// 00952dd7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00952ddb  50                   push eax
// 00952ddc  51                   push ecx
// 00952ddd  52                   push edx
// 00952dde  e86d76ddff           call 0x72a450
// 00952de3  83c41c               add esp, 0x1c
// 00952de6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
