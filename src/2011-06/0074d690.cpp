// from server: 100% by auto
// roc 2011-06 0074d690  unit: RBX::BallBallContact  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0074d690
//
// 0074d690  51                   push ecx
// 0074d691  8b542410             mov edx, dword ptr [esp + 0x10]
// 0074d695  56                   push esi
// 0074d696  8b742410             mov esi, dword ptr [esp + 0x10]
// 0074d69a  57                   push edi
// 0074d69b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0074d69f  c644240800           mov byte ptr [esp + 8], 0
// 0074d6a4  8b442408             mov eax, dword ptr [esp + 8]
// 0074d6a8  50                   push eax
// 0074d6a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0074d6ad  52                   push edx
// 0074d6ae  51                   push ecx
// 0074d6af  50                   push eax
// 0074d6b0  56                   push esi
// 0074d6b1  57                   push edi
// 0074d6b2  e8e9f8ffff           call 0x74cfa0
// 0074d6b7  83c418               add esp, 0x18
// 0074d6ba  8d04f7               lea eax, [edi + esi*8]
// 0074d6bd  5f                   pop edi
// 0074d6be  5e                   pop esi
// 0074d6bf  59                   pop ecx
// 0074d6c0  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Ufill@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
