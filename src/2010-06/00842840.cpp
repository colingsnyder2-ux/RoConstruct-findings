// roc 2010-06 00842840  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842840
//
// 00842840  56                   push esi
// 00842841  8bf1                 mov esi, ecx
// 00842843  8b4630               mov eax, dword ptr [esi + 0x30]
// 00842846  85c0                 test eax, eax
// 00842848  740e                 je 0x842858
// 0084284a  50                   push eax
// 0084284b  ff1520bb9e00         call dword ptr [0x9ebb20]
// 00842851  c7463000000000       mov dword ptr [esi + 0x30], 0
// 00842858  8b4634               mov eax, dword ptr [esi + 0x34]
// 0084285b  50                   push eax
// 0084285c  e89ffdffff           call 0x842600
// 00842861  83c404               add esp, 4
// 00842864  894630               mov dword ptr [esi + 0x30], eax
// 00842867  5e                   pop esi
// 00842868  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Reset@CXTPShortcutManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
