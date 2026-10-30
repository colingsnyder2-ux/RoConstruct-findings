// roc 2012-06 00a64d40  unit: CXTPRichRender::XTextHost  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64d40
//
// 00a64d40  83ec10               sub esp, 0x10
// 00a64d43  56                   push esi
// 00a64d44  8bf1                 mov esi, ecx
// 00a64d46  8b46fc               mov eax, dword ptr [esi - 4]
// 00a64d49  50                   push eax
// 00a64d4a  8d4c2408             lea ecx, [esp + 8]
// 00a64d4e  e88bd6f1ff           call 0x9823de
// 00a64d53  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a64d57  8b442408             mov eax, dword ptr [esp + 8]
// 00a64d5b  83c664               add esi, 0x64
// 00a64d5e  8931                 mov dword ptr [ecx], esi
// 00a64d60  5e                   pop esi
// 00a64d61  85c0                 test eax, eax
// 00a64d63  7406                 je 0xa64d6b
// 00a64d65  8b1424               mov edx, dword ptr [esp]
// 00a64d68  895004               mov dword ptr [eax + 4], edx
// 00a64d6b  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a64d70  740c                 je 0xa64d7e
// 00a64d72  8b442408             mov eax, dword ptr [esp + 8]
// 00a64d76  50                   push eax
// 00a64d77  6a00                 push 0
// 00a64d79  e85ad6f1ff           call 0x9823d8
// 00a64d7e  33c0                 xor eax, eax
// 00a64d80  83c410               add esp, 0x10
// 00a64d83  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Common\XTPRichRender.cpp (function ?TxGetParaFormat@XTextHost@CXTPRichRender@@UAEJPAPBU_paraformat@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPRichRender.cpp
