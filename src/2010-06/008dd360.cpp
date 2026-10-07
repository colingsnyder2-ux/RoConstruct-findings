// roc 2010-06 008dd360  unit: Ogre::RbxMaterialAdapter  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008dd360
//
// 008dd360  51                   push ecx
// 008dd361  8b542410             mov edx, dword ptr [esp + 0x10]
// 008dd365  56                   push esi
// 008dd366  8b742410             mov esi, dword ptr [esp + 0x10]
// 008dd36a  57                   push edi
// 008dd36b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008dd36f  c644240800           mov byte ptr [esp + 8], 0
// 008dd374  8b442408             mov eax, dword ptr [esp + 8]
// 008dd378  50                   push eax
// 008dd379  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008dd37d  52                   push edx
// 008dd37e  83c108               add ecx, 8
// 008dd381  51                   push ecx
// 008dd382  50                   push eax
// 008dd383  56                   push esi
// 008dd384  57                   push edi
// 008dd385  e896f5ffff           call 0x8dc920
// 008dd38a  8bc6                 mov eax, esi
// 008dd38c  6bc054               imul eax, eax, 0x54
// 008dd38f  83c418               add esp, 0x18
// 008dd392  03c7                 add eax, edi
// 008dd394  5f                   pop edi
// 008dd395  5e                   pop esi
// 008dd396  59                   pop ecx
// 008dd397  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@IAEPAV?$basic_option@D@program_options@boost@@PAV345@IABV345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
