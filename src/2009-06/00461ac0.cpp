// roc 2009-06 00461ac0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461ac0
//
// 00461ac0  837c240800           cmp dword ptr [esp + 8], 0
// 00461ac5  741b                 je 0x461ae2
// 00461ac7  8b442404             mov eax, dword ptr [esp + 4]
// 00461acb  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461ace  50                   push eax
// 00461acf  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461ad2  6a00                 push 0
// 00461ad4  6885080000           push 0x885
// 00461ad9  52                   push edx
// 00461ada  ffd0                 call eax
// 00461adc  83c410               add esp, 0x10
// 00461adf  c20800               ret 8
// 00461ae2  8b542404             mov edx, dword ptr [esp + 4]
// 00461ae6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461ae9  52                   push edx
// 00461aea  6a00                 push 0
// 00461aec  6885080000           push 0x885
// 00461af1  50                   push eax
// 00461af2  ff1590ee8900         call dword ptr [0x89ee90]
// 00461af8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetText@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
