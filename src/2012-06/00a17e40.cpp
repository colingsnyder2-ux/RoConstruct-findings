// roc 2012-06 00a17e40  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a17e40
//
// 00a17e40  56                   push esi
// 00a17e41  8bf1                 mov esi, ecx
// 00a17e43  8b4630               mov eax, dword ptr [esi + 0x30]
// 00a17e46  85c0                 test eax, eax
// 00a17e48  740e                 je 0xa17e58
// 00a17e4a  50                   push eax
// 00a17e4b  ff15543cb200         call dword ptr [0xb23c54]
// 00a17e51  c7463000000000       mov dword ptr [esi + 0x30], 0
// 00a17e58  8b4634               mov eax, dword ptr [esi + 0x34]
// 00a17e5b  50                   push eax
// 00a17e5c  e89ffdffff           call 0xa17c00
// 00a17e61  83c404               add esp, 4
// 00a17e64  894630               mov dword ptr [esi + 0x30], eax
// 00a17e67  5e                   pop esi
// 00a17e68  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Reset@CXTPShortcutManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
