// from server: 100% by auto
// roc 2011-06 00829ed0  unit: CXTPCommandBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829ed0
//
// 00829ed0  56                   push esi
// 00829ed1  8bf1                 mov esi, ecx
// 00829ed3  e8b80bffff           call 0x81aa90
// 00829ed8  85c0                 test eax, eax
// 00829eda  740c                 je 0x829ee8
// 00829edc  397040               cmp dword ptr [eax + 0x40], esi
// 00829edf  7507                 jne 0x829ee8
// 00829ee1  8b4044               mov eax, dword ptr [eax + 0x44]
// 00829ee4  85c0                 test eax, eax
// 00829ee6  7f02                 jg 0x829eea
// 00829ee8  33c0                 xor eax, eax
// 00829eea  5e                   pop esi
// 00829eeb  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?IsKeyboardTipsVisible@CXTPCommandBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
