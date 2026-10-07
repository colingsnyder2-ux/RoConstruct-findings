// roc 2007-08 006a46b0  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a46b0
//
// 006a46b0  56                   push esi
// 006a46b1  8bf1                 mov esi, ecx
// 006a46b3  8b4630               mov eax, dword ptr [esi + 0x30]
// 006a46b6  85c0                 test eax, eax
// 006a46b8  740e                 je 0x6a46c8
// 006a46ba  50                   push eax
// 006a46bb  ff15a4ec7700         call dword ptr [0x77eca4]
// 006a46c1  c7463000000000       mov dword ptr [esi + 0x30], 0
// 006a46c8  8b4634               mov eax, dword ptr [esi + 0x34]
// 006a46cb  50                   push eax
// 006a46cc  e89ffdffff           call 0x6a4470
// 006a46d1  83c404               add esp, 4
// 006a46d4  894630               mov dword ptr [esi + 0x30], eax
// 006a46d7  5e                   pop esi
// 006a46d8  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?Reset@CXTPShortcutManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp
