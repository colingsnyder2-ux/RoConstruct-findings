// roc 2010-06 0065f320  unit: RBX::VPlayerMouse::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0065f320
//
// 0065f320  51                   push ecx
// 0065f321  56                   push esi
// 0065f322  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0065f326  56                   push esi
// 0065f327  c744240800000000     mov dword ptr [esp + 8], 0
// 0065f32f  e82cfdffff           call 0x65f060
// 0065f334  8bc6                 mov eax, esi
// 0065f336  5e                   pop esi
// 0065f337  59                   pop ecx
// 0065f338  c20400               ret 4
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?directory_string@?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@QBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
