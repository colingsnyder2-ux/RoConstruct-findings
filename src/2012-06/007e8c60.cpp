// from server: 100% by auto
// roc 2012-06 007e8c60  unit: RBX::VGuiTextButton::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e8c60
//
// 007e8c60  8b442404             mov eax, dword ptr [esp + 4]
// 007e8c64  56                   push esi
// 007e8c65  8bf1                 mov esi, ecx
// 007e8c67  c70600000000         mov dword ptr [esi], 0
// 007e8c6d  8b08                 mov ecx, dword ptr [eax]
// 007e8c6f  85c9                 test ecx, ecx
// 007e8c71  7415                 je 0x7e8c88
// 007e8c73  890e                 mov dword ptr [esi], ecx
// 007e8c75  8b08                 mov ecx, dword ptr [eax]
// 007e8c77  6a00                 push 0
// 007e8c79  8d5608               lea edx, [esi + 8]
// 007e8c7c  83c008               add eax, 8
// 007e8c7f  52                   push edx
// 007e8c80  50                   push eax
// 007e8c81  8b01                 mov eax, dword ptr [ecx]
// 007e8c83  ffd0                 call eax
// 007e8c85  83c40c               add esp, 0xc
// 007e8c88  8bc6                 mov eax, esi
// 007e8c8a  5e                   pop esi
// 007e8c8b  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??0?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
