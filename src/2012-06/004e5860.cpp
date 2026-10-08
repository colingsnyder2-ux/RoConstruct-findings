// from server: 100% by auto
// roc 2012-06 004e5860  unit: Ogre::RbxMaterialAdapter  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004e5860
//
// 004e5860  51                   push ecx
// 004e5861  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e5865  56                   push esi
// 004e5866  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e586a  57                   push edi
// 004e586b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004e586f  c644240800           mov byte ptr [esp + 8], 0
// 004e5874  8b442408             mov eax, dword ptr [esp + 8]
// 004e5878  50                   push eax
// 004e5879  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004e587d  52                   push edx
// 004e587e  51                   push ecx
// 004e587f  50                   push eax
// 004e5880  56                   push esi
// 004e5881  57                   push edi
// 004e5882  e889f9ffff           call 0x4e5210
// 004e5887  8bce                 mov ecx, esi
// 004e5889  83c418               add esp, 0x18
// 004e588c  c1e104               shl ecx, 4
// 004e588f  03ce                 add ecx, esi
// 004e5891  8d048f               lea eax, [edi + ecx*4]
// 004e5894  5f                   pop edi
// 004e5895  5e                   pop esi
// 004e5896  59                   pop ecx
// 004e5897  c20c00               ret 0xc
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Ufill@?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@IAEPAV?$basic_option@D@program_options@boost@@PAV345@IABV345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
