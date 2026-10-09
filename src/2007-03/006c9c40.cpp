// roc 2007-03 006c9c40  unit: seg_006c0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c9c40
//
// 006c9c40  53                   push ebx
// 006c9c41  55                   push ebp
// 006c9c42  56                   push esi
// 006c9c43  8bf1                 mov esi, ecx
// 006c9c45  57                   push edi
// 006c9c46  8d4e54               lea ecx, [esi + 0x54]
// 006c9c49  e8d2f8ffff           call 0x6c9520
// 006c9c4e  85c0                 test eax, eax
// 006c9c50  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006c9c54  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006c9c58  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006c9c5c  740f                 je 0x6c9c6d
// 006c9c5e  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 006c9c64  57                   push edi
// 006c9c65  53                   push ebx
// 006c9c66  55                   push ebp
// 006c9c67  56                   push esi
// 006c9c68  e86366fbff           call 0x6802d0
// 006c9c6d  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c9c71  50                   push eax
// 006c9c72  57                   push edi
// 006c9c73  53                   push ebx
// 006c9c74  55                   push ebp
// 006c9c75  8bce                 mov ecx, esi
// 006c9c77  e8f445f5ff           call 0x61e270
// 006c9c7c  5f                   pop edi
// 006c9c7d  5e                   pop esi
// 006c9c7e  5d                   pop ebp
// 006c9c7f  5b                   pop ebx
// 006c9c80  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnWndMsg@CXTPDockingPaneTabbedContainer@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
