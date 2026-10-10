// roc 2008-06 0070b080  unit: CXTPToolTipContext::CHTMLToolTip::XOleClientSite  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070b080
//
// 0070b080  83ec10               sub esp, 0x10
// 0070b083  56                   push esi
// 0070b084  8b742418             mov esi, dword ptr [esp + 0x18]
// 0070b088  8b86ecfeffff         mov eax, dword ptr [esi - 0x114]
// 0070b08e  81c6d0feffff         add esi, 0xfffffed0
// 0070b094  50                   push eax
// 0070b095  8d4c2408             lea ecx, [esp + 8]
// 0070b099  e8c458f9ff           call 0x6a0962
// 0070b09e  8bce                 mov ecx, esi
// 0070b0a0  e801130b00           call 0x7bc3a6
// 0070b0a5  8bf0                 mov esi, eax
// 0070b0a7  8b442408             mov eax, dword ptr [esp + 8]
// 0070b0ab  85c0                 test eax, eax
// 0070b0ad  7407                 je 0x70b0b6
// 0070b0af  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070b0b3  894804               mov dword ptr [eax + 4], ecx
// 0070b0b6  837c241000           cmp dword ptr [esp + 0x10], 0
// 0070b0bb  740c                 je 0x70b0c9
// 0070b0bd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070b0c1  52                   push edx
// 0070b0c2  6a00                 push 0
// 0070b0c4  e89358f9ff           call 0x6a095c
// 0070b0c9  8bc6                 mov eax, esi
// 0070b0cb  5e                   pop esi
// 0070b0cc  83c410               add esp, 0x10
// 0070b0cf  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?AddRef@XOleClientSite@CHTMLToolTip@CXTPToolTipContext@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
