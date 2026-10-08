// from server: 100% by auto
// roc 2011-06 004a91d0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a91d0
//
// 004a91d0  51                   push ecx
// 004a91d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a91d5  c6042400             mov byte ptr [esp], 0
// 004a91d9  8b0424               mov eax, dword ptr [esp]
// 004a91dc  50                   push eax
// 004a91dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 004a91e1  52                   push edx
// 004a91e2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a91e6  51                   push ecx
// 004a91e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004a91eb  50                   push eax
// 004a91ec  51                   push ecx
// 004a91ed  52                   push edx
// 004a91ee  e8dde1ffff           call 0x4a73d0
// 004a91f3  83c41c               add esp, 0x1c
// 004a91f6  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Ucopy@PAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PAV21@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
