// roc 2008-06 0055d3d0  unit: RBX::MD5HasherImpl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d3d0
//
// 0055d3d0  8b442404             mov eax, dword ptr [esp + 4]
// 0055d3d4  56                   push esi
// 0055d3d5  8bf1                 mov esi, ecx
// 0055d3d7  c70600000000         mov dword ptr [esi], 0
// 0055d3dd  8b08                 mov ecx, dword ptr [eax]
// 0055d3df  85c9                 test ecx, ecx
// 0055d3e1  7415                 je 0x55d3f8
// 0055d3e3  890e                 mov dword ptr [esi], ecx
// 0055d3e5  8b08                 mov ecx, dword ptr [eax]
// 0055d3e7  6a00                 push 0
// 0055d3e9  8d5608               lea edx, [esi + 8]
// 0055d3ec  83c008               add eax, 8
// 0055d3ef  52                   push edx
// 0055d3f0  50                   push eax
// 0055d3f1  8b01                 mov eax, dword ptr [ecx]
// 0055d3f3  ffd0                 call eax
// 0055d3f5  83c40c               add esp, 0xc
// 0055d3f8  8bc6                 mov eax, esi
// 0055d3fa  5e                   pop esi
// 0055d3fb  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??0?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
