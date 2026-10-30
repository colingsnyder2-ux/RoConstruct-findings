// roc 2009-12 00861190  unit: CXTPToolTipContext::CHTMLToolTip::XOleClientSite  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861190
//
// 00861190  83ec10               sub esp, 0x10
// 00861193  56                   push esi
// 00861194  8b742418             mov esi, dword ptr [esp + 0x18]
// 00861198  8b86ecfeffff         mov eax, dword ptr [esi - 0x114]
// 0086119e  81c6d0feffff         add esi, 0xfffffed0
// 008611a4  50                   push eax
// 008611a5  8d4c2408             lea ecx, [esp + 8]
// 008611a9  e88229f9ff           call 0x7f3b30
// 008611ae  8bce                 mov ecx, esi
// 008611b0  e8912ef9ff           call 0x7f4046
// 008611b5  8bf0                 mov esi, eax
// 008611b7  8b442408             mov eax, dword ptr [esp + 8]
// 008611bb  85c0                 test eax, eax
// 008611bd  7407                 je 0x8611c6
// 008611bf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008611c3  894804               mov dword ptr [eax + 4], ecx
// 008611c6  837c241000           cmp dword ptr [esp + 0x10], 0
// 008611cb  740c                 je 0x8611d9
// 008611cd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008611d1  52                   push edx
// 008611d2  6a00                 push 0
// 008611d4  e84b29f9ff           call 0x7f3b24
// 008611d9  8bc6                 mov eax, esi
// 008611db  5e                   pop esi
// 008611dc  83c410               add esp, 0x10
// 008611df  c20400               ret 4
// copied from an identical function in another client (function ?AddRef@XOleClientSite@CHTMLToolTip@CXTPToolTipContext@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp