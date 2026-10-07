// roc 2011-06 005ec920  unit: boost::io::Vtoo_many_args::U?$error_info_injector::?$clone_impl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ec920
//
// 005ec920  56                   push esi
// 005ec921  8bf1                 mov esi, ecx
// 005ec923  8b4604               mov eax, dword ptr [esi + 4]
// 005ec926  8b4804               mov ecx, dword ptr [eax + 4]
// 005ec929  51                   push ecx
// 005ec92a  8bce                 mov ecx, esi
// 005ec92c  e8bf141a00           call 0x78ddf0
// 005ec931  8b4604               mov eax, dword ptr [esi + 4]
// 005ec934  894004               mov dword ptr [eax + 4], eax
// 005ec937  8b4604               mov eax, dword ptr [esi + 4]
// 005ec93a  c7460800000000       mov dword ptr [esi + 8], 0
// 005ec941  8900                 mov dword ptr [eax], eax
// 005ec943  8b7604               mov esi, dword ptr [esi + 4]
// 005ec946  897608               mov dword ptr [esi + 8], esi
// 005ec949  5e                   pop esi
// 005ec94a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
