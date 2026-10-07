// roc 2011-06 00688c80  unit: RBX::VKeyframe::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00688c80
//
// 00688c80  51                   push ecx
// 00688c81  56                   push esi
// 00688c82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00688c86  56                   push esi
// 00688c87  c744240800000000     mov dword ptr [esp + 8], 0
// 00688c8f  e81cb0f0ff           call 0x593cb0
// 00688c94  8bc6                 mov eax, esi
// 00688c96  5e                   pop esi
// 00688c97  59                   pop ecx
// 00688c98  c20400               ret 4
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?directory_string@?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@QBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
