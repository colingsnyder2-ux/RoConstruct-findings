// roc 2011-06 00875e30  unit: CXTPPropertyGridView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875e30
//
// 00875e30  837c2408fc           cmp dword ptr [esp + 8], -4
// 00875e35  56                   push esi
// 00875e36  8bf1                 mov esi, ecx
// 00875e38  7409                 je 0x875e43
// 00875e3a  e8ef47f9ff           call 0x80a62e
// 00875e3f  5e                   pop esi
// 00875e40  c20800               ret 8
// 00875e43  685816ac00           push 0xac1658
// 00875e48  e8e3671500           call 0x9cc630
// 00875e4d  85c0                 test eax, eax
// 00875e4f  7509                 jne 0x875e5a
// 00875e51  b805400080           mov eax, 0x80004005
// 00875e56  5e                   pop esi
// 00875e57  c20800               ret 8
// 00875e5a  50                   push eax
// 00875e5b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00875e5f  50                   push eax
// 00875e60  685816ac00           push 0xac1658
// 00875e65  8d4e54               lea ecx, [esi + 0x54]
// 00875e68  e8f3bffdff           call 0x851e60
// 00875e6d  5e                   pop esi
// 00875e6e  c20800               ret 8
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnGetObject@CXTPDockingPaneManager@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
