// roc 2009-12 008612b0  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008612b0
//
// 008612b0  83ec10               sub esp, 0x10
// 008612b3  56                   push esi
// 008612b4  8b742418             mov esi, dword ptr [esp + 0x18]
// 008612b8  8b86e8feffff         mov eax, dword ptr [esi - 0x118]
// 008612be  81c6ccfeffff         add esi, 0xfffffecc
// 008612c4  50                   push eax
// 008612c5  8d4c2408             lea ecx, [esp + 8]
// 008612c9  e86228f9ff           call 0x7f3b30
// 008612ce  8bce                 mov ecx, esi
// 008612d0  e8712df9ff           call 0x7f4046
// 008612d5  8bf0                 mov esi, eax
// 008612d7  8b442408             mov eax, dword ptr [esp + 8]
// 008612db  85c0                 test eax, eax
// 008612dd  7407                 je 0x8612e6
// 008612df  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008612e3  894804               mov dword ptr [eax + 4], ecx
// 008612e6  837c241000           cmp dword ptr [esp + 0x10], 0
// 008612eb  740c                 je 0x8612f9
// 008612ed  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008612f1  52                   push edx
// 008612f2  6a00                 push 0
// 008612f4  e82b28f9ff           call 0x7f3b24
// 008612f9  8bc6                 mov eax, esi
// 008612fb  5e                   pop esi
// 008612fc  83c410               add esp, 0x10
// 008612ff  c20400               ret 4
// copied from an identical function in another client (function ?AddRef@XDocHostUIHandler@CHTMLToolTip@CXTPToolTipContext@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp