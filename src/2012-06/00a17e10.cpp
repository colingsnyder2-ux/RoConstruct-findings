// roc 2012-06 00a17e10  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17e10
//
// 00a17e10  56                   push esi
// 00a17e11  8bf1                 mov esi, ecx
// 00a17e13  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a17e16  85c0                 test eax, eax
// 00a17e18  740e                 je 0xa17e28
// 00a17e1a  50                   push eax
// 00a17e1b  ff15543cb200         call dword ptr [0xb23c54]
// 00a17e21  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00a17e28  8b4630               mov eax, dword ptr [esi + 0x30]
// 00a17e2b  50                   push eax
// 00a17e2c  e8cffdffff           call 0xa17c00
// 00a17e31  83c404               add esp, 4
// 00a17e34  894634               mov dword ptr [esi + 0x34], eax
// 00a17e37  5e                   pop esi
// 00a17e38  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CreateOriginalAccelTable@CXTPShortcutManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
