// roc 2012-06 00623320  unit: RBX::WedgeBuilder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00623320
//
// 00623320  51                   push ecx
// 00623321  8b542410             mov edx, dword ptr [esp + 0x10]
// 00623325  56                   push esi
// 00623326  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062332a  57                   push edi
// 0062332b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0062332f  c644240800           mov byte ptr [esp + 8], 0
// 00623334  8b442408             mov eax, dword ptr [esp + 8]
// 00623338  50                   push eax
// 00623339  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062333d  52                   push edx
// 0062333e  51                   push ecx
// 0062333f  50                   push eax
// 00623340  56                   push esi
// 00623341  57                   push edi
// 00623342  e869ffffff           call 0x6232b0
// 00623347  83c418               add esp, 0x18
// 0062334a  8d04f7               lea eax, [edi + esi*8]
// 0062334d  5f                   pop edi
// 0062334e  5e                   pop esi
// 0062334f  59                   pop ecx
// 00623350  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Ufill@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
