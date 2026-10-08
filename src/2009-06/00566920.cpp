// roc 2009-06 00566920  unit: RBX::RbxG3D::RenderScene  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00566920
//
// 00566920  83ec50               sub esp, 0x50
// 00566923  56                   push esi
// 00566924  8bf1                 mov esi, ecx
// 00566926  8b4604               mov eax, dword ptr [esi + 4]
// 00566929  3b4608               cmp eax, dword ptr [esi + 8]
// 0056692c  7d1e                 jge 0x56694c
// 0056692e  8d0c80               lea ecx, [eax + eax*4]
// 00566931  c1e104               shl ecx, 4
// 00566934  030e                 add ecx, dword ptr [esi]
// 00566936  740a                 je 0x566942
// 00566938  8b442458             mov eax, dword ptr [esp + 0x58]
// 0056693c  50                   push eax
// 0056693d  e87e89f3ff           call 0x49f2c0
// 00566942  ff4604               inc dword ptr [esi + 4]
// 00566945  5e                   pop esi
// 00566946  83c450               add esp, 0x50
// 00566949  c20400               ret 4
// 0056694c  8b0e                 mov ecx, dword ptr [esi]
// 0056694e  57                   push edi
// 0056694f  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00566953  3bf9                 cmp edi, ecx
// 00566955  722a                 jb 0x566981
// 00566957  8d1480               lea edx, [eax + eax*4]
// 0056695a  c1e204               shl edx, 4
// 0056695d  03d1                 add edx, ecx
// 0056695f  3bfa                 cmp edi, edx
// 00566961  731e                 jae 0x566981
// 00566963  57                   push edi
// 00566964  8d4c240c             lea ecx, [esp + 0xc]
// 00566968  e85389f3ff           call 0x49f2c0
// 0056696d  8d442408             lea eax, [esp + 8]
// 00566971  50                   push eax
// 00566972  8bce                 mov ecx, esi
// 00566974  e8a7ffffff           call 0x566920
// 00566979  5f                   pop edi
// 0056697a  5e                   pop esi
// 0056697b  83c450               add esp, 0x50
// 0056697e  c20400               ret 4
// 00566981  6a00                 push 0
// 00566983  40                   inc eax
// 00566984  50                   push eax
// 00566985  8bce                 mov ecx, esi
// 00566987  e8c4f6ffff           call 0x566050
// 0056698c  8b4604               mov eax, dword ptr [esi + 4]
// 0056698f  8b16                 mov edx, dword ptr [esi]
// 00566991  8d0c80               lea ecx, [eax + eax*4]
// 00566994  c1e104               shl ecx, 4
// 00566997  57                   push edi
// 00566998  8d4c11b0             lea ecx, [ecx + edx - 0x50]
// 0056699c  e86f76f3ff           call 0x49e010
// 005669a1  5f                   pop edi
// 005669a2  5e                   pop esi
// 005669a3  83c450               add esp, 0x50
// 005669a6  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?append@?$Array@VGLight@G3D@@@G3D@@QAEXABVGLight@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
