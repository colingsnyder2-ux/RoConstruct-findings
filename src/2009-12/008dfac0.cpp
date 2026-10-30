// roc 2009-12 008dfac0  unit: CXTPRichRender::XTextHost  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dfac0
//
// 008dfac0  83ec10               sub esp, 0x10
// 008dfac3  56                   push esi
// 008dfac4  8bf1                 mov esi, ecx
// 008dfac6  8b46fc               mov eax, dword ptr [esi - 4]
// 008dfac9  50                   push eax
// 008dfaca  8d4c2408             lea ecx, [esp + 8]
// 008dface  e85d40f1ff           call 0x7f3b30
// 008dfad3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dfad7  8b442408             mov eax, dword ptr [esp + 8]
// 008dfadb  83c608               add esi, 8
// 008dfade  8931                 mov dword ptr [ecx], esi
// 008dfae0  5e                   pop esi
// 008dfae1  85c0                 test eax, eax
// 008dfae3  7406                 je 0x8dfaeb
// 008dfae5  8b1424               mov edx, dword ptr [esp]
// 008dfae8  895004               mov dword ptr [eax + 4], edx
// 008dfaeb  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008dfaf0  740c                 je 0x8dfafe
// 008dfaf2  8b442408             mov eax, dword ptr [esp + 8]
// 008dfaf6  50                   push eax
// 008dfaf7  6a00                 push 0
// 008dfaf9  e82640f1ff           call 0x7f3b24
// 008dfafe  33c0                 xor eax, eax
// 008dfb00  83c410               add esp, 0x10
// 008dfb03  c20400               ret 4
// copied from an identical function in another client (function ?TxGetCharFormat@XTextHost@CXTPRichRender@@UAEJPAPBU_charformatw@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPRichRender.cpp