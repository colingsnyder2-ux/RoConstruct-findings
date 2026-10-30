// roc 2009-12 008dfb60  unit: CXTPRichRender::XTextHost  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dfb60
//
// 008dfb60  83ec10               sub esp, 0x10
// 008dfb63  56                   push esi
// 008dfb64  8bf1                 mov esi, ecx
// 008dfb66  8b46fc               mov eax, dword ptr [esi - 4]
// 008dfb69  50                   push eax
// 008dfb6a  8d4c2408             lea ecx, [esp + 8]
// 008dfb6e  e8bd3ff1ff           call 0x7f3b30
// 008dfb73  817c241801070000     cmp dword ptr [esp + 0x18], 0x701
// 008dfb7b  751c                 jne 0x8dfb99
// 008dfb7d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008dfb81  8b4814               mov ecx, dword ptr [eax + 0x14]
// 008dfb84  2b480c               sub ecx, dword ptr [eax + 0xc]
// 008dfb87  898e04010000         mov dword ptr [esi + 0x104], ecx
// 008dfb8d  8b5018               mov edx, dword ptr [eax + 0x18]
// 008dfb90  2b5010               sub edx, dword ptr [eax + 0x10]
// 008dfb93  899608010000         mov dword ptr [esi + 0x108], edx
// 008dfb99  8b442408             mov eax, dword ptr [esp + 8]
// 008dfb9d  5e                   pop esi
// 008dfb9e  85c0                 test eax, eax
// 008dfba0  7406                 je 0x8dfba8
// 008dfba2  8b0c24               mov ecx, dword ptr [esp]
// 008dfba5  894804               mov dword ptr [eax + 4], ecx
// 008dfba8  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008dfbad  740c                 je 0x8dfbbb
// 008dfbaf  8b542408             mov edx, dword ptr [esp + 8]
// 008dfbb3  52                   push edx
// 008dfbb4  6a00                 push 0
// 008dfbb6  e8693ff1ff           call 0x7f3b24
// 008dfbbb  33c0                 xor eax, eax
// 008dfbbd  83c410               add esp, 0x10
// 008dfbc0  c20800               ret 8
// copied from an identical function in another client (function ?TxNotify@XTextHost@CXTPRichRender@@UAEJKPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPRichRender.cpp