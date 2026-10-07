// roc 2008-06 0071db00  unit: CXTPShortcutManager  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071db00
//
// 0071db00  8b4104               mov eax, dword ptr [ecx + 4]
// 0071db03  85c0                 test eax, eax
// 0071db05  7501                 jne 0x71db08
// 0071db07  c3                   ret 
// 0071db08  8a00                 mov al, byte ptr [eax]
// 0071db0a  a808                 test al, 8
// 0071db0c  7406                 je 0x71db14
// 0071db0e  b803000000           mov eax, 3
// 0071db13  c3                   ret 
// 0071db14  a810                 test al, 0x10
// 0071db16  7406                 je 0x71db1e
// 0071db18  b802000000           mov eax, 2
// 0071db1d  c3                   ret 
// 0071db1e  2404                 and al, 4
// 0071db20  0fb6c0               movzx eax, al
// 0071db23  f7d8                 neg eax
// 0071db25  1bc0                 sbb eax, eax
// 0071db27  83e0fd               and eax, 0xfffffffd
// 0071db2a  83c004               add eax, 4
// 0071db2d  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Priority@CKeyHelper@CXTPShortcutManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
