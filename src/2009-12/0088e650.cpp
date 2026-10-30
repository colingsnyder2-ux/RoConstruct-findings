// roc 2009-12 0088e650  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088e650
//
// 0088e650  56                   push esi
// 0088e651  8bf1                 mov esi, ecx
// 0088e653  8b4630               mov eax, dword ptr [esi + 0x30]
// 0088e656  85c0                 test eax, eax
// 0088e658  740e                 je 0x88e668
// 0088e65a  50                   push eax
// 0088e65b  ff159ccb9800         call dword ptr [0x98cb9c]
// 0088e661  c7463000000000       mov dword ptr [esi + 0x30], 0
// 0088e668  8b4634               mov eax, dword ptr [esi + 0x34]
// 0088e66b  50                   push eax
// 0088e66c  e82ffdffff           call 0x88e3a0
// 0088e671  83c404               add esp, 4
// 0088e674  894630               mov dword ptr [esi + 0x30], eax
// 0088e677  5e                   pop esi
// 0088e678  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Reset@CXTPShortcutManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
