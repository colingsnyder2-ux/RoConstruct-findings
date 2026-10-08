// from server: 100% by auto
// roc 2009-06 005da350  unit: RBX::ContentProvider::HashApprovalDictionary::VValue::?$sp_counted_impl_p  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005da350
//
// 005da350  8b442404             mov eax, dword ptr [esp + 4]
// 005da354  56                   push esi
// 005da355  8bf1                 mov esi, ecx
// 005da357  c70600000000         mov dword ptr [esi], 0
// 005da35d  8b08                 mov ecx, dword ptr [eax]
// 005da35f  85c9                 test ecx, ecx
// 005da361  7415                 je 0x5da378
// 005da363  890e                 mov dword ptr [esi], ecx
// 005da365  8b08                 mov ecx, dword ptr [eax]
// 005da367  6a00                 push 0
// 005da369  8d5608               lea edx, [esi + 8]
// 005da36c  83c008               add eax, 8
// 005da36f  52                   push edx
// 005da370  50                   push eax
// 005da371  8b01                 mov eax, dword ptr [ecx]
// 005da373  ffd0                 call eax
// 005da375  83c40c               add esp, 0xc
// 005da378  8bc6                 mov eax, esi
// 005da37a  5e                   pop esi
// 005da37b  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??0?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
