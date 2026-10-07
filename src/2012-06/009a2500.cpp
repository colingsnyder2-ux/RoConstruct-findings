// roc 2012-06 009a2500  unit: CXTPCommandBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2500
//
// 009a2500  56                   push esi
// 009a2501  8bf1                 mov esi, ecx
// 009a2503  e8e807ffff           call 0x992cf0
// 009a2508  85c0                 test eax, eax
// 009a250a  740c                 je 0x9a2518
// 009a250c  397040               cmp dword ptr [eax + 0x40], esi
// 009a250f  7507                 jne 0x9a2518
// 009a2511  8b4044               mov eax, dword ptr [eax + 0x44]
// 009a2514  85c0                 test eax, eax
// 009a2516  7f02                 jg 0x9a251a
// 009a2518  33c0                 xor eax, eax
// 009a251a  5e                   pop esi
// 009a251b  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?IsKeyboardTipsVisible@CXTPCommandBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
