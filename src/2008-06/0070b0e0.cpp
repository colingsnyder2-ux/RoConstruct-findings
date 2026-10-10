// roc 2008-06 0070b0e0  unit: CXTPToolTipContext::CHTMLToolTip::XOleClientSite  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070b0e0
//
// 0070b0e0  83ec10               sub esp, 0x10
// 0070b0e3  56                   push esi
// 0070b0e4  8b742418             mov esi, dword ptr [esp + 0x18]
// 0070b0e8  8b86ecfeffff         mov eax, dword ptr [esi - 0x114]
// 0070b0ee  81c6d0feffff         add esi, 0xfffffed0
// 0070b0f4  50                   push eax
// 0070b0f5  8d4c2408             lea ecx, [esp + 8]
// 0070b0f9  e86458f9ff           call 0x6a0962
// 0070b0fe  8bce                 mov ecx, esi
// 0070b100  e8a7120b00           call 0x7bc3ac
// 0070b105  8bf0                 mov esi, eax
// 0070b107  8b442408             mov eax, dword ptr [esp + 8]
// 0070b10b  85c0                 test eax, eax
// 0070b10d  7407                 je 0x70b116
// 0070b10f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070b113  894804               mov dword ptr [eax + 4], ecx
// 0070b116  837c241000           cmp dword ptr [esp + 0x10], 0
// 0070b11b  740c                 je 0x70b129
// 0070b11d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070b121  52                   push edx
// 0070b122  6a00                 push 0
// 0070b124  e83358f9ff           call 0x6a095c
// 0070b129  8bc6                 mov eax, esi
// 0070b12b  5e                   pop esi
// 0070b12c  83c410               add esp, 0x10
// 0070b12f  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?AddRef@XOleClientSite@CHTMLToolTip@CXTPToolTipContext@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
