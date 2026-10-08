// roc 2009-06 007b4260  unit: CXTPShortcutManager  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b4260
//
// 007b4260  8b4104               mov eax, dword ptr [ecx + 4]
// 007b4263  85c0                 test eax, eax
// 007b4265  7501                 jne 0x7b4268
// 007b4267  c3                   ret 
// 007b4268  8a00                 mov al, byte ptr [eax]
// 007b426a  a808                 test al, 8
// 007b426c  7406                 je 0x7b4274
// 007b426e  b803000000           mov eax, 3
// 007b4273  c3                   ret 
// 007b4274  a810                 test al, 0x10
// 007b4276  7406                 je 0x7b427e
// 007b4278  b802000000           mov eax, 2
// 007b427d  c3                   ret 
// 007b427e  2404                 and al, 4
// 007b4280  0fb6c0               movzx eax, al
// 007b4283  f7d8                 neg eax
// 007b4285  1bc0                 sbb eax, eax
// 007b4287  83e0fd               and eax, 0xfffffffd
// 007b428a  83c004               add eax, 4
// 007b428d  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Priority@CKeyHelper@CXTPShortcutManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
