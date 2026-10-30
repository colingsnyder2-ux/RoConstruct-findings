// roc 2007-03 00696a90  unit: seg_00690000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00696a90
//
// 00696a90  56                   push esi
// 00696a91  8bf1                 mov esi, ecx
// 00696a93  8b4630               mov eax, dword ptr [esi + 0x30]
// 00696a96  85c0                 test eax, eax
// 00696a98  740e                 je 0x696aa8
// 00696a9a  50                   push eax
// 00696a9b  ff15bcef7700         call dword ptr [0x77efbc]
// 00696aa1  c7463000000000       mov dword ptr [esi + 0x30], 0
// 00696aa8  8b4634               mov eax, dword ptr [esi + 0x34]
// 00696aab  50                   push eax
// 00696aac  e88ffdffff           call 0x696840
// 00696ab1  83c404               add esp, 4
// 00696ab4  894630               mov dword ptr [esi + 0x30], eax
// 00696ab7  5e                   pop esi
// 00696ab8  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Reset@CXTPShortcutManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
