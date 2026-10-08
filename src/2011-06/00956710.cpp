// from server: 100% by auto
// roc 2011-06 00956710  unit: Ogre::UTVertexPositionNormalStudsTex::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00956710
//
// 00956710  51                   push ecx
// 00956711  8b542410             mov edx, dword ptr [esp + 0x10]
// 00956715  c6042400             mov byte ptr [esp], 0
// 00956719  8b0424               mov eax, dword ptr [esp]
// 0095671c  50                   push eax
// 0095671d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00956721  52                   push edx
// 00956722  8b542410             mov edx, dword ptr [esp + 0x10]
// 00956726  51                   push ecx
// 00956727  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0095672b  50                   push eax
// 0095672c  51                   push ecx
// 0095672d  52                   push edx
// 0095672e  e82dfeffff           call 0x956560
// 00956733  83c41c               add esp, 0x1c
// 00956736  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
