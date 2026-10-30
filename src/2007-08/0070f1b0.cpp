// roc 2007-08 0070f1b0  unit: CXTPRichRender::XTextHost  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f1b0
//
// 0070f1b0  83ec10               sub esp, 0x10
// 0070f1b3  56                   push esi
// 0070f1b4  8bf1                 mov esi, ecx
// 0070f1b6  8b46fc               mov eax, dword ptr [esi - 4]
// 0070f1b9  50                   push eax
// 0070f1ba  8d4c2408             lea ecx, [esp + 8]
// 0070f1be  e87b0df2ff           call 0x62ff3e
// 0070f1c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0070f1c7  8b442408             mov eax, dword ptr [esp + 8]
// 0070f1cb  83c608               add esi, 8
// 0070f1ce  85c0                 test eax, eax
// 0070f1d0  8931                 mov dword ptr [ecx], esi
// 0070f1d2  5e                   pop esi
// 0070f1d3  7406                 je 0x70f1db
// 0070f1d5  8b1424               mov edx, dword ptr [esp]
// 0070f1d8  895004               mov dword ptr [eax + 4], edx
// 0070f1db  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0070f1e0  740c                 je 0x70f1ee
// 0070f1e2  8b442408             mov eax, dword ptr [esp + 8]
// 0070f1e6  50                   push eax
// 0070f1e7  6a00                 push 0
// 0070f1e9  e84a0df2ff           call 0x62ff38
// 0070f1ee  33c0                 xor eax, eax
// 0070f1f0  83c410               add esp, 0x10
// 0070f1f3  c20400               ret 4
// copied from an identical function in another client (function ?TxGetCharFormat@XTextHost@CXTPRichRender@@UAEJPAPBU_charformatw@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Common/XTPRichRender.cpp