// roc 2012-06 00a64cf0  unit: CXTPRichRender::XTextHost  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64cf0
//
// 00a64cf0  83ec10               sub esp, 0x10
// 00a64cf3  56                   push esi
// 00a64cf4  8bf1                 mov esi, ecx
// 00a64cf6  8b46fc               mov eax, dword ptr [esi - 4]
// 00a64cf9  50                   push eax
// 00a64cfa  8d4c2408             lea ecx, [esp + 8]
// 00a64cfe  e8dbd6f1ff           call 0x9823de
// 00a64d03  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a64d07  8b442408             mov eax, dword ptr [esp + 8]
// 00a64d0b  83c608               add esi, 8
// 00a64d0e  8931                 mov dword ptr [ecx], esi
// 00a64d10  5e                   pop esi
// 00a64d11  85c0                 test eax, eax
// 00a64d13  7406                 je 0xa64d1b
// 00a64d15  8b1424               mov edx, dword ptr [esp]
// 00a64d18  895004               mov dword ptr [eax + 4], edx
// 00a64d1b  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a64d20  740c                 je 0xa64d2e
// 00a64d22  8b442408             mov eax, dword ptr [esp + 8]
// 00a64d26  50                   push eax
// 00a64d27  6a00                 push 0
// 00a64d29  e8aad6f1ff           call 0x9823d8
// 00a64d2e  33c0                 xor eax, eax
// 00a64d30  83c410               add esp, 0x10
// 00a64d33  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Common\XTPRichRender.cpp (function ?TxGetCharFormat@XTextHost@CXTPRichRender@@UAEJPAPBU_charformatw@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPRichRender.cpp
