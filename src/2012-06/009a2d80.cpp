// roc 2012-06 009a2d80  unit: CXTPCommandBarKeyboardTip  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2d80
//
// 009a2d80  56                   push esi
// 009a2d81  8bf1                 mov esi, ecx
// 009a2d83  8d4e5c               lea ecx, [esi + 0x5c]
// 009a2d86  ff15d047b200         call dword ptr [0xb247d0]
// 009a2d8c  8d4e58               lea ecx, [esi + 0x58]
// 009a2d8f  ff15d047b200         call dword ptr [0xb247d0]
// 009a2d95  8d4e54               lea ecx, [esi + 0x54]
// 009a2d98  ff15d047b200         call dword ptr [0xb247d0]
// 009a2d9e  8bce                 mov ecx, esi
// 009a2da0  e8fbfdfdff           call 0x982ba0
// 009a2da5  f644240801           test byte ptr [esp + 8], 1
// 009a2daa  7409                 je 0x9a2db5
// 009a2dac  56                   push esi
// 009a2dad  e862f3fdff           call 0x982114
// 009a2db2  83c404               add esp, 4
// 009a2db5  8bc6                 mov eax, esi
// 009a2db7  5e                   pop esi
// 009a2db8  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ??_GCXTPCommandBarKeyboardTip@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPCommandBars.cpp
