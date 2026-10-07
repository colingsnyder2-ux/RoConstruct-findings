// roc 2007-08 00571750  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00571750
//
// 00571750  8b442408             mov eax, dword ptr [esp + 8]
// 00571754  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00571758  50                   push eax
// 00571759  e81255fcff           call 0x536c70
// 0057175e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$swap@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@YAXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
