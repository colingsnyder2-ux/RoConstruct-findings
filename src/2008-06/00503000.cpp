// roc 2008-06 00503000  unit: RBX::Render::RenderScene  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00503000
//
// 00503000  83ec50               sub esp, 0x50
// 00503003  56                   push esi
// 00503004  8bf1                 mov esi, ecx
// 00503006  8b4604               mov eax, dword ptr [esi + 4]
// 00503009  3b4608               cmp eax, dword ptr [esi + 8]
// 0050300c  7d1e                 jge 0x50302c
// 0050300e  8d0c80               lea ecx, [eax + eax*4]
// 00503011  c1e104               shl ecx, 4
// 00503014  030e                 add ecx, dword ptr [esi]
// 00503016  740a                 je 0x503022
// 00503018  8b442458             mov eax, dword ptr [esp + 0x58]
// 0050301c  50                   push eax
// 0050301d  e82e4cf7ff           call 0x477c50
// 00503022  ff4604               inc dword ptr [esi + 4]
// 00503025  5e                   pop esi
// 00503026  83c450               add esp, 0x50
// 00503029  c20400               ret 4
// 0050302c  8b0e                 mov ecx, dword ptr [esi]
// 0050302e  57                   push edi
// 0050302f  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00503033  3bf9                 cmp edi, ecx
// 00503035  722a                 jb 0x503061
// 00503037  8d1480               lea edx, [eax + eax*4]
// 0050303a  c1e204               shl edx, 4
// 0050303d  03d1                 add edx, ecx
// 0050303f  3bfa                 cmp edi, edx
// 00503041  731e                 jae 0x503061
// 00503043  57                   push edi
// 00503044  8d4c240c             lea ecx, [esp + 0xc]
// 00503048  e8034cf7ff           call 0x477c50
// 0050304d  8d442408             lea eax, [esp + 8]
// 00503051  50                   push eax
// 00503052  8bce                 mov ecx, esi
// 00503054  e8a7ffffff           call 0x503000
// 00503059  5f                   pop edi
// 0050305a  5e                   pop esi
// 0050305b  83c450               add esp, 0x50
// 0050305e  c20400               ret 4
// 00503061  6a00                 push 0
// 00503063  40                   inc eax
// 00503064  50                   push eax
// 00503065  8bce                 mov ecx, esi
// 00503067  e864f6ffff           call 0x5026d0
// 0050306c  8b4604               mov eax, dword ptr [esi + 4]
// 0050306f  8b16                 mov edx, dword ptr [esi]
// 00503071  8d0c80               lea ecx, [eax + eax*4]
// 00503074  c1e104               shl ecx, 4
// 00503077  57                   push edi
// 00503078  8d4c11b0             lea ecx, [ecx + edx - 0x50]
// 0050307c  e81f39f7ff           call 0x4769a0
// 00503081  5f                   pop edi
// 00503082  5e                   pop esi
// 00503083  83c450               add esp, 0x50
// 00503086  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?append@?$Array@VGLight@G3D@@@G3D@@QAEXABVGLight@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
