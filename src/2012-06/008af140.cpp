// from server: 100% by auto
// roc 2012-06 008af140  unit: RBX::Flag  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008af140
//
// 008af140  51                   push ecx
// 008af141  8b542410             mov edx, dword ptr [esp + 0x10]
// 008af145  56                   push esi
// 008af146  8b742410             mov esi, dword ptr [esp + 0x10]
// 008af14a  57                   push edi
// 008af14b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008af14f  c644240800           mov byte ptr [esp + 8], 0
// 008af154  8b442408             mov eax, dword ptr [esp + 8]
// 008af158  50                   push eax
// 008af159  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008af15d  52                   push edx
// 008af15e  51                   push ecx
// 008af15f  50                   push eax
// 008af160  56                   push esi
// 008af161  57                   push edi
// 008af162  e859ffffff           call 0x8af0c0
// 008af167  83c418               add esp, 0x18
// 008af16a  8d04f7               lea eax, [edi + esi*8]
// 008af16d  5f                   pop edi
// 008af16e  5e                   pop esi
// 008af16f  59                   pop ecx
// 008af170  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Ufill@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
