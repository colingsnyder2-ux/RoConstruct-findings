// from server: 100% by auto
// roc 2008-06 00608e70  unit: RBX::VModelInstance::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608e70
//
// 00608e70  51                   push ecx
// 00608e71  56                   push esi
// 00608e72  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00608e76  56                   push esi
// 00608e77  c744240800000000     mov dword ptr [esp + 8], 0
// 00608e7f  e84c12f9ff           call 0x59a0d0
// 00608e84  8bc6                 mov eax, esi
// 00608e86  5e                   pop esi
// 00608e87  59                   pop ecx
// 00608e88  c20400               ret 4
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?directory_string@?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@QBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
