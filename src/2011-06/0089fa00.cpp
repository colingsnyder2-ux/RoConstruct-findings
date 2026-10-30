// roc 2011-06 0089fa00  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089fa00
//
// 0089fa00  56                   push esi
// 0089fa01  8bf1                 mov esi, ecx
// 0089fa03  8b4630               mov eax, dword ptr [esi + 0x30]
// 0089fa06  85c0                 test eax, eax
// 0089fa08  740e                 je 0x89fa18
// 0089fa0a  50                   push eax
// 0089fa0b  ff15481aa400         call dword ptr [0xa41a48]
// 0089fa11  c7463000000000       mov dword ptr [esi + 0x30], 0
// 0089fa18  8b4634               mov eax, dword ptr [esi + 0x34]
// 0089fa1b  50                   push eax
// 0089fa1c  e89ffdffff           call 0x89f7c0
// 0089fa21  83c404               add esp, 4
// 0089fa24  894630               mov dword ptr [esi + 0x30], eax
// 0089fa27  5e                   pop esi
// 0089fa28  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Reset@CXTPShortcutManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
