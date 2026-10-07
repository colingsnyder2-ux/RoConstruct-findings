// roc 2010-06 00656750  unit: RBX::VKeyframe::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00656750
//
// 00656750  51                   push ecx
// 00656751  56                   push esi
// 00656752  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00656756  56                   push esi
// 00656757  c744240800000000     mov dword ptr [esp + 8], 0
// 0065675f  e80ce8f3ff           call 0x594f70
// 00656764  8bc6                 mov eax, esi
// 00656766  5e                   pop esi
// 00656767  59                   pop ecx
// 00656768  c20400               ret 4
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?directory_string@?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@QBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
