// roc 2008-06 007221d0  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007221d0
//
// 007221d0  8b442404             mov eax, dword ptr [esp + 4]
// 007221d4  56                   push esi
// 007221d5  50                   push eax
// 007221d6  8bf1                 mov esi, ecx
// 007221d8  e83334f9ff           call 0x6b5610
// 007221dd  83f8ff               cmp eax, -1
// 007221e0  7506                 jne 0x7221e8
// 007221e2  0bc0                 or eax, eax
// 007221e4  5e                   pop esi
// 007221e5  c20400               ret 4
// 007221e8  8bce                 mov ecx, esi
// 007221ea  e8b1e4ffff           call 0x7206a0
// 007221ef  33c0                 xor eax, eax
// 007221f1  5e                   pop esi
// 007221f2  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnCreate@CXTPRibbonBar@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
