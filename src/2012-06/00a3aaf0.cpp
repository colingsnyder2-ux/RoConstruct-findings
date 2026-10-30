// roc 2012-06 00a3aaf0  unit: CXTPDockingPaneTabbedContainer  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3aaf0
//
// 00a3aaf0  837c2408fc           cmp dword ptr [esp + 8], -4
// 00a3aaf5  56                   push esi
// 00a3aaf6  8bf1                 mov esi, ecx
// 00a3aaf8  7409                 je 0xa3ab03
// 00a3aafa  e8df7bf4ff           call 0x9826de
// 00a3aaff  5e                   pop esi
// 00a3ab00  c20800               ret 8
// 00a3ab03  6838cdc000           push 0xc0cd38
// 00a3ab08  e8ddea0500           call 0xa995ea
// 00a3ab0d  85c0                 test eax, eax
// 00a3ab0f  7509                 jne 0xa3ab1a
// 00a3ab11  b805400080           mov eax, 0x80004005
// 00a3ab16  5e                   pop esi
// 00a3ab17  c20800               ret 8
// 00a3ab1a  50                   push eax
// 00a3ab1b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a3ab1f  50                   push eax
// 00a3ab20  6838cdc000           push 0xc0cd38
// 00a3ab25  8d8e38010000         lea ecx, [esi + 0x138]
// 00a3ab2b  e8f0f7f8ff           call 0x9ca320
// 00a3ab30  5e                   pop esi
// 00a3ab31  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnGetObject@CXTPDockingPaneTabbedContainer@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
