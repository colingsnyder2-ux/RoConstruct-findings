// roc 2011-06 00954f20  unit: Ogre::UTVertexTangent3DTex::?$SpecializedMeshGen  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00954f20
//
// 00954f20  51                   push ecx
// 00954f21  8b542410             mov edx, dword ptr [esp + 0x10]
// 00954f25  c6042400             mov byte ptr [esp], 0
// 00954f29  8b0424               mov eax, dword ptr [esp]
// 00954f2c  50                   push eax
// 00954f2d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00954f31  52                   push edx
// 00954f32  8b542410             mov edx, dword ptr [esp + 0x10]
// 00954f36  51                   push ecx
// 00954f37  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00954f3b  50                   push eax
// 00954f3c  51                   push ecx
// 00954f3d  52                   push edx
// 00954f3e  e85dfdffff           call 0x954ca0
// 00954f43  83c41c               add esp, 0x1c
// 00954f46  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
