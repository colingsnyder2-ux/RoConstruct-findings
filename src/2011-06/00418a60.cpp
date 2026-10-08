// from server: 100% by auto
// roc 2011-06 00418a60  unit: VCRbxObject::?$CComObjectNoLock  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00418a60
//
// 00418a60  51                   push ecx
// 00418a61  8b542410             mov edx, dword ptr [esp + 0x10]
// 00418a65  56                   push esi
// 00418a66  8b742410             mov esi, dword ptr [esp + 0x10]
// 00418a6a  57                   push edi
// 00418a6b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00418a6f  c644240800           mov byte ptr [esp + 8], 0
// 00418a74  8b442408             mov eax, dword ptr [esp + 8]
// 00418a78  50                   push eax
// 00418a79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00418a7d  52                   push edx
// 00418a7e  51                   push ecx
// 00418a7f  50                   push eax
// 00418a80  56                   push esi
// 00418a81  57                   push edi
// 00418a82  e8d9fcffff           call 0x418760
// 00418a87  83c418               add esp, 0x18
// 00418a8a  8d04f7               lea eax, [edi + esi*8]
// 00418a8d  5f                   pop edi
// 00418a8e  5e                   pop esi
// 00418a8f  59                   pop ecx
// 00418a90  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Ufill@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
