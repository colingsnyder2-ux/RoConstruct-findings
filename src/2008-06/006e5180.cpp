// from server: 100% by auto
// roc 2008-06 006e5180  unit: CXTPDockingPaneManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5180
//
// 006e5180  8d442404             lea eax, [esp + 4]
// 006e5184  50                   push eax
// 006e5185  e816310000           call 0x6e82a0
// 006e518a  85c0                 test eax, eax
// 006e518c  740d                 je 0x6e519b
// 006e518e  83f8ff               cmp eax, -1
// 006e5191  7408                 je 0x6e519b
// 006e5193  b857000780           mov eax, 0x80070057
// 006e5198  c21400               ret 0x14
// 006e519b  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e519f  b903000000           mov ecx, 3
// 006e51a4  668908               mov word ptr [eax], cx
// 006e51a7  c7400800000000       mov dword ptr [eax + 8], 0
// 006e51ae  33c0                 xor eax, eax
// 006e51b0  c21400               ret 0x14
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?GetAccessibleState@CXTPDockingPaneManager@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
