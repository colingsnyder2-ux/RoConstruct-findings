// roc 2012-06 00a64d90  unit: CXTPRichRender::XTextHost  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64d90
//
// 00a64d90  83ec10               sub esp, 0x10
// 00a64d93  56                   push esi
// 00a64d94  8bf1                 mov esi, ecx
// 00a64d96  8b46fc               mov eax, dword ptr [esi - 4]
// 00a64d99  50                   push eax
// 00a64d9a  8d4c2408             lea ecx, [esp + 8]
// 00a64d9e  e83bd6f1ff           call 0x9823de
// 00a64da3  817c241801070000     cmp dword ptr [esp + 0x18], 0x701
// 00a64dab  751c                 jne 0xa64dc9
// 00a64dad  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a64db1  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00a64db4  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00a64db7  898e04010000         mov dword ptr [esi + 0x104], ecx
// 00a64dbd  8b5018               mov edx, dword ptr [eax + 0x18]
// 00a64dc0  2b5010               sub edx, dword ptr [eax + 0x10]
// 00a64dc3  899608010000         mov dword ptr [esi + 0x108], edx
// 00a64dc9  8b442408             mov eax, dword ptr [esp + 8]
// 00a64dcd  5e                   pop esi
// 00a64dce  85c0                 test eax, eax
// 00a64dd0  7406                 je 0xa64dd8
// 00a64dd2  8b0c24               mov ecx, dword ptr [esp]
// 00a64dd5  894804               mov dword ptr [eax + 4], ecx
// 00a64dd8  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a64ddd  740c                 je 0xa64deb
// 00a64ddf  8b542408             mov edx, dword ptr [esp + 8]
// 00a64de3  52                   push edx
// 00a64de4  6a00                 push 0
// 00a64de6  e8edd5f1ff           call 0x9823d8
// 00a64deb  33c0                 xor eax, eax
// 00a64ded  83c410               add esp, 0x10
// 00a64df0  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\Common\XTPRichRender.cpp (function ?TxNotify@XTextHost@CXTPRichRender@@UAEJKPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPRichRender.cpp
