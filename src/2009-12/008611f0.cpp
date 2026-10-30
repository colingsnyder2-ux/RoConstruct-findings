// roc 2009-12 008611f0  unit: CXTPToolTipContext::CHTMLToolTip::XOleClientSite  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008611f0
//
// 008611f0  83ec10               sub esp, 0x10
// 008611f3  56                   push esi
// 008611f4  8b742418             mov esi, dword ptr [esp + 0x18]
// 008611f8  8b86ecfeffff         mov eax, dword ptr [esi - 0x114]
// 008611fe  81c6d0feffff         add esi, 0xfffffed0
// 00861204  50                   push eax
// 00861205  8d4c2408             lea ecx, [esp + 8]
// 00861209  e82229f9ff           call 0x7f3b30
// 0086120e  8bce                 mov ecx, esi
// 00861210  e8372ef9ff           call 0x7f404c
// 00861215  8bf0                 mov esi, eax
// 00861217  8b442408             mov eax, dword ptr [esp + 8]
// 0086121b  85c0                 test eax, eax
// 0086121d  7407                 je 0x861226
// 0086121f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00861223  894804               mov dword ptr [eax + 4], ecx
// 00861226  837c241000           cmp dword ptr [esp + 0x10], 0
// 0086122b  740c                 je 0x861239
// 0086122d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00861231  52                   push edx
// 00861232  6a00                 push 0
// 00861234  e8eb28f9ff           call 0x7f3b24
// 00861239  8bc6                 mov eax, esi
// 0086123b  5e                   pop esi
// 0086123c  83c410               add esp, 0x10
// 0086123f  c20400               ret 4
// copied from an identical function in another client (function ?AddRef@XOleClientSite@CHTMLToolTip@CXTPToolTipContext@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp