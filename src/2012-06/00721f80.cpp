// from server: 100% by auto
// roc 2012-06 00721f80  unit: RBX::$$A6AXABVHeartbeat::?$signal::Vslot::?$callable  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00721f80
//
// 00721f80  51                   push ecx
// 00721f81  8b542410             mov edx, dword ptr [esp + 0x10]
// 00721f85  56                   push esi
// 00721f86  8b742410             mov esi, dword ptr [esp + 0x10]
// 00721f8a  57                   push edi
// 00721f8b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00721f8f  c644240800           mov byte ptr [esp + 8], 0
// 00721f94  8b442408             mov eax, dword ptr [esp + 8]
// 00721f98  50                   push eax
// 00721f99  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00721f9d  52                   push edx
// 00721f9e  51                   push ecx
// 00721f9f  50                   push eax
// 00721fa0  56                   push esi
// 00721fa1  57                   push edi
// 00721fa2  e8a9832500           call 0x97a350
// 00721fa7  83c418               add esp, 0x18
// 00721faa  8d04f7               lea eax, [edi + esi*8]
// 00721fad  5f                   pop edi
// 00721fae  5e                   pop esi
// 00721faf  59                   pop ecx
// 00721fb0  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Ufill@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
