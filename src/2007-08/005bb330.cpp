// from server: 100% by auto
// roc 2007-08 005bb330  unit: RBX::VModelInstance::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb330
//
// 005bb330  51                   push ecx
// 005bb331  56                   push esi
// 005bb332  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005bb336  56                   push esi
// 005bb337  c744240800000000     mov dword ptr [esp + 8], 0
// 005bb33f  e8cc98fbff           call 0x574c10
// 005bb344  8bc6                 mov eax, esi
// 005bb346  5e                   pop esi
// 005bb347  59                   pop ecx
// 005bb348  c20400               ret 4
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?directory_string@?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@QBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
