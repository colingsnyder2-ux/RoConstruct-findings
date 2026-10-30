// roc 2007-03 00696a60  unit: seg_00690000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00696a60
//
// 00696a60  56                   push esi
// 00696a61  8bf1                 mov esi, ecx
// 00696a63  8b4634               mov eax, dword ptr [esi + 0x34]
// 00696a66  85c0                 test eax, eax
// 00696a68  740e                 je 0x696a78
// 00696a6a  50                   push eax
// 00696a6b  ff15bcef7700         call dword ptr [0x77efbc]
// 00696a71  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00696a78  8b4630               mov eax, dword ptr [esi + 0x30]
// 00696a7b  50                   push eax
// 00696a7c  e8bffdffff           call 0x696840
// 00696a81  83c404               add esp, 4
// 00696a84  894634               mov dword ptr [esi + 0x34], eax
// 00696a87  5e                   pop esi
// 00696a88  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CreateOriginalAccelTable@CXTPShortcutManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
