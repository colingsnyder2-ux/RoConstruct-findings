// roc 2010-06 00842810  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842810
//
// 00842810  56                   push esi
// 00842811  8bf1                 mov esi, ecx
// 00842813  8b4634               mov eax, dword ptr [esi + 0x34]
// 00842816  85c0                 test eax, eax
// 00842818  740e                 je 0x842828
// 0084281a  50                   push eax
// 0084281b  ff1520bb9e00         call dword ptr [0x9ebb20]
// 00842821  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00842828  8b4630               mov eax, dword ptr [esi + 0x30]
// 0084282b  50                   push eax
// 0084282c  e8cffdffff           call 0x842600
// 00842831  83c404               add esp, 4
// 00842834  894634               mov dword ptr [esi + 0x34], eax
// 00842837  5e                   pop esi
// 00842838  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CreateOriginalAccelTable@CXTPShortcutManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
