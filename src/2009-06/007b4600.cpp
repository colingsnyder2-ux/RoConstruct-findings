// roc 2009-06 007b4600  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b4600
//
// 007b4600  56                   push esi
// 007b4601  8bf1                 mov esi, ecx
// 007b4603  8b4634               mov eax, dword ptr [esi + 0x34]
// 007b4606  85c0                 test eax, eax
// 007b4608  740e                 je 0x7b4618
// 007b460a  50                   push eax
// 007b460b  ff15d8ec8900         call dword ptr [0x89ecd8]
// 007b4611  c7463400000000       mov dword ptr [esi + 0x34], 0
// 007b4618  8b4630               mov eax, dword ptr [esi + 0x30]
// 007b461b  50                   push eax
// 007b461c  e85ffdffff           call 0x7b4380
// 007b4621  83c404               add esp, 4
// 007b4624  894634               mov dword ptr [esi + 0x34], eax
// 007b4627  5e                   pop esi
// 007b4628  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CreateOriginalAccelTable@CXTPShortcutManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
