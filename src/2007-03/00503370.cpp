// roc 2007-03 00503370  unit: seg_00500000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503370
//
// 00503370  56                   push esi
// 00503371  8bf1                 mov esi, ecx
// 00503373  8b4610               mov eax, dword ptr [esi + 0x10]
// 00503376  83c001               add eax, 1
// 00503379  394608               cmp dword ptr [esi + 8], eax
// 0050337c  57                   push edi
// 0050337d  7707                 ja 0x503386
// 0050337f  6a01                 push 1
// 00503381  e88afeffff           call 0x503210
// 00503386  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00503389  85ff                 test edi, edi
// 0050338b  7503                 jne 0x503390
// 0050338d  8b7e08               mov edi, dword ptr [esi + 8]
// 00503390  8b4e04               mov ecx, dword ptr [esi + 4]
// 00503393  83ef01               sub edi, 1
// 00503396  833cb900             cmp dword ptr [ecx + edi*4], 0
// 0050339a  7510                 jne 0x5033ac
// 0050339c  6a2c                 push 0x2c
// 0050339e  e865ad1100           call 0x61e108
// 005033a3  8b5604               mov edx, dword ptr [esi + 4]
// 005033a6  83c404               add esp, 4
// 005033a9  8904ba               mov dword ptr [edx + edi*4], eax
// 005033ac  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005033b0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005033b3  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 005033b6  50                   push eax
// 005033b7  52                   push edx
// 005033b8  e843ecffff           call 0x502000
// 005033bd  83461001             add dword ptr [esi + 0x10], 1
// 005033c1  83c408               add esp, 8
// 005033c4  897e0c               mov dword ptr [esi + 0xc], edi
// 005033c7  5f                   pop edi
// 005033c8  5e                   pop esi
// 005033c9  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\TextInput.cpp (function ?push_front@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@QAEXABVToken@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextInput.cpp
