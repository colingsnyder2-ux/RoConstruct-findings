// roc 2008-06 0078c9d0  unit: CXTPRichRender::XTextHost  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c9d0
//
// 0078c9d0  83ec10               sub esp, 0x10
// 0078c9d3  56                   push esi
// 0078c9d4  8bf1                 mov esi, ecx
// 0078c9d6  8b46fc               mov eax, dword ptr [esi - 4]
// 0078c9d9  50                   push eax
// 0078c9da  8d4c2408             lea ecx, [esp + 8]
// 0078c9de  e87f3ff1ff           call 0x6a0962
// 0078c9e3  817c241801070000     cmp dword ptr [esp + 0x18], 0x701
// 0078c9eb  751c                 jne 0x78ca09
// 0078c9ed  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078c9f1  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0078c9f4  2b480c               sub ecx, dword ptr [eax + 0xc]
// 0078c9f7  898e04010000         mov dword ptr [esi + 0x104], ecx
// 0078c9fd  8b5018               mov edx, dword ptr [eax + 0x18]
// 0078ca00  2b5010               sub edx, dword ptr [eax + 0x10]
// 0078ca03  899608010000         mov dword ptr [esi + 0x108], edx
// 0078ca09  8b442408             mov eax, dword ptr [esp + 8]
// 0078ca0d  5e                   pop esi
// 0078ca0e  85c0                 test eax, eax
// 0078ca10  7406                 je 0x78ca18
// 0078ca12  8b0c24               mov ecx, dword ptr [esp]
// 0078ca15  894804               mov dword ptr [eax + 4], ecx
// 0078ca18  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0078ca1d  740c                 je 0x78ca2b
// 0078ca1f  8b542408             mov edx, dword ptr [esp + 8]
// 0078ca23  52                   push edx
// 0078ca24  6a00                 push 0
// 0078ca26  e8313ff1ff           call 0x6a095c
// 0078ca2b  33c0                 xor eax, eax
// 0078ca2d  83c410               add esp, 0x10
// 0078ca30  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Common\XTPRichRender.cpp (function ?TxNotify@XTextHost@CXTPRichRender@@UAEJKPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPRichRender.cpp
