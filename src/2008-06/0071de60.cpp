// roc 2008-06 0071de60  unit: CXTPShortcutManager  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071de60
//
// 0071de60  56                   push esi
// 0071de61  8bf1                 mov esi, ecx
// 0071de63  8b4630               mov eax, dword ptr [esi + 0x30]
// 0071de66  85c0                 test eax, eax
// 0071de68  740e                 je 0x71de78
// 0071de6a  50                   push eax
// 0071de6b  ff15102c8000         call dword ptr [0x802c10]
// 0071de71  c7463000000000       mov dword ptr [esi + 0x30], 0
// 0071de78  8b4634               mov eax, dword ptr [esi + 0x34]
// 0071de7b  50                   push eax
// 0071de7c  e89ffdffff           call 0x71dc20
// 0071de81  83c404               add esp, 4
// 0071de84  894630               mov dword ptr [esi + 0x30], eax
// 0071de87  5e                   pop esi
// 0071de88  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShortcutManager.cpp (function ?Reset@CXTPShortcutManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShortcutManager.cpp
