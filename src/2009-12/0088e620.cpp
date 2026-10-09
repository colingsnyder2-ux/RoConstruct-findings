// roc 2009-12 0088e620  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088e620
//
// 0088e620  56                   push esi
// 0088e621  8bf1                 mov esi, ecx
// 0088e623  8b4634               mov eax, dword ptr [esi + 0x34]
// 0088e626  85c0                 test eax, eax
// 0088e628  740e                 je 0x88e638
// 0088e62a  50                   push eax
// 0088e62b  ff159ccb9800         call dword ptr [0x98cb9c]
// 0088e631  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0088e638  8b4630               mov eax, dword ptr [esi + 0x30]
// 0088e63b  50                   push eax
// 0088e63c  e85ffdffff           call 0x88e3a0
// 0088e641  83c404               add esp, 4
// 0088e644  894634               mov dword ptr [esi + 0x34], eax
// 0088e647  5e                   pop esi
// 0088e648  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CreateOriginalAccelTable@CXTPShortcutManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
