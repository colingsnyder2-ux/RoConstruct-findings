// roc 2009-12 008dfb10  unit: CXTPRichRender::XTextHost  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dfb10
//
// 008dfb10  83ec10               sub esp, 0x10
// 008dfb13  56                   push esi
// 008dfb14  8bf1                 mov esi, ecx
// 008dfb16  8b46fc               mov eax, dword ptr [esi - 4]
// 008dfb19  50                   push eax
// 008dfb1a  8d4c2408             lea ecx, [esp + 8]
// 008dfb1e  e80d40f1ff           call 0x7f3b30
// 008dfb23  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dfb27  8b442408             mov eax, dword ptr [esp + 8]
// 008dfb2b  83c664               add esi, 0x64
// 008dfb2e  8931                 mov dword ptr [ecx], esi
// 008dfb30  5e                   pop esi
// 008dfb31  85c0                 test eax, eax
// 008dfb33  7406                 je 0x8dfb3b
// 008dfb35  8b1424               mov edx, dword ptr [esp]
// 008dfb38  895004               mov dword ptr [eax + 4], edx
// 008dfb3b  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008dfb40  740c                 je 0x8dfb4e
// 008dfb42  8b442408             mov eax, dword ptr [esp + 8]
// 008dfb46  50                   push eax
// 008dfb47  6a00                 push 0
// 008dfb49  e8d63ff1ff           call 0x7f3b24
// 008dfb4e  33c0                 xor eax, eax
// 008dfb50  83c410               add esp, 0x10
// 008dfb53  c20400               ret 4
// copied from an identical function in another client (function ?TxGetParaFormat@XTextHost@CXTPRichRender@@UAEJPAPBU_paraformat@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPRichRender.cpp