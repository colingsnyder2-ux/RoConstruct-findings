// roc 2008-06 0078c980  unit: CXTPRichRender::XTextHost  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c980
//
// 0078c980  83ec10               sub esp, 0x10
// 0078c983  56                   push esi
// 0078c984  8bf1                 mov esi, ecx
// 0078c986  8b46fc               mov eax, dword ptr [esi - 4]
// 0078c989  50                   push eax
// 0078c98a  8d4c2408             lea ecx, [esp + 8]
// 0078c98e  e8cf3ff1ff           call 0x6a0962
// 0078c993  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0078c997  8b442408             mov eax, dword ptr [esp + 8]
// 0078c99b  83c664               add esi, 0x64
// 0078c99e  8931                 mov dword ptr [ecx], esi
// 0078c9a0  5e                   pop esi
// 0078c9a1  85c0                 test eax, eax
// 0078c9a3  7406                 je 0x78c9ab
// 0078c9a5  8b1424               mov edx, dword ptr [esp]
// 0078c9a8  895004               mov dword ptr [eax + 4], edx
// 0078c9ab  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0078c9b0  740c                 je 0x78c9be
// 0078c9b2  8b442408             mov eax, dword ptr [esp + 8]
// 0078c9b6  50                   push eax
// 0078c9b7  6a00                 push 0
// 0078c9b9  e89e3ff1ff           call 0x6a095c
// 0078c9be  33c0                 xor eax, eax
// 0078c9c0  83c410               add esp, 0x10
// 0078c9c3  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Common\XTPRichRender.cpp (function ?TxGetParaFormat@XTextHost@CXTPRichRender@@UAEJPAPBU_paraformat@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPRichRender.cpp
