// roc 2010-06 00865270  unit: CXTPDockingPaneTabbedContainer  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00865270
//
// 00865270  837c2408fc           cmp dword ptr [esp + 8], -4
// 00865275  56                   push esi
// 00865276  8bf1                 mov esi, ecx
// 00865278  7409                 je 0x865283
// 0086527a  e8f12cf4ff           call 0x7a7f70
// 0086527f  5e                   pop esi
// 00865280  c20800               ret 8
// 00865283  68085aa500           push 0xa55a08
// 00865288  e8697b1100           call 0x97cdf6
// 0086528d  85c0                 test eax, eax
// 0086528f  7509                 jne 0x86529a
// 00865291  b805400080           mov eax, 0x80004005
// 00865296  5e                   pop esi
// 00865297  c20800               ret 8
// 0086529a  50                   push eax
// 0086529b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086529f  50                   push eax
// 008652a0  68085aa500           push 0xa55a08
// 008652a5  8d8e38010000         lea ecx, [esi + 0x138]
// 008652ab  e870b3f8ff           call 0x7f0620
// 008652b0  5e                   pop esi
// 008652b1  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnGetObject@CXTPDockingPaneTabbedContainer@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
