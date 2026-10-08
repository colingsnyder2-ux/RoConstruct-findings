// roc 2009-12 004b5290  unit: Ogre::RbxMaterialAdapter  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004b5290
//
// 004b5290  51                   push ecx
// 004b5291  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b5295  56                   push esi
// 004b5296  8b742410             mov esi, dword ptr [esp + 0x10]
// 004b529a  57                   push edi
// 004b529b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004b529f  c644240800           mov byte ptr [esp + 8], 0
// 004b52a4  8b442408             mov eax, dword ptr [esp + 8]
// 004b52a8  50                   push eax
// 004b52a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004b52ad  52                   push edx
// 004b52ae  83c108               add ecx, 8
// 004b52b1  51                   push ecx
// 004b52b2  50                   push eax
// 004b52b3  56                   push esi
// 004b52b4  57                   push edi
// 004b52b5  e896f5ffff           call 0x4b4850
// 004b52ba  8bc6                 mov eax, esi
// 004b52bc  6bc054               imul eax, eax, 0x54
// 004b52bf  83c418               add esp, 0x18
// 004b52c2  03c7                 add eax, edi
// 004b52c4  5f                   pop edi
// 004b52c5  5e                   pop esi
// 004b52c6  59                   pop ecx
// 004b52c7  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@IAEPAV?$basic_option@D@program_options@boost@@PAV345@IABV345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
