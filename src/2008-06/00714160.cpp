// roc 2008-06 00714160  unit: CXTPPropertyGridView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00714160
//
// 00714160  837c2408fc           cmp dword ptr [esp + 8], -4
// 00714165  56                   push esi
// 00714166  8bf1                 mov esi, ecx
// 00714168  7409                 je 0x714173
// 0071416a  e8f9caf8ff           call 0x6a0c68
// 0071416f  5e                   pop esi
// 00714170  c20800               ret 8
// 00714173  682c028500           push 0x85022c
// 00714178  e8e77e0a00           call 0x7bc064
// 0071417d  85c0                 test eax, eax
// 0071417f  7509                 jne 0x71418a
// 00714181  b805400080           mov eax, 0x80004005
// 00714186  5e                   pop esi
// 00714187  c20800               ret 8
// 0071418a  50                   push eax
// 0071418b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0071418f  50                   push eax
// 00714190  682c028500           push 0x85022c
// 00714195  8d4e54               lea ecx, [esi + 0x54]
// 00714198  e8334cfdff           call 0x6e8dd0
// 0071419d  5e                   pop esi
// 0071419e  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?OnGetObject@CXTPDockingPaneManager@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
