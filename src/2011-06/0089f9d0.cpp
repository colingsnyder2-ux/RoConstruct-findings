// roc 2011-06 0089f9d0  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089f9d0
//
// 0089f9d0  56                   push esi
// 0089f9d1  8bf1                 mov esi, ecx
// 0089f9d3  8b4634               mov eax, dword ptr [esi + 0x34]
// 0089f9d6  85c0                 test eax, eax
// 0089f9d8  740e                 je 0x89f9e8
// 0089f9da  50                   push eax
// 0089f9db  ff15481aa400         call dword ptr [0xa41a48]
// 0089f9e1  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0089f9e8  8b4630               mov eax, dword ptr [esi + 0x30]
// 0089f9eb  50                   push eax
// 0089f9ec  e8cffdffff           call 0x89f7c0
// 0089f9f1  83c404               add esp, 4
// 0089f9f4  894634               mov dword ptr [esi + 0x34], eax
// 0089f9f7  5e                   pop esi
// 0089f9f8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?CreateOriginalAccelTable@CXTPShortcutManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
