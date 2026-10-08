// from server: 100% by auto
// roc 2007-08 0056e500  unit: RBX::VContentId::?$holder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e500
//
// 0056e500  8b442404             mov eax, dword ptr [esp + 4]
// 0056e504  56                   push esi
// 0056e505  8bf1                 mov esi, ecx
// 0056e507  50                   push eax
// 0056e508  8d4c240c             lea ecx, [esp + 0xc]
// 0056e50c  e81ff8ffff           call 0x56dd30
// 0056e511  8b08                 mov ecx, dword ptr [eax]
// 0056e513  8b16                 mov edx, dword ptr [esi]
// 0056e515  8910                 mov dword ptr [eax], edx
// 0056e517  890e                 mov dword ptr [esi], ecx
// 0056e519  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056e51d  85c9                 test ecx, ecx
// 0056e51f  7408                 je 0x56e529
// 0056e521  8b01                 mov eax, dword ptr [ecx]
// 0056e523  8b10                 mov edx, dword ptr [eax]
// 0056e525  6a01                 push 1
// 0056e527  ffd2                 call edx
// 0056e529  8bc6                 mov eax, esi
// 0056e52b  5e                   pop esi
// 0056e52c  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\value_semantic.cpp (function ??$?4V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@any@boost@@QAEAAV01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/value_semantic.cpp
