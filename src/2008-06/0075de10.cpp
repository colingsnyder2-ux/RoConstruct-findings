// roc 2008-06 0075de10  unit: CXTPDockingPaneTabbedContainer  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075de10
//
// 0075de10  837c2408fc           cmp dword ptr [esp + 8], -4
// 0075de15  56                   push esi
// 0075de16  8bf1                 mov esi, ecx
// 0075de18  7409                 je 0x75de23
// 0075de1a  e8492ef4ff           call 0x6a0c68
// 0075de1f  5e                   pop esi
// 0075de20  c20800               ret 8
// 0075de23  682c028500           push 0x85022c
// 0075de28  e837e20500           call 0x7bc064
// 0075de2d  85c0                 test eax, eax
// 0075de2f  7509                 jne 0x75de3a
// 0075de31  b805400080           mov eax, 0x80004005
// 0075de36  5e                   pop esi
// 0075de37  c20800               ret 8
// 0075de3a  50                   push eax
// 0075de3b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0075de3f  50                   push eax
// 0075de40  682c028500           push 0x85022c
// 0075de45  8d8e38010000         lea ecx, [esi + 0x138]
// 0075de4b  e880aff8ff           call 0x6e8dd0
// 0075de50  5e                   pop esi
// 0075de51  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnGetObject@CXTPDockingPaneTabbedContainer@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
