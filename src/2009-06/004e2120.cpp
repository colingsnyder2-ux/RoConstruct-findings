// from server: 100% by auto
// roc 2009-06 004e2120  unit: RBX::Network::VConcurrentRakPeer::?$sp_counted_impl_p  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e2120
//
// 004e2120  51                   push ecx
// 004e2121  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e2125  56                   push esi
// 004e2126  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e212a  50                   push eax
// 004e212b  56                   push esi
// 004e212c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004e2134  e8379a1b00           call 0x69bb70
// 004e2139  83c408               add esp, 8
// 004e213c  8bc6                 mov eax, esi
// 004e213e  5e                   pop esi
// 004e213f  59                   pop ecx
// 004e2140  c3                   ret 
// library boost-1.34.1/libs\program_options\src\convert.cpp (function ?to_internal@program_options@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/convert.cpp
