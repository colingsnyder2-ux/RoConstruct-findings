// from server: 100% by auto
// roc 2011-06 004a7f50  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a7f50
//
// 004a7f50  8b442404             mov eax, dword ptr [esp + 4]
// 004a7f54  56                   push esi
// 004a7f55  8bf1                 mov esi, ecx
// 004a7f57  c70600000000         mov dword ptr [esi], 0
// 004a7f5d  8b08                 mov ecx, dword ptr [eax]
// 004a7f5f  85c9                 test ecx, ecx
// 004a7f61  7415                 je 0x4a7f78
// 004a7f63  890e                 mov dword ptr [esi], ecx
// 004a7f65  8b08                 mov ecx, dword ptr [eax]
// 004a7f67  6a00                 push 0
// 004a7f69  8d5608               lea edx, [esi + 8]
// 004a7f6c  83c008               add eax, 8
// 004a7f6f  52                   push edx
// 004a7f70  50                   push eax
// 004a7f71  8b01                 mov eax, dword ptr [ecx]
// 004a7f73  ffd0                 call eax
// 004a7f75  83c40c               add esp, 0xc
// 004a7f78  8bc6                 mov eax, esi
// 004a7f7a  5e                   pop esi
// 004a7f7b  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??0?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
