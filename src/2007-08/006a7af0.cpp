// roc 2007-08 006a7af0  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7af0
//
// 006a7af0  8b442404             mov eax, dword ptr [esp + 4]
// 006a7af4  56                   push esi
// 006a7af5  50                   push eax
// 006a7af6  8bf1                 mov esi, ecx
// 006a7af8  e873c6f9ff           call 0x644170
// 006a7afd  83f8ff               cmp eax, -1
// 006a7b00  7506                 jne 0x6a7b08
// 006a7b02  0bc0                 or eax, eax
// 006a7b04  5e                   pop esi
// 006a7b05  c20400               ret 4
// 006a7b08  8bce                 mov ecx, esi
// 006a7b0a  e8f1e4ffff           call 0x6a6000
// 006a7b0f  33c0                 xor eax, eax
// 006a7b11  5e                   pop esi
// 006a7b12  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonBar.cpp (function ?OnCreate@CXTPRibbonBar@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonBar.cpp
