// from server: 100% by auto
// roc 2012-06 00504770  unit: Ogre::RbxMeshPartAdapter  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00504770
//
// 00504770  51                   push ecx
// 00504771  8b542410             mov edx, dword ptr [esp + 0x10]
// 00504775  56                   push esi
// 00504776  8b742410             mov esi, dword ptr [esp + 0x10]
// 0050477a  57                   push edi
// 0050477b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0050477f  c644240800           mov byte ptr [esp + 8], 0
// 00504784  8b442408             mov eax, dword ptr [esp + 8]
// 00504788  50                   push eax
// 00504789  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050478d  52                   push edx
// 0050478e  51                   push ecx
// 0050478f  50                   push eax
// 00504790  56                   push esi
// 00504791  57                   push edi
// 00504792  e8c9fdffff           call 0x504560
// 00504797  83c418               add esp, 0x18
// 0050479a  8d04f7               lea eax, [edi + esi*8]
// 0050479d  5f                   pop edi
// 0050479e  5e                   pop esi
// 0050479f  59                   pop ecx
// 005047a0  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ?_Ufill@?$vector@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@V?$allocator@V?$shared_ptr@Voption_description@program_options@boost@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV34@IABV34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
