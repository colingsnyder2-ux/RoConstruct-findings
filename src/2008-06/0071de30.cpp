// roc 2008-06 0071de30  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071de30
//
// 0071de30  56                   push esi
// 0071de31  8bf1                 mov esi, ecx
// 0071de33  8b4634               mov eax, dword ptr [esi + 0x34]
// 0071de36  85c0                 test eax, eax
// 0071de38  740e                 je 0x71de48
// 0071de3a  50                   push eax
// 0071de3b  ff15102c8000         call dword ptr [0x802c10]
// 0071de41  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0071de48  8b4630               mov eax, dword ptr [esi + 0x30]
// 0071de4b  50                   push eax
// 0071de4c  e8cffdffff           call 0x71dc20
// 0071de51  83c404               add esp, 4
// 0071de54  894634               mov dword ptr [esi + 0x34], eax
// 0071de57  5e                   pop esi
// 0071de58  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CreateOriginalAccelTable@CXTPShortcutManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
