// roc 2010-06 0066fe00  unit: RBX::VPartInstance::?$FilteredSelection  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066fe00
//
// 0066fe00  8b442404             mov eax, dword ptr [esp + 4]
// 0066fe04  56                   push esi
// 0066fe05  8bf1                 mov esi, ecx
// 0066fe07  c70600000000         mov dword ptr [esi], 0
// 0066fe0d  8b08                 mov ecx, dword ptr [eax]
// 0066fe0f  85c9                 test ecx, ecx
// 0066fe11  7415                 je 0x66fe28
// 0066fe13  890e                 mov dword ptr [esi], ecx
// 0066fe15  8b08                 mov ecx, dword ptr [eax]
// 0066fe17  6a00                 push 0
// 0066fe19  8d5608               lea edx, [esi + 8]
// 0066fe1c  83c008               add eax, 8
// 0066fe1f  52                   push edx
// 0066fe20  50                   push eax
// 0066fe21  8b01                 mov eax, dword ptr [ecx]
// 0066fe23  ffd0                 call eax
// 0066fe25  83c40c               add esp, 0xc
// 0066fe28  8bc6                 mov eax, esi
// 0066fe2a  5e                   pop esi
// 0066fe2b  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??0?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
