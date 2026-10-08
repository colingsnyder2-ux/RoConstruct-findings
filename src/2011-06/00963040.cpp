// from server: 100% by auto
// roc 2011-06 00963040  unit: Ogre::RbxArchiveFactory  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00963040
//
// 00963040  51                   push ecx
// 00963041  8b542410             mov edx, dword ptr [esp + 0x10]
// 00963045  56                   push esi
// 00963046  8b742410             mov esi, dword ptr [esp + 0x10]
// 0096304a  57                   push edi
// 0096304b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0096304f  c644240800           mov byte ptr [esp + 8], 0
// 00963054  8b442408             mov eax, dword ptr [esp + 8]
// 00963058  50                   push eax
// 00963059  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0096305d  52                   push edx
// 0096305e  51                   push ecx
// 0096305f  50                   push eax
// 00963060  56                   push esi
// 00963061  57                   push edi
// 00963062  e8d9fcffff           call 0x962d40
// 00963067  83c418               add esp, 0x18
// 0096306a  8d0cf500000000       lea ecx, [esi*8]
// 00963071  2bce                 sub ecx, esi
// 00963073  8d048f               lea eax, [edi + ecx*4]
// 00963076  5f                   pop edi
// 00963077  5e                   pop esi
// 00963078  59                   pop ecx
// 00963079  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PAV32@IABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
