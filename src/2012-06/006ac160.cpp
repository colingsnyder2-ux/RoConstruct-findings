// from server: 100% by auto
// roc 2012-06 006ac160  unit: RBX::Reflection::VVariant::PAV?$vector::?$sp_counted_impl_pd  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006ac160
//
// 006ac160  51                   push ecx
// 006ac161  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ac165  c6042400             mov byte ptr [esp], 0
// 006ac169  8b0424               mov eax, dword ptr [esp]
// 006ac16c  50                   push eax
// 006ac16d  8b442414             mov eax, dword ptr [esp + 0x14]
// 006ac171  52                   push edx
// 006ac172  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ac176  51                   push ecx
// 006ac177  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ac17b  50                   push eax
// 006ac17c  51                   push ecx
// 006ac17d  52                   push edx
// 006ac17e  e8ddcdffff           call 0x6a8f60
// 006ac183  83c41c               add esp, 0x1c
// 006ac186  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
