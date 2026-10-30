// roc 2009-12 00861250  unit: CXTPToolTipContext::CHTMLToolTip::XOleClientSite  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861250
//
// 00861250  83ec10               sub esp, 0x10
// 00861253  56                   push esi
// 00861254  8b742418             mov esi, dword ptr [esp + 0x18]
// 00861258  8b86ecfeffff         mov eax, dword ptr [esi - 0x114]
// 0086125e  81c6d0feffff         add esi, 0xfffffed0
// 00861264  50                   push eax
// 00861265  8d4c2408             lea ecx, [esp + 8]
// 00861269  e8c228f9ff           call 0x7f3b30
// 0086126e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00861272  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00861276  51                   push ecx
// 00861277  52                   push edx
// 00861278  8bce                 mov ecx, esi
// 0086127a  e8d32df9ff           call 0x7f4052
// 0086127f  8bf0                 mov esi, eax
// 00861281  8b442408             mov eax, dword ptr [esp + 8]
// 00861285  85c0                 test eax, eax
// 00861287  7407                 je 0x861290
// 00861289  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0086128d  894804               mov dword ptr [eax + 4], ecx
// 00861290  837c241000           cmp dword ptr [esp + 0x10], 0
// 00861295  740c                 je 0x8612a3
// 00861297  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0086129b  52                   push edx
// 0086129c  6a00                 push 0
// 0086129e  e88128f9ff           call 0x7f3b24
// 008612a3  8bc6                 mov eax, esi
// 008612a5  5e                   pop esi
// 008612a6  83c410               add esp, 0x10
// 008612a9  c20c00               ret 0xc
// copied from an identical function in another client (function ?QueryInterface@XOleClientSite@CHTMLToolTip@CXTPToolTipContext@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp