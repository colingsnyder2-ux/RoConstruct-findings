// roc 2009-12 008b1190  unit: CXTPDockingPaneTabbedContainer  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1190
//
// 008b1190  837c2408fc           cmp dword ptr [esp + 8], -4
// 008b1195  56                   push esi
// 008b1196  8bf1                 mov esi, ecx
// 008b1198  7409                 je 0x8b11a3
// 008b119a  e8912cf4ff           call 0x7f3e30
// 008b119f  5e                   pop esi
// 008b11a0  c20800               ret 8
// 008b11a3  6800179f00           push 0x9f1700
// 008b11a8  e80d530700           call 0x9264ba
// 008b11ad  85c0                 test eax, eax
// 008b11af  7509                 jne 0x8b11ba
// 008b11b1  b805400080           mov eax, 0x80004005
// 008b11b6  5e                   pop esi
// 008b11b7  c20800               ret 8
// 008b11ba  50                   push eax
// 008b11bb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008b11bf  50                   push eax
// 008b11c0  6800179f00           push 0x9f1700
// 008b11c5  8d8e38010000         lea ecx, [esi + 0x138]
// 008b11cb  e8f0b2f8ff           call 0x83c4c0
// 008b11d0  5e                   pop esi
// 008b11d1  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnGetObject@CXTPDockingPaneTabbedContainer@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
