// roc 2009-06 007d6650  unit: CXTPDockingPaneTabbedContainer  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d6650
//
// 007d6650  837c2408fc           cmp dword ptr [esp + 8], -4
// 007d6655  56                   push esi
// 007d6656  8bf1                 mov esi, ecx
// 007d6658  7409                 je 0x7d6663
// 007d665a  e8a929f4ff           call 0x719008
// 007d665f  5e                   pop esi
// 007d6660  c20800               ret 8
// 007d6663  6840128f00           push 0x8f1240
// 007d6668  e81d590700           call 0x84bf8a
// 007d666d  85c0                 test eax, eax
// 007d666f  7509                 jne 0x7d667a
// 007d6671  b805400080           mov eax, 0x80004005
// 007d6676  5e                   pop esi
// 007d6677  c20800               ret 8
// 007d667a  50                   push eax
// 007d667b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007d667f  50                   push eax
// 007d6680  6840128f00           push 0x8f1240
// 007d6685  8d8e38010000         lea ecx, [esi + 0x138]
// 007d668b  e860b0f8ff           call 0x7616f0
// 007d6690  5e                   pop esi
// 007d6691  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnGetObject@CXTPDockingPaneTabbedContainer@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
