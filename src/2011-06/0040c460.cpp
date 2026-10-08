// from server: 100% by auto
// roc 2011-06 0040c460  unit: boost::gregorian::Ubad_month::?$error_info_injector  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040c460
//
// 0040c460  8b442404             mov eax, dword ptr [esp + 4]
// 0040c464  56                   push esi
// 0040c465  8bf1                 mov esi, ecx
// 0040c467  50                   push eax
// 0040c468  8d4c240c             lea ecx, [esp + 0xc]
// 0040c46c  e8dff7ffff           call 0x40bc50
// 0040c471  3bc6                 cmp eax, esi
// 0040c473  7408                 je 0x40c47d
// 0040c475  8b16                 mov edx, dword ptr [esi]
// 0040c477  8b08                 mov ecx, dword ptr [eax]
// 0040c479  8910                 mov dword ptr [eax], edx
// 0040c47b  890e                 mov dword ptr [esi], ecx
// 0040c47d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040c481  85c9                 test ecx, ecx
// 0040c483  7408                 je 0x40c48d
// 0040c485  8b01                 mov eax, dword ptr [ecx]
// 0040c487  8b10                 mov edx, dword ptr [eax]
// 0040c489  6a01                 push 1
// 0040c48b  ffd2                 call edx
// 0040c48d  8bc6                 mov eax, esi
// 0040c48f  5e                   pop esi
// 0040c490  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
