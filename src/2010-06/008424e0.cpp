// roc 2010-06 008424e0  unit: CXTPShortcutManager  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008424e0
//
// 008424e0  8b4104               mov eax, dword ptr [ecx + 4]
// 008424e3  85c0                 test eax, eax
// 008424e5  7501                 jne 0x8424e8
// 008424e7  c3                   ret 
// 008424e8  8a00                 mov al, byte ptr [eax]
// 008424ea  a808                 test al, 8
// 008424ec  7406                 je 0x8424f4
// 008424ee  b803000000           mov eax, 3
// 008424f3  c3                   ret 
// 008424f4  a810                 test al, 0x10
// 008424f6  7406                 je 0x8424fe
// 008424f8  b802000000           mov eax, 2
// 008424fd  c3                   ret 
// 008424fe  2404                 and al, 4
// 00842500  0fb6c0               movzx eax, al
// 00842503  f7d8                 neg eax
// 00842505  1bc0                 sbb eax, eax
// 00842507  83e0fd               and eax, 0xfffffffd
// 0084250a  83c004               add eax, 4
// 0084250d  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Priority@CKeyHelper@CXTPShortcutManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
