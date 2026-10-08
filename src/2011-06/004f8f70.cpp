// from server: 100% by auto
// roc 2011-06 004f8f70  unit: RBX::Network::Replicator::SendDataJob  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f8f70
//
// 004f8f70  51                   push ecx
// 004f8f71  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004f8f75  56                   push esi
// 004f8f76  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f8f7a  50                   push eax
// 004f8f7b  56                   push esi
// 004f8f7c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004f8f84  e8f7c21700           call 0x675280
// 004f8f89  83c408               add esp, 8
// 004f8f8c  8bc6                 mov eax, esi
// 004f8f8e  5e                   pop esi
// 004f8f8f  59                   pop ecx
// 004f8f90  c3                   ret 
// library boost-1.34.1/libs\program_options\src\convert.cpp (function ?to_internal@program_options@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/convert.cpp
