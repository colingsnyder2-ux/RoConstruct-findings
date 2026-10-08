// from server: 100% by auto
// roc 2011-06 007a1490  unit: RBX::Network::VPersistentDataStore::?$sp_counted_impl_p  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007a1490
//
// 007a1490  51                   push ecx
// 007a1491  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a1495  56                   push esi
// 007a1496  8b742410             mov esi, dword ptr [esp + 0x10]
// 007a149a  57                   push edi
// 007a149b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007a149f  c644240800           mov byte ptr [esp + 8], 0
// 007a14a4  8b442408             mov eax, dword ptr [esp + 8]
// 007a14a8  50                   push eax
// 007a14a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a14ad  52                   push edx
// 007a14ae  51                   push ecx
// 007a14af  50                   push eax
// 007a14b0  56                   push esi
// 007a14b1  57                   push edi
// 007a14b2  e8a9feffff           call 0x7a1360
// 007a14b7  83c418               add esp, 0x18
// 007a14ba  8d0cf500000000       lea ecx, [esi*8]
// 007a14c1  2bce                 sub ecx, esi
// 007a14c3  8d048f               lea eax, [edi + ecx*4]
// 007a14c6  5f                   pop edi
// 007a14c7  5e                   pop esi
// 007a14c8  59                   pop ecx
// 007a14c9  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PAV32@IABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
