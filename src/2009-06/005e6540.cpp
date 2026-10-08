// from server: 100% by auto
// roc 2009-06 005e6540  unit: boost::any::placeholder  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e6540
//
// 005e6540  8b442404             mov eax, dword ptr [esp + 4]
// 005e6544  56                   push esi
// 005e6545  8bf1                 mov esi, ecx
// 005e6547  50                   push eax
// 005e6548  8d4c240c             lea ecx, [esp + 0xc]
// 005e654c  e8dff1ffff           call 0x5e5730
// 005e6551  3bc6                 cmp eax, esi
// 005e6553  7408                 je 0x5e655d
// 005e6555  8b16                 mov edx, dword ptr [esi]
// 005e6557  8b08                 mov ecx, dword ptr [eax]
// 005e6559  8910                 mov dword ptr [eax], edx
// 005e655b  890e                 mov dword ptr [esi], ecx
// 005e655d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e6561  85c9                 test ecx, ecx
// 005e6563  7408                 je 0x5e656d
// 005e6565  8b01                 mov eax, dword ptr [ecx]
// 005e6567  8b10                 mov edx, dword ptr [eax]
// 005e6569  6a01                 push 1
// 005e656b  ffd2                 call edx
// 005e656d  8bc6                 mov eax, esi
// 005e656f  5e                   pop esi
// 005e6570  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
