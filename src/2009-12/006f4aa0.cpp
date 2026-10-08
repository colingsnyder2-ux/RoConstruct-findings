// roc 2009-12 006f4aa0  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f4aa0
//
// 006f4aa0  51                   push ecx
// 006f4aa1  56                   push esi
// 006f4aa2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f4aa6  56                   push esi
// 006f4aa7  c744240800000000     mov dword ptr [esp + 8], 0
// 006f4aaf  e82cfdffff           call 0x6f47e0
// 006f4ab4  8bc6                 mov eax, esi
// 006f4ab6  5e                   pop esi
// 006f4ab7  59                   pop ecx
// 006f4ab8  c20400               ret 4
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?directory_string@?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@QBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
