// from server: 100% by auto
// roc 2012-06 0040b3b0  unit: RBX::VScriptContext::?$FactoryProduct::Creator  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0040b3b0
//
// 0040b3b0  56                   push esi
// 0040b3b1  8bf1                 mov esi, ecx
// 0040b3b3  8b4604               mov eax, dword ptr [esi + 4]
// 0040b3b6  8b4804               mov ecx, dword ptr [eax + 4]
// 0040b3b9  51                   push ecx
// 0040b3ba  8bce                 mov ecx, esi
// 0040b3bc  e87ffeffff           call 0x40b240
// 0040b3c1  8b4604               mov eax, dword ptr [esi + 4]
// 0040b3c4  894004               mov dword ptr [eax + 4], eax
// 0040b3c7  8b4604               mov eax, dword ptr [esi + 4]
// 0040b3ca  c7460800000000       mov dword ptr [esi + 8], 0
// 0040b3d1  8900                 mov dword ptr [eax], eax
// 0040b3d3  8b7604               mov esi, dword ptr [esi + 4]
// 0040b3d6  897608               mov dword ptr [esi + 8], esi
// 0040b3d9  5e                   pop esi
// 0040b3da  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?clear@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
