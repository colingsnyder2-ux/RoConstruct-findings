// roc 2009-12 00861370  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861370
//
// 00861370  83ec10               sub esp, 0x10
// 00861373  56                   push esi
// 00861374  8b742418             mov esi, dword ptr [esp + 0x18]
// 00861378  8b86e8feffff         mov eax, dword ptr [esi - 0x118]
// 0086137e  81c6ccfeffff         add esi, 0xfffffecc
// 00861384  50                   push eax
// 00861385  8d4c2408             lea ecx, [esp + 8]
// 00861389  e8a227f9ff           call 0x7f3b30
// 0086138e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00861392  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00861396  51                   push ecx
// 00861397  52                   push edx
// 00861398  8bce                 mov ecx, esi
// 0086139a  e8b32cf9ff           call 0x7f4052
// 0086139f  8bf0                 mov esi, eax
// 008613a1  8b442408             mov eax, dword ptr [esp + 8]
// 008613a5  85c0                 test eax, eax
// 008613a7  7407                 je 0x8613b0
// 008613a9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008613ad  894804               mov dword ptr [eax + 4], ecx
// 008613b0  837c241000           cmp dword ptr [esp + 0x10], 0
// 008613b5  740c                 je 0x8613c3
// 008613b7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008613bb  52                   push edx
// 008613bc  6a00                 push 0
// 008613be  e86127f9ff           call 0x7f3b24
// 008613c3  8bc6                 mov eax, esi
// 008613c5  5e                   pop esi
// 008613c6  83c410               add esp, 0x10
// 008613c9  c20c00               ret 0xc
// copied from an identical function in another client (function ?QueryInterface@XDocHostUIHandler@CHTMLToolTip@CXTPToolTipContext@@UAGJABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp