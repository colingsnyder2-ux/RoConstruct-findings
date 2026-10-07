// roc 2007-08 006a4680  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a4680
//
// 006a4680  56                   push esi
// 006a4681  8bf1                 mov esi, ecx
// 006a4683  8b4634               mov eax, dword ptr [esi + 0x34]
// 006a4686  85c0                 test eax, eax
// 006a4688  740e                 je 0x6a4698
// 006a468a  50                   push eax
// 006a468b  ff15a4ec7700         call dword ptr [0x77eca4]
// 006a4691  c7463400000000       mov dword ptr [esi + 0x34], 0
// 006a4698  8b4630               mov eax, dword ptr [esi + 0x30]
// 006a469b  50                   push eax
// 006a469c  e8cffdffff           call 0x6a4470
// 006a46a1  83c404               add esp, 4
// 006a46a4  894634               mov dword ptr [esi + 0x34], eax
// 006a46a7  5e                   pop esi
// 006a46a8  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?CreateOriginalAccelTable@CXTPShortcutManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp
