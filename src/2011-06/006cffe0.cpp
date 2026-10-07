// roc 2011-06 006cffe0  unit: RBX::Mechanism  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006cffe0
//
// 006cffe0  51                   push ecx
// 006cffe1  8b542410             mov edx, dword ptr [esp + 0x10]
// 006cffe5  56                   push esi
// 006cffe6  8b742410             mov esi, dword ptr [esp + 0x10]
// 006cffea  57                   push edi
// 006cffeb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006cffef  c644240800           mov byte ptr [esp + 8], 0
// 006cfff4  8b442408             mov eax, dword ptr [esp + 8]
// 006cfff8  50                   push eax
// 006cfff9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006cfffd  52                   push edx
// 006cfffe  51                   push ecx
// 006cffff  50                   push eax
// 006d0000  56                   push esi
// 006d0001  57                   push edi
// 006d0002  e819fcffff           call 0x6cfc20
// 006d0007  83c418               add esp, 0x18
// 006d000a  8d04f7               lea eax, [edi + esi*8]
// 006d000d  5f                   pop edi
// 006d000e  5e                   pop esi
// 006d000f  59                   pop ecx
// 006d0010  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Ufill@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
