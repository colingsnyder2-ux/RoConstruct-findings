// roc 2011-06 0093ee50  unit: Ogre::RbxMaterialAdapter  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0093ee50
//
// 0093ee50  51                   push ecx
// 0093ee51  8b542410             mov edx, dword ptr [esp + 0x10]
// 0093ee55  56                   push esi
// 0093ee56  8b742410             mov esi, dword ptr [esp + 0x10]
// 0093ee5a  57                   push edi
// 0093ee5b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0093ee5f  c644240800           mov byte ptr [esp + 8], 0
// 0093ee64  8b442408             mov eax, dword ptr [esp + 8]
// 0093ee68  50                   push eax
// 0093ee69  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0093ee6d  52                   push edx
// 0093ee6e  51                   push ecx
// 0093ee6f  50                   push eax
// 0093ee70  56                   push esi
// 0093ee71  57                   push edi
// 0093ee72  e889f9ffff           call 0x93e800
// 0093ee77  8bce                 mov ecx, esi
// 0093ee79  83c418               add esp, 0x18
// 0093ee7c  c1e104               shl ecx, 4
// 0093ee7f  03ce                 add ecx, esi
// 0093ee81  8d048f               lea eax, [edi + ecx*4]
// 0093ee84  5f                   pop edi
// 0093ee85  5e                   pop esi
// 0093ee86  59                   pop ecx
// 0093ee87  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@IAEPAV?$basic_option@D@program_options@boost@@PAV345@IABV345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
