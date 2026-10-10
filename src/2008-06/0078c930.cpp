// roc 2008-06 0078c930  unit: CXTPRichRender::XTextHost  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c930
//
// 0078c930  83ec10               sub esp, 0x10
// 0078c933  56                   push esi
// 0078c934  8bf1                 mov esi, ecx
// 0078c936  8b46fc               mov eax, dword ptr [esi - 4]
// 0078c939  50                   push eax
// 0078c93a  8d4c2408             lea ecx, [esp + 8]
// 0078c93e  e81f40f1ff           call 0x6a0962
// 0078c943  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0078c947  8b442408             mov eax, dword ptr [esp + 8]
// 0078c94b  83c608               add esi, 8
// 0078c94e  8931                 mov dword ptr [ecx], esi
// 0078c950  5e                   pop esi
// 0078c951  85c0                 test eax, eax
// 0078c953  7406                 je 0x78c95b
// 0078c955  8b1424               mov edx, dword ptr [esp]
// 0078c958  895004               mov dword ptr [eax + 4], edx
// 0078c95b  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0078c960  740c                 je 0x78c96e
// 0078c962  8b442408             mov eax, dword ptr [esp + 8]
// 0078c966  50                   push eax
// 0078c967  6a00                 push 0
// 0078c969  e8ee3ff1ff           call 0x6a095c
// 0078c96e  33c0                 xor eax, eax
// 0078c970  83c410               add esp, 0x10
// 0078c973  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Common\XTPRichRender.cpp (function ?TxGetCharFormat@XTextHost@CXTPRichRender@@UAEJPAPBU_charformatw@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPRichRender.cpp
