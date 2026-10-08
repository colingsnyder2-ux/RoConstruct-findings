// roc 2007-08 004f85c0  unit: G3D::Sphere  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f85c0
//
// 004f85c0  83ec50               sub esp, 0x50
// 004f85c3  56                   push esi
// 004f85c4  8bf1                 mov esi, ecx
// 004f85c6  8b4604               mov eax, dword ptr [esi + 4]
// 004f85c9  3b4608               cmp eax, dword ptr [esi + 8]
// 004f85cc  7d1f                 jge 0x4f85ed
// 004f85ce  8d0c80               lea ecx, [eax + eax*4]
// 004f85d1  c1e104               shl ecx, 4
// 004f85d4  030e                 add ecx, dword ptr [esi]
// 004f85d6  740a                 je 0x4f85e2
// 004f85d8  8b442458             mov eax, dword ptr [esp + 0x58]
// 004f85dc  50                   push eax
// 004f85dd  e88ec3f7ff           call 0x474970
// 004f85e2  83460401             add dword ptr [esi + 4], 1
// 004f85e6  5e                   pop esi
// 004f85e7  83c450               add esp, 0x50
// 004f85ea  c20400               ret 4
// 004f85ed  8b0e                 mov ecx, dword ptr [esi]
// 004f85ef  57                   push edi
// 004f85f0  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004f85f4  3bf9                 cmp edi, ecx
// 004f85f6  722a                 jb 0x4f8622
// 004f85f8  8d1480               lea edx, [eax + eax*4]
// 004f85fb  c1e204               shl edx, 4
// 004f85fe  03d1                 add edx, ecx
// 004f8600  3bfa                 cmp edi, edx
// 004f8602  731e                 jae 0x4f8622
// 004f8604  57                   push edi
// 004f8605  8d4c240c             lea ecx, [esp + 0xc]
// 004f8609  e862c3f7ff           call 0x474970
// 004f860e  8d442408             lea eax, [esp + 8]
// 004f8612  50                   push eax
// 004f8613  8bce                 mov ecx, esi
// 004f8615  e8a6ffffff           call 0x4f85c0
// 004f861a  5f                   pop edi
// 004f861b  5e                   pop esi
// 004f861c  83c450               add esp, 0x50
// 004f861f  c20400               ret 4
// 004f8622  6a00                 push 0
// 004f8624  83c001               add eax, 1
// 004f8627  50                   push eax
// 004f8628  8bce                 mov ecx, esi
// 004f862a  e8a1f7ffff           call 0x4f7dd0
// 004f862f  8b4604               mov eax, dword ptr [esi + 4]
// 004f8632  8b16                 mov edx, dword ptr [esi]
// 004f8634  8d0c80               lea ecx, [eax + eax*4]
// 004f8637  c1e104               shl ecx, 4
// 004f863a  57                   push edi
// 004f863b  8d4c11b0             lea ecx, [ecx + edx - 0x50]
// 004f863f  e88caef7ff           call 0x4734d0
// 004f8644  5f                   pop edi
// 004f8645  5e                   pop esi
// 004f8646  83c450               add esp, 0x50
// 004f8649  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?append@?$Array@VGLight@G3D@@@G3D@@QAEXABVGLight@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
