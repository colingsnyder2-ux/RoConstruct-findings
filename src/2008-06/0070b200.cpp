// roc 2008-06 0070b200  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070b200
//
// 0070b200  83ec10               sub esp, 0x10
// 0070b203  56                   push esi
// 0070b204  8b742418             mov esi, dword ptr [esp + 0x18]
// 0070b208  8b86e8feffff         mov eax, dword ptr [esi - 0x118]
// 0070b20e  81c6ccfeffff         add esi, 0xfffffecc
// 0070b214  50                   push eax
// 0070b215  8d4c2408             lea ecx, [esp + 8]
// 0070b219  e84457f9ff           call 0x6a0962
// 0070b21e  8bce                 mov ecx, esi
// 0070b220  e887110b00           call 0x7bc3ac
// 0070b225  8bf0                 mov esi, eax
// 0070b227  8b442408             mov eax, dword ptr [esp + 8]
// 0070b22b  85c0                 test eax, eax
// 0070b22d  7407                 je 0x70b236
// 0070b22f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070b233  894804               mov dword ptr [eax + 4], ecx
// 0070b236  837c241000           cmp dword ptr [esp + 0x10], 0
// 0070b23b  740c                 je 0x70b249
// 0070b23d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070b241  52                   push edx
// 0070b242  6a00                 push 0
// 0070b244  e81357f9ff           call 0x6a095c
// 0070b249  8bc6                 mov eax, esi
// 0070b24b  5e                   pop esi
// 0070b24c  83c410               add esp, 0x10
// 0070b24f  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?AddRef@XDocHostUIHandler@CHTMLToolTip@CXTPToolTipContext@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
