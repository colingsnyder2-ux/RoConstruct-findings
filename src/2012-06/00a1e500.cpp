// from server: 100% by auto
// roc 2012-06 00a1e500  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e500
//
// 00a1e500  8b442404             mov eax, dword ptr [esp + 4]
// 00a1e504  56                   push esi
// 00a1e505  50                   push eax
// 00a1e506  8bf1                 mov esi, ecx
// 00a1e508  e86350f7ff           call 0x993570
// 00a1e50d  83f8ff               cmp eax, -1
// 00a1e510  7506                 jne 0xa1e518
// 00a1e512  0bc0                 or eax, eax
// 00a1e514  5e                   pop esi
// 00a1e515  c20400               ret 4
// 00a1e518  8bce                 mov ecx, esi
// 00a1e51a  e861e5ffff           call 0xa1ca80
// 00a1e51f  33c0                 xor eax, eax
// 00a1e521  5e                   pop esi
// 00a1e522  c20400               ret 4
// library xtp-15.2.1/Source\Ribbon\XTPRibbonBar.cpp (function ?OnCreate@CXTPRibbonBar@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonBar.cpp
