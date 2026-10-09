// roc 2009-12 005e11b0  unit: RBX::RbxG3D::RenderScene  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e11b0
//
// 005e11b0  83ec50               sub esp, 0x50
// 005e11b3  56                   push esi
// 005e11b4  8bf1                 mov esi, ecx
// 005e11b6  8b4604               mov eax, dword ptr [esi + 4]
// 005e11b9  3b4608               cmp eax, dword ptr [esi + 8]
// 005e11bc  7d1e                 jge 0x5e11dc
// 005e11be  8d0c80               lea ecx, [eax + eax*4]
// 005e11c1  c1e104               shl ecx, 4
// 005e11c4  030e                 add ecx, dword ptr [esi]
// 005e11c6  740a                 je 0x5e11d2
// 005e11c8  8b442458             mov eax, dword ptr [esp + 0x58]
// 005e11cc  50                   push eax
// 005e11cd  e85ea7eeff           call 0x4cb930
// 005e11d2  ff4604               inc dword ptr [esi + 4]
// 005e11d5  5e                   pop esi
// 005e11d6  83c450               add esp, 0x50
// 005e11d9  c20400               ret 4
// 005e11dc  8b0e                 mov ecx, dword ptr [esi]
// 005e11de  57                   push edi
// 005e11df  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 005e11e3  3bf9                 cmp edi, ecx
// 005e11e5  722a                 jb 0x5e1211
// 005e11e7  8d1480               lea edx, [eax + eax*4]
// 005e11ea  c1e204               shl edx, 4
// 005e11ed  03d1                 add edx, ecx
// 005e11ef  3bfa                 cmp edi, edx
// 005e11f1  731e                 jae 0x5e1211
// 005e11f3  57                   push edi
// 005e11f4  8d4c240c             lea ecx, [esp + 0xc]
// 005e11f8  e833a7eeff           call 0x4cb930
// 005e11fd  8d442408             lea eax, [esp + 8]
// 005e1201  50                   push eax
// 005e1202  8bce                 mov ecx, esi
// 005e1204  e8a7ffffff           call 0x5e11b0
// 005e1209  5f                   pop edi
// 005e120a  5e                   pop esi
// 005e120b  83c450               add esp, 0x50
// 005e120e  c20400               ret 4
// 005e1211  6a00                 push 0
// 005e1213  40                   inc eax
// 005e1214  50                   push eax
// 005e1215  8bce                 mov ecx, esi
// 005e1217  e834f8ffff           call 0x5e0a50
// 005e121c  8b4604               mov eax, dword ptr [esi + 4]
// 005e121f  8b16                 mov edx, dword ptr [esi]
// 005e1221  8d0c80               lea ecx, [eax + eax*4]
// 005e1224  c1e104               shl ecx, 4
// 005e1227  57                   push edi
// 005e1228  8d4c11b0             lea ecx, [ecx + edx - 0x50]
// 005e122c  e8df93eeff           call 0x4ca610
// 005e1231  5f                   pop edi
// 005e1232  5e                   pop esi
// 005e1233  83c450               add esp, 0x50
// 005e1236  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?append@?$Array@VGLight@G3D@@@G3D@@QAEXABVGLight@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
