// from server: 100% by auto
// roc 2012-06 007a5d50  unit: RBX::VPose::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a5d50
//
// 007a5d50  51                   push ecx
// 007a5d51  56                   push esi
// 007a5d52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a5d56  56                   push esi
// 007a5d57  c744240800000000     mov dword ptr [esp + 8], 0
// 007a5d5f  e88ca9edff           call 0x6806f0
// 007a5d64  8bc6                 mov eax, esi
// 007a5d66  5e                   pop esi
// 007a5d67  59                   pop ecx
// 007a5d68  c20400               ret 4
// library boost-1.34.1/libs\filesystem\src\operations.cpp (function ?directory_string@?$basic_path@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Upath_traits@filesystem@boost@@@filesystem@boost@@QBE?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/filesystem/src/operations.cpp
