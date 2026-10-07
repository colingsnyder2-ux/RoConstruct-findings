// roc 2012-06 009ee3d0  unit: CXTPPropertyGridView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ee3d0
//
// 009ee3d0  837c2408fc           cmp dword ptr [esp + 8], -4
// 009ee3d5  56                   push esi
// 009ee3d6  8bf1                 mov esi, ecx
// 009ee3d8  7409                 je 0x9ee3e3
// 009ee3da  e8ff42f9ff           call 0x9826de
// 009ee3df  5e                   pop esi
// 009ee3e0  c20800               ret 8
// 009ee3e3  6838cdc000           push 0xc0cd38
// 009ee3e8  e8fdb10a00           call 0xa995ea
// 009ee3ed  85c0                 test eax, eax
// 009ee3ef  7509                 jne 0x9ee3fa
// 009ee3f1  b805400080           mov eax, 0x80004005
// 009ee3f6  5e                   pop esi
// 009ee3f7  c20800               ret 8
// 009ee3fa  50                   push eax
// 009ee3fb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009ee3ff  50                   push eax
// 009ee400  6838cdc000           push 0xc0cd38
// 009ee405  8d4e54               lea ecx, [esi + 0x54]
// 009ee408  e813bffdff           call 0x9ca320
// 009ee40d  5e                   pop esi
// 009ee40e  c20800               ret 8
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnGetObject@CXTPDockingPaneManager@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneManager.cpp
