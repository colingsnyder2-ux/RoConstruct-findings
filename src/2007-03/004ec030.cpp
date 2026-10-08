// roc 2007-03 004ec030  unit: seg_004e0000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ec030
//
// 004ec030  83ec50               sub esp, 0x50
// 004ec033  56                   push esi
// 004ec034  8bf1                 mov esi, ecx
// 004ec036  8b4604               mov eax, dword ptr [esi + 4]
// 004ec039  3b4608               cmp eax, dword ptr [esi + 8]
// 004ec03c  7d1f                 jge 0x4ec05d
// 004ec03e  8d0c80               lea ecx, [eax + eax*4]
// 004ec041  c1e104               shl ecx, 4
// 004ec044  030e                 add ecx, dword ptr [esi]
// 004ec046  740a                 je 0x4ec052
// 004ec048  8b442458             mov eax, dword ptr [esp + 0x58]
// 004ec04c  50                   push eax
// 004ec04d  e81e8af8ff           call 0x474a70
// 004ec052  83460401             add dword ptr [esi + 4], 1
// 004ec056  5e                   pop esi
// 004ec057  83c450               add esp, 0x50
// 004ec05a  c20400               ret 4
// 004ec05d  8b0e                 mov ecx, dword ptr [esi]
// 004ec05f  57                   push edi
// 004ec060  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004ec064  3bf9                 cmp edi, ecx
// 004ec066  722a                 jb 0x4ec092
// 004ec068  8d1480               lea edx, [eax + eax*4]
// 004ec06b  c1e204               shl edx, 4
// 004ec06e  03d1                 add edx, ecx
// 004ec070  3bfa                 cmp edi, edx
// 004ec072  731e                 jae 0x4ec092
// 004ec074  57                   push edi
// 004ec075  8d4c240c             lea ecx, [esp + 0xc]
// 004ec079  e8f289f8ff           call 0x474a70
// 004ec07e  8d442408             lea eax, [esp + 8]
// 004ec082  50                   push eax
// 004ec083  8bce                 mov ecx, esi
// 004ec085  e8a6ffffff           call 0x4ec030
// 004ec08a  5f                   pop edi
// 004ec08b  5e                   pop esi
// 004ec08c  83c450               add esp, 0x50
// 004ec08f  c20400               ret 4
// 004ec092  6a00                 push 0
// 004ec094  83c001               add eax, 1
// 004ec097  50                   push eax
// 004ec098  8bce                 mov ecx, esi
// 004ec09a  e861f7ffff           call 0x4eb800
// 004ec09f  8b4604               mov eax, dword ptr [esi + 4]
// 004ec0a2  8b16                 mov edx, dword ptr [esi]
// 004ec0a4  8d0c80               lea ecx, [eax + eax*4]
// 004ec0a7  c1e104               shl ecx, 4
// 004ec0aa  57                   push edi
// 004ec0ab  8d4c11b0             lea ecx, [ecx + edx - 0x50]
// 004ec0af  e80c75f8ff           call 0x4735c0
// 004ec0b4  5f                   pop edi
// 004ec0b5  5e                   pop esi
// 004ec0b6  83c450               add esp, 0x50
// 004ec0b9  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?append@?$Array@VGLight@G3D@@@G3D@@QAEXABVGLight@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
