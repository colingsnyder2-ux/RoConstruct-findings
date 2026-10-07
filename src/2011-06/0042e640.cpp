// roc 2011-06 0042e640  unit: MainLogManager  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042e640
//
// 0042e640  51                   push ecx
// 0042e641  8b542410             mov edx, dword ptr [esp + 0x10]
// 0042e645  56                   push esi
// 0042e646  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042e64a  57                   push edi
// 0042e64b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042e64f  c644240800           mov byte ptr [esp + 8], 0
// 0042e654  8b442408             mov eax, dword ptr [esp + 8]
// 0042e658  50                   push eax
// 0042e659  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0042e65d  52                   push edx
// 0042e65e  51                   push ecx
// 0042e65f  50                   push eax
// 0042e660  56                   push esi
// 0042e661  57                   push edi
// 0042e662  e869f4ffff           call 0x42dad0
// 0042e667  83c418               add esp, 0x18
// 0042e66a  8d0cf500000000       lea ecx, [esi*8]
// 0042e671  2bce                 sub ecx, esi
// 0042e673  8d048f               lea eax, [edi + ecx*4]
// 0042e676  5f                   pop edi
// 0042e677  5e                   pop esi
// 0042e678  59                   pop ecx
// 0042e679  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PAV32@IABV32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
