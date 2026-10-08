// roc 2007-03 005f1200  unit: seg_005f0000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1200
//
// 005f1200  56                   push esi
// 005f1201  8bf1                 mov esi, ecx
// 005f1203  833e00               cmp dword ptr [esi], 0
// 005f1206  57                   push edi
// 005f1207  8b3d44e97700         mov edi, dword ptr [0x77e944]
// 005f120d  7502                 jne 0x5f1211
// 005f120f  ffd7                 call edi
// 005f1211  8b4604               mov eax, dword ptr [esi + 4]
// 005f1214  80781900             cmp byte ptr [eax + 0x19], 0
// 005f1218  7405                 je 0x5f121f
// 005f121a  ffd7                 call edi
// 005f121c  5f                   pop edi
// 005f121d  5e                   pop esi
// 005f121e  c3                   ret 
// 005f121f  8b4808               mov ecx, dword ptr [eax + 8]
// 005f1222  80791900             cmp byte ptr [ecx + 0x19], 0
// 005f1226  7518                 jne 0x5f1240
// 005f1228  8b01                 mov eax, dword ptr [ecx]
// 005f122a  80781900             cmp byte ptr [eax + 0x19], 0
// 005f122e  750a                 jne 0x5f123a
// 005f1230  8bc8                 mov ecx, eax
// 005f1232  8b01                 mov eax, dword ptr [ecx]
// 005f1234  80781900             cmp byte ptr [eax + 0x19], 0
// 005f1238  74f6                 je 0x5f1230
// 005f123a  5f                   pop edi
// 005f123b  894e04               mov dword ptr [esi + 4], ecx
// 005f123e  5e                   pop esi
// 005f123f  c3                   ret 
// 005f1240  8b4004               mov eax, dword ptr [eax + 4]
// 005f1243  80781900             cmp byte ptr [eax + 0x19], 0
// 005f1247  751d                 jne 0x5f1266
// 005f1249  8da42400000000       lea esp, [esp]
// 005f1250  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f1253  3b4808               cmp ecx, dword ptr [eax + 8]
// 005f1256  750e                 jne 0x5f1266
// 005f1258  894604               mov dword ptr [esi + 4], eax
// 005f125b  8bd0                 mov edx, eax
// 005f125d  8b4204               mov eax, dword ptr [edx + 4]
// 005f1260  80781900             cmp byte ptr [eax + 0x19], 0
// 005f1264  74ea                 je 0x5f1250
// 005f1266  5f                   pop edi
// 005f1267  894604               mov dword ptr [esi + 4], eax
// 005f126a  5e                   pop esi
// 005f126b  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
