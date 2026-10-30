// roc 2012-06 00a17ae0  unit: CXTPShortcutManager  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17ae0
//
// 00a17ae0  8b4104               mov eax, dword ptr [ecx + 4]
// 00a17ae3  85c0                 test eax, eax
// 00a17ae5  7501                 jne 0xa17ae8
// 00a17ae7  c3                   ret 
// 00a17ae8  8a00                 mov al, byte ptr [eax]
// 00a17aea  a808                 test al, 8
// 00a17aec  7406                 je 0xa17af4
// 00a17aee  b803000000           mov eax, 3
// 00a17af3  c3                   ret 
// 00a17af4  a810                 test al, 0x10
// 00a17af6  7406                 je 0xa17afe
// 00a17af8  b802000000           mov eax, 2
// 00a17afd  c3                   ret 
// 00a17afe  2404                 and al, 4
// 00a17b00  0fb6c0               movzx eax, al
// 00a17b03  f7d8                 neg eax
// 00a17b05  1bc0                 sbb eax, eax
// 00a17b07  83e0fd               and eax, 0xfffffffd
// 00a17b0a  83c004               add eax, 4
// 00a17b0d  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Priority@CKeyHelper@CXTPShortcutManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
