// roc 2009-12 008602f0  unit: CXTPToolTipContext::CHTMLToolTip  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008602f0
//
// 008602f0  8b442404             mov eax, dword ptr [esp + 4]
// 008602f4  56                   push esi
// 008602f5  57                   push edi
// 008602f6  33ff                 xor edi, edi
// 008602f8  8bf1                 mov esi, ecx
// 008602fa  3bc7                 cmp eax, edi
// 008602fc  740b                 je 0x860309
// 008602fe  50                   push eax
// 008602ff  e8ccf8ffff           call 0x85fbd0
// 00860304  5f                   pop edi
// 00860305  5e                   pop esi
// 00860306  c20400               ret 4
// 00860309  ff1590d69800         call dword ptr [0x98d690]
// 0086030f  8d460c               lea eax, [esi + 0xc]
// 00860312  897e08               mov dword ptr [esi + 8], edi
// 00860315  897e20               mov dword ptr [esi + 0x20], edi
// 00860318  897e1c               mov dword ptr [esi + 0x1c], edi
// 0086031b  8b3d9cca9800         mov edi, dword ptr [0x98ca9c]
// 00860321  50                   push eax
// 00860322  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 00860329  ffd7                 call edi
// 0086032b  83c628               add esi, 0x28
// 0086032e  56                   push esi
// 0086032f  ffd7                 call edi
// 00860331  5f                   pop edi
// 00860332  5e                   pop esi
// 00860333  c20400               ret 4
// copied from an identical function in another client (function ?Assign@TOOLITEM@CXTPToolTipContextToolTip@@QAEXPAU12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp