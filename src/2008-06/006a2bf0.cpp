// roc 2008-06 006a2bf0  unit: CXTPCommandBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2bf0
//
// 006a2bf0  56                   push esi
// 006a2bf1  8bf1                 mov esi, ecx
// 006a2bf3  e818220100           call 0x6b4e10
// 006a2bf8  85c0                 test eax, eax
// 006a2bfa  740c                 je 0x6a2c08
// 006a2bfc  397040               cmp dword ptr [eax + 0x40], esi
// 006a2bff  7507                 jne 0x6a2c08
// 006a2c01  8b4044               mov eax, dword ptr [eax + 0x44]
// 006a2c04  85c0                 test eax, eax
// 006a2c06  7f02                 jg 0x6a2c0a
// 006a2c08  33c0                 xor eax, eax
// 006a2c0a  5e                   pop esi
// 006a2c0b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?IsKeyboardTipsVisible@CXTPCommandBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
