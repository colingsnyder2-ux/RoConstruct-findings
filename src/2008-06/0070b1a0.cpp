// roc 2008-06 0070b1a0  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070b1a0
//
// 0070b1a0  83ec10               sub esp, 0x10
// 0070b1a3  56                   push esi
// 0070b1a4  8b742418             mov esi, dword ptr [esp + 0x18]
// 0070b1a8  8b86e8feffff         mov eax, dword ptr [esi - 0x118]
// 0070b1ae  81c6ccfeffff         add esi, 0xfffffecc
// 0070b1b4  50                   push eax
// 0070b1b5  8d4c2408             lea ecx, [esp + 8]
// 0070b1b9  e8a457f9ff           call 0x6a0962
// 0070b1be  8bce                 mov ecx, esi
// 0070b1c0  e8e1110b00           call 0x7bc3a6
// 0070b1c5  8bf0                 mov esi, eax
// 0070b1c7  8b442408             mov eax, dword ptr [esp + 8]
// 0070b1cb  85c0                 test eax, eax
// 0070b1cd  7407                 je 0x70b1d6
// 0070b1cf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070b1d3  894804               mov dword ptr [eax + 4], ecx
// 0070b1d6  837c241000           cmp dword ptr [esp + 0x10], 0
// 0070b1db  740c                 je 0x70b1e9
// 0070b1dd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070b1e1  52                   push edx
// 0070b1e2  6a00                 push 0
// 0070b1e4  e87357f9ff           call 0x6a095c
// 0070b1e9  8bc6                 mov eax, esi
// 0070b1eb  5e                   pop esi
// 0070b1ec  83c410               add esp, 0x10
// 0070b1ef  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?AddRef@XDocHostUIHandler@CHTMLToolTip@CXTPToolTipContext@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
