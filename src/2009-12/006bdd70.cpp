// roc 2009-12 006bdd70  unit: CPropGrid::UpdateItemsJob  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bdd70
//
// 006bdd70  8b442404             mov eax, dword ptr [esp + 4]
// 006bdd74  56                   push esi
// 006bdd75  8bf1                 mov esi, ecx
// 006bdd77  c70600000000         mov dword ptr [esi], 0
// 006bdd7d  8b08                 mov ecx, dword ptr [eax]
// 006bdd7f  85c9                 test ecx, ecx
// 006bdd81  7415                 je 0x6bdd98
// 006bdd83  890e                 mov dword ptr [esi], ecx
// 006bdd85  8b08                 mov ecx, dword ptr [eax]
// 006bdd87  6a00                 push 0
// 006bdd89  8d5608               lea edx, [esi + 8]
// 006bdd8c  83c008               add eax, 8
// 006bdd8f  52                   push edx
// 006bdd90  50                   push eax
// 006bdd91  8b01                 mov eax, dword ptr [ecx]
// 006bdd93  ffd0                 call eax
// 006bdd95  83c40c               add esp, 0xc
// 006bdd98  8bc6                 mov eax, esi
// 006bdd9a  5e                   pop esi
// 006bdd9b  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??0?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
