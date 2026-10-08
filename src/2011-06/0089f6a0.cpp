// roc 2011-06 0089f6a0  unit: CXTPShortcutManager  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089f6a0
//
// 0089f6a0  8b4104               mov eax, dword ptr [ecx + 4]
// 0089f6a3  85c0                 test eax, eax
// 0089f6a5  7501                 jne 0x89f6a8
// 0089f6a7  c3                   ret 
// 0089f6a8  8a00                 mov al, byte ptr [eax]
// 0089f6aa  a808                 test al, 8
// 0089f6ac  7406                 je 0x89f6b4
// 0089f6ae  b803000000           mov eax, 3
// 0089f6b3  c3                   ret 
// 0089f6b4  a810                 test al, 0x10
// 0089f6b6  7406                 je 0x89f6be
// 0089f6b8  b802000000           mov eax, 2
// 0089f6bd  c3                   ret 
// 0089f6be  2404                 and al, 4
// 0089f6c0  0fb6c0               movzx eax, al
// 0089f6c3  f7d8                 neg eax
// 0089f6c5  1bc0                 sbb eax, eax
// 0089f6c7  83e0fd               and eax, 0xfffffffd
// 0089f6ca  83c004               add eax, 4
// 0089f6cd  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Priority@CKeyHelper@CXTPShortcutManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
