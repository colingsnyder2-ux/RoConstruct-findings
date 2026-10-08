// roc 2007-08 004f11a0  unit: RBX::Render::AggregatingSceneManager  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f11a0
//
// 004f11a0  83ec0c               sub esp, 0xc
// 004f11a3  56                   push esi
// 004f11a4  8bf1                 mov esi, ecx
// 004f11a6  837e0800             cmp dword ptr [esi + 8], 0
// 004f11aa  57                   push edi
// 004f11ab  7521                 jne 0x4f11ce
// 004f11ad  8b442424             mov eax, dword ptr [esp + 0x24]
// 004f11b1  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f11b4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004f11b8  50                   push eax
// 004f11b9  51                   push ecx
// 004f11ba  6a01                 push 1
// 004f11bc  57                   push edi
// 004f11bd  8bce                 mov ecx, esi
// 004f11bf  e81cf2ffff           call 0x4f03e0
// 004f11c4  8bc7                 mov eax, edi
// 004f11c6  5f                   pop edi
// 004f11c7  5e                   pop esi
// 004f11c8  83c40c               add esp, 0xc
// 004f11cb  c21000               ret 0x10
// 004f11ce  8b5604               mov edx, dword ptr [esi + 4]
// 004f11d1  8b3a                 mov edi, dword ptr [edx]
// 004f11d3  55                   push ebp
// 004f11d4  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004f11d8  85ed                 test ebp, ebp
// 004f11da  7404                 je 0x4f11e0
// 004f11dc  3bee                 cmp ebp, esi
// 004f11de  7406                 je 0x4f11e6
// 004f11e0  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f11e6  53                   push ebx
// 004f11e7  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004f11eb  3bdf                 cmp ebx, edi
// 004f11ed  7533                 jne 0x4f1222
// 004f11ef  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004f11f3  8d430c               lea eax, [ebx + 0xc]
// 004f11f6  50                   push eax
// 004f11f7  8bcf                 mov ecx, edi
// 004f11f9  e8a2e2ffff           call 0x4ef4a0
// 004f11fe  84c0                 test al, al
// 004f1200  0f845f010000         je 0x4f1365
// 004f1206  57                   push edi
// 004f1207  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004f120b  53                   push ebx
// 004f120c  6a01                 push 1
// 004f120e  57                   push edi
// 004f120f  8bce                 mov ecx, esi
// 004f1211  e8caf1ffff           call 0x4f03e0
// 004f1216  5b                   pop ebx
// 004f1217  5d                   pop ebp
// 004f1218  8bc7                 mov eax, edi
// 004f121a  5f                   pop edi
// 004f121b  5e                   pop esi
// 004f121c  83c40c               add esp, 0xc
// 004f121f  c21000               ret 0x10
// 004f1222  85ed                 test ebp, ebp
// 004f1224  8b7e04               mov edi, dword ptr [esi + 4]
// 004f1227  7404                 je 0x4f122d
// 004f1229  3bee                 cmp ebp, esi
// 004f122b  7406                 je 0x4f1233
// 004f122d  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f1233  3bdf                 cmp ebx, edi
// 004f1235  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004f1239  7533                 jne 0x4f126e
// 004f123b  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f123e  8b5908               mov ebx, dword ptr [ecx + 8]
// 004f1241  57                   push edi
// 004f1242  8d4b0c               lea ecx, [ebx + 0xc]
// 004f1245  e856e2ffff           call 0x4ef4a0
// 004f124a  84c0                 test al, al
// 004f124c  0f8413010000         je 0x4f1365
// 004f1252  57                   push edi
// 004f1253  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004f1257  53                   push ebx
// 004f1258  6a00                 push 0
// 004f125a  57                   push edi
// 004f125b  8bce                 mov ecx, esi
// 004f125d  e87ef1ffff           call 0x4f03e0
// 004f1262  5b                   pop ebx
// 004f1263  5d                   pop ebp
// 004f1264  8bc7                 mov eax, edi
// 004f1266  5f                   pop edi
// 004f1267  5e                   pop esi
// 004f1268  83c40c               add esp, 0xc
// 004f126b  c21000               ret 0x10
// 004f126e  8d430c               lea eax, [ebx + 0xc]
// 004f1271  50                   push eax
// 004f1272  8bcf                 mov ecx, edi
// 004f1274  e827e2ffff           call 0x4ef4a0
// 004f1279  84c0                 test al, al
// 004f127b  7460                 je 0x4f12dd
// 004f127d  8d4c2424             lea ecx, [esp + 0x24]
// 004f1281  896c2424             mov dword ptr [esp + 0x24], ebp
// 004f1285  895c2428             mov dword ptr [esp + 0x28], ebx
// 004f1289  e8b2b71100           call 0x60ca40
// 004f128e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f1292  57                   push edi
// 004f1293  83c10c               add ecx, 0xc
// 004f1296  e805e2ffff           call 0x4ef4a0
// 004f129b  84c0                 test al, al
// 004f129d  743e                 je 0x4f12dd
// 004f129f  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f12a3  8b5008               mov edx, dword ptr [eax + 8]
// 004f12a6  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 004f12aa  57                   push edi
// 004f12ab  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004f12af  8bce                 mov ecx, esi
// 004f12b1  7415                 je 0x4f12c8
// 004f12b3  50                   push eax
// 004f12b4  6a00                 push 0
// 004f12b6  57                   push edi
// 004f12b7  e824f1ffff           call 0x4f03e0
// 004f12bc  5b                   pop ebx
// 004f12bd  5d                   pop ebp
// 004f12be  8bc7                 mov eax, edi
// 004f12c0  5f                   pop edi
// 004f12c1  5e                   pop esi
// 004f12c2  83c40c               add esp, 0xc
// 004f12c5  c21000               ret 0x10
// 004f12c8  53                   push ebx
// 004f12c9  6a01                 push 1
// 004f12cb  57                   push edi
// 004f12cc  e80ff1ffff           call 0x4f03e0
// 004f12d1  5b                   pop ebx
// 004f12d2  5d                   pop ebp
// 004f12d3  8bc7                 mov eax, edi
// 004f12d5  5f                   pop edi
// 004f12d6  5e                   pop esi
// 004f12d7  83c40c               add esp, 0xc
// 004f12da  c21000               ret 0x10
// 004f12dd  57                   push edi
// 004f12de  8d4b0c               lea ecx, [ebx + 0xc]
// 004f12e1  e8bae1ffff           call 0x4ef4a0
// 004f12e6  84c0                 test al, al
// 004f12e8  747b                 je 0x4f1365
// 004f12ea  8b4604               mov eax, dword ptr [esi + 4]
// 004f12ed  8d4c2424             lea ecx, [esp + 0x24]
// 004f12f1  896c2424             mov dword ptr [esp + 0x24], ebp
// 004f12f5  895c2428             mov dword ptr [esp + 0x28], ebx
// 004f12f9  89442414             mov dword ptr [esp + 0x14], eax
// 004f12fd  89742410             mov dword ptr [esp + 0x10], esi
// 004f1301  e87aba1100           call 0x60cd80
// 004f1306  8d4c2410             lea ecx, [esp + 0x10]
// 004f130a  51                   push ecx
// 004f130b  8d4c2428             lea ecx, [esp + 0x28]
// 004f130f  e89c57f7ff           call 0x466ab0
// 004f1314  84c0                 test al, al
// 004f1316  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004f131a  750f                 jne 0x4f132b
// 004f131c  8d550c               lea edx, [ebp + 0xc]
// 004f131f  52                   push edx
// 004f1320  8bcf                 mov ecx, edi
// 004f1322  e879e1ffff           call 0x4ef4a0
// 004f1327  84c0                 test al, al
// 004f1329  743a                 je 0x4f1365
// 004f132b  8b4308               mov eax, dword ptr [ebx + 8]
// 004f132e  80781d00             cmp byte ptr [eax + 0x1d], 0
// 004f1332  57                   push edi
// 004f1333  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004f1337  8bce                 mov ecx, esi
// 004f1339  7415                 je 0x4f1350
// 004f133b  53                   push ebx
// 004f133c  6a00                 push 0
// 004f133e  57                   push edi
// 004f133f  e89cf0ffff           call 0x4f03e0
// 004f1344  5b                   pop ebx
// 004f1345  5d                   pop ebp
// 004f1346  8bc7                 mov eax, edi
// 004f1348  5f                   pop edi
// 004f1349  5e                   pop esi
// 004f134a  83c40c               add esp, 0xc
// 004f134d  c21000               ret 0x10
// 004f1350  55                   push ebp
// 004f1351  6a01                 push 1
// 004f1353  57                   push edi
// 004f1354  e887f0ffff           call 0x4f03e0
// 004f1359  5b                   pop ebx
// 004f135a  5d                   pop ebp
// 004f135b  8bc7                 mov eax, edi
// 004f135d  5f                   pop edi
// 004f135e  5e                   pop esi
// 004f135f  83c40c               add esp, 0xc
// 004f1362  c21000               ret 0x10
// 004f1365  57                   push edi
// 004f1366  8d4c2414             lea ecx, [esp + 0x14]
// 004f136a  51                   push ecx
// 004f136b  8bce                 mov ecx, esi
// 004f136d  e8def4ffff           call 0x4f0850
// 004f1372  8b10                 mov edx, dword ptr [eax]
// 004f1374  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004f1378  5b                   pop ebx
// 004f1379  5d                   pop ebp
// 004f137a  8911                 mov dword ptr [ecx], edx
// 004f137c  8b4004               mov eax, dword ptr [eax + 4]
// 004f137f  5f                   pop edi
// 004f1380  894104               mov dword ptr [ecx + 4], eax
// 004f1383  8bc1                 mov eax, ecx
// 004f1385  5e                   pop esi
// 004f1386  83c40c               add esp, 0xc
// 004f1389  c21000               ret 0x10
// library rbxgs-render/AggregatingSceneManager.cpp (function ?insert@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@V312@ABU?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
