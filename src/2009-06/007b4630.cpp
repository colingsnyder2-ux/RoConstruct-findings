// roc 2009-06 007b4630  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b4630
//
// 007b4630  56                   push esi
// 007b4631  8bf1                 mov esi, ecx
// 007b4633  8b4630               mov eax, dword ptr [esi + 0x30]
// 007b4636  85c0                 test eax, eax
// 007b4638  740e                 je 0x7b4648
// 007b463a  50                   push eax
// 007b463b  ff15d8ec8900         call dword ptr [0x89ecd8]
// 007b4641  c7463000000000       mov dword ptr [esi + 0x30], 0
// 007b4648  8b4634               mov eax, dword ptr [esi + 0x34]
// 007b464b  50                   push eax
// 007b464c  e82ffdffff           call 0x7b4380
// 007b4651  83c404               add esp, 4
// 007b4654  894630               mov dword ptr [esi + 0x30], eax
// 007b4657  5e                   pop esi
// 007b4658  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Reset@CXTPShortcutManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
