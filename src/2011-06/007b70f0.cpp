// roc 2011-06 007b70f0  unit: RBX::SpatialFilter  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b70f0
//
// 007b70f0  51                   push ecx
// 007b70f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b70f5  56                   push esi
// 007b70f6  8b742410             mov esi, dword ptr [esp + 0x10]
// 007b70fa  57                   push edi
// 007b70fb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007b70ff  c644240800           mov byte ptr [esp + 8], 0
// 007b7104  8b442408             mov eax, dword ptr [esp + 8]
// 007b7108  50                   push eax
// 007b7109  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b710d  52                   push edx
// 007b710e  51                   push ecx
// 007b710f  50                   push eax
// 007b7110  56                   push esi
// 007b7111  57                   push edi
// 007b7112  e899ffffff           call 0x7b70b0
// 007b7117  83c418               add esp, 0x18
// 007b711a  8d04f7               lea eax, [edi + esi*8]
// 007b711d  5f                   pop edi
// 007b711e  5e                   pop esi
// 007b711f  59                   pop ecx
// 007b7120  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Ufill@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
