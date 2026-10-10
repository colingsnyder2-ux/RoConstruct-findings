// roc 2008-06 0070b260  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070b260
//
// 0070b260  83ec10               sub esp, 0x10
// 0070b263  56                   push esi
// 0070b264  8b742418             mov esi, dword ptr [esp + 0x18]
// 0070b268  8b86e8feffff         mov eax, dword ptr [esi - 0x118]
// 0070b26e  81c6ccfeffff         add esi, 0xfffffecc
// 0070b274  50                   push eax
// 0070b275  8d4c2408             lea ecx, [esp + 8]
// 0070b279  e8e456f9ff           call 0x6a0962
// 0070b27e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0070b282  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0070b286  51                   push ecx
// 0070b287  52                   push edx
// 0070b288  8bce                 mov ecx, esi
// 0070b28a  e823110b00           call 0x7bc3b2
// 0070b28f  8bf0                 mov esi, eax
// 0070b291  8b442408             mov eax, dword ptr [esp + 8]
// 0070b295  85c0                 test eax, eax
// 0070b297  7407                 je 0x70b2a0
// 0070b299  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070b29d  894804               mov dword ptr [eax + 4], ecx
// 0070b2a0  837c241000           cmp dword ptr [esp + 0x10], 0
// 0070b2a5  740c                 je 0x70b2b3
// 0070b2a7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070b2ab  52                   push edx
// 0070b2ac  6a00                 push 0
// 0070b2ae  e8a956f9ff           call 0x6a095c
// 0070b2b3  8bc6                 mov eax, esi
// 0070b2b5  5e                   pop esi
// 0070b2b6  83c410               add esp, 0x10
// 0070b2b9  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ?QueryInterface@XDocHostUIHandler@CHTMLToolTip@CXTPToolTipContext@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
