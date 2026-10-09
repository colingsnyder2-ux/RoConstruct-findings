// roc 2009-12 0088e280  unit: CXTPShortcutManager  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088e280
//
// 0088e280  8b4104               mov eax, dword ptr [ecx + 4]
// 0088e283  85c0                 test eax, eax
// 0088e285  7501                 jne 0x88e288
// 0088e287  c3                   ret 
// 0088e288  8a00                 mov al, byte ptr [eax]
// 0088e28a  a808                 test al, 8
// 0088e28c  7406                 je 0x88e294
// 0088e28e  b803000000           mov eax, 3
// 0088e293  c3                   ret 
// 0088e294  a810                 test al, 0x10
// 0088e296  7406                 je 0x88e29e
// 0088e298  b802000000           mov eax, 2
// 0088e29d  c3                   ret 
// 0088e29e  2404                 and al, 4
// 0088e2a0  0fb6c0               movzx eax, al
// 0088e2a3  f7d8                 neg eax
// 0088e2a5  1bc0                 sbb eax, eax
// 0088e2a7  83e0fd               and eax, 0xfffffffd
// 0088e2aa  83c004               add eax, 4
// 0088e2ad  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Priority@CKeyHelper@CXTPShortcutManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
