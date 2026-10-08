// from server: 100% by auto
// roc 2012-06 00689380  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00689380
//
// 00689380  51                   push ecx
// 00689381  8b542410             mov edx, dword ptr [esp + 0x10]
// 00689385  c6042400             mov byte ptr [esp], 0
// 00689389  8b0424               mov eax, dword ptr [esp]
// 0068938c  50                   push eax
// 0068938d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00689391  52                   push edx
// 00689392  8b542410             mov edx, dword ptr [esp + 0x10]
// 00689396  51                   push ecx
// 00689397  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0068939b  50                   push eax
// 0068939c  51                   push ecx
// 0068939d  52                   push edx
// 0068939e  e80de8ffff           call 0x687bb0
// 006893a3  83c41c               add esp, 0x1c
// 006893a6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
