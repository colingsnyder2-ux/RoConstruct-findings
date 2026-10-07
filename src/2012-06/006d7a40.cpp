// roc 2012-06 006d7a40  unit: boost::io::Vtoo_many_args::U?$error_info_injector::?$clone_impl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d7a40
//
// 006d7a40  56                   push esi
// 006d7a41  8bf1                 mov esi, ecx
// 006d7a43  8b4604               mov eax, dword ptr [esi + 4]
// 006d7a46  8b4804               mov ecx, dword ptr [eax + 4]
// 006d7a49  51                   push ecx
// 006d7a4a  8bce                 mov ecx, esi
// 006d7a4c  e8df9f1d00           call 0x8b1a30
// 006d7a51  8b4604               mov eax, dword ptr [esi + 4]
// 006d7a54  894004               mov dword ptr [eax + 4], eax
// 006d7a57  8b4604               mov eax, dword ptr [esi + 4]
// 006d7a5a  c7460800000000       mov dword ptr [esi + 8], 0
// 006d7a61  8900                 mov dword ptr [eax], eax
// 006d7a63  8b7604               mov esi, dword ptr [esi + 4]
// 006d7a66  897608               mov dword ptr [esi + 8], esi
// 006d7a69  5e                   pop esi
// 006d7a6a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
