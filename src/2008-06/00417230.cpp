// from server: 100% by auto
// roc 2008-06 00417230  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417230
//
// 00417230  6aff                 push -1
// 00417232  683bf47b00           push 0x7bf43b
// 00417237  64a100000000         mov eax, dword ptr fs:[0]
// 0041723d  50                   push eax
// 0041723e  64892500000000       mov dword ptr fs:[0], esp
// 00417245  51                   push ecx
// 00417246  56                   push esi
// 00417247  6a20                 push 0x20
// 00417249  8bf1                 mov esi, ecx
// 0041724b  e8d0962800           call 0x6a0920
// 00417250  83c404               add esp, 4
// 00417253  89442404             mov dword ptr [esp + 4], eax
// 00417257  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041725f  85c0                 test eax, eax
// 00417261  740e                 je 0x417271
// 00417263  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00417267  51                   push ecx
// 00417268  8bc8                 mov ecx, eax
// 0041726a  e891fdffff           call 0x417000
// 0041726f  eb02                 jmp 0x417273
// 00417271  33c0                 xor eax, eax
// 00417273  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00417277  8906                 mov dword ptr [esi], eax
// 00417279  8bc6                 mov eax, esi
// 0041727b  5e                   pop esi
// 0041727c  64890d00000000       mov dword ptr fs:[0], ecx
// 00417283  83c410               add esp, 0x10
// 00417286  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
