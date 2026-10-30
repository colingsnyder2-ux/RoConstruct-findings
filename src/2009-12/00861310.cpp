// roc 2009-12 00861310  unit: CXTPToolTipContext::CHTMLToolTip::XDocHostUIHandler  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861310
//
// 00861310  83ec10               sub esp, 0x10
// 00861313  56                   push esi
// 00861314  8b742418             mov esi, dword ptr [esp + 0x18]
// 00861318  8b86e8feffff         mov eax, dword ptr [esi - 0x118]
// 0086131e  81c6ccfeffff         add esi, 0xfffffecc
// 00861324  50                   push eax
// 00861325  8d4c2408             lea ecx, [esp + 8]
// 00861329  e80228f9ff           call 0x7f3b30
// 0086132e  8bce                 mov ecx, esi
// 00861330  e8172df9ff           call 0x7f404c
// 00861335  8bf0                 mov esi, eax
// 00861337  8b442408             mov eax, dword ptr [esp + 8]
// 0086133b  85c0                 test eax, eax
// 0086133d  7407                 je 0x861346
// 0086133f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00861343  894804               mov dword ptr [eax + 4], ecx
// 00861346  837c241000           cmp dword ptr [esp + 0x10], 0
// 0086134b  740c                 je 0x861359
// 0086134d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00861351  52                   push edx
// 00861352  6a00                 push 0
// 00861354  e8cb27f9ff           call 0x7f3b24
// 00861359  8bc6                 mov eax, esi
// 0086135b  5e                   pop esi
// 0086135c  83c410               add esp, 0x10
// 0086135f  c20400               ret 4
// copied from an identical function in another client (function ?AddRef@XDocHostUIHandler@CHTMLToolTip@CXTPToolTipContext@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp