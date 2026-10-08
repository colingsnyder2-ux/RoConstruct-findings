// roc 2010-06 005449b0  unit: RBX::RbxG3D::RenderScene  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005449b0
//
// 005449b0  83ec50               sub esp, 0x50
// 005449b3  56                   push esi
// 005449b4  8bf1                 mov esi, ecx
// 005449b6  8b4604               mov eax, dword ptr [esi + 4]
// 005449b9  3b4608               cmp eax, dword ptr [esi + 8]
// 005449bc  7d1e                 jge 0x5449dc
// 005449be  8d0c80               lea ecx, [eax + eax*4]
// 005449c1  c1e104               shl ecx, 4
// 005449c4  030e                 add ecx, dword ptr [esi]
// 005449c6  740a                 je 0x5449d2
// 005449c8  8b442458             mov eax, dword ptr [esp + 0x58]
// 005449cc  50                   push eax
// 005449cd  e8fed7f4ff           call 0x4921d0
// 005449d2  ff4604               inc dword ptr [esi + 4]
// 005449d5  5e                   pop esi
// 005449d6  83c450               add esp, 0x50
// 005449d9  c20400               ret 4
// 005449dc  8b0e                 mov ecx, dword ptr [esi]
// 005449de  57                   push edi
// 005449df  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 005449e3  3bf9                 cmp edi, ecx
// 005449e5  722a                 jb 0x544a11
// 005449e7  8d1480               lea edx, [eax + eax*4]
// 005449ea  c1e204               shl edx, 4
// 005449ed  03d1                 add edx, ecx
// 005449ef  3bfa                 cmp edi, edx
// 005449f1  731e                 jae 0x544a11
// 005449f3  57                   push edi
// 005449f4  8d4c240c             lea ecx, [esp + 0xc]
// 005449f8  e8d3d7f4ff           call 0x4921d0
// 005449fd  8d442408             lea eax, [esp + 8]
// 00544a01  50                   push eax
// 00544a02  8bce                 mov ecx, esi
// 00544a04  e8a7ffffff           call 0x5449b0
// 00544a09  5f                   pop edi
// 00544a0a  5e                   pop esi
// 00544a0b  83c450               add esp, 0x50
// 00544a0e  c20400               ret 4
// 00544a11  6a00                 push 0
// 00544a13  40                   inc eax
// 00544a14  50                   push eax
// 00544a15  8bce                 mov ecx, esi
// 00544a17  e874f8ffff           call 0x544290
// 00544a1c  8b4604               mov eax, dword ptr [esi + 4]
// 00544a1f  8b16                 mov edx, dword ptr [esi]
// 00544a21  8d0c80               lea ecx, [eax + eax*4]
// 00544a24  c1e104               shl ecx, 4
// 00544a27  57                   push edi
// 00544a28  8d4c11b0             lea ecx, [ecx + edx - 0x50]
// 00544a2c  e87fc4f4ff           call 0x490eb0
// 00544a31  5f                   pop edi
// 00544a32  5e                   pop esi
// 00544a33  83c450               add esp, 0x50
// 00544a36  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?append@?$Array@VGLight@G3D@@@G3D@@QAEXABVGLight@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
