// roc 2009-12 0046a660  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a660
//
// 0046a660  837c240800           cmp dword ptr [esp + 8], 0
// 0046a665  741b                 je 0x46a682
// 0046a667  8b442404             mov eax, dword ptr [esp + 4]
// 0046a66b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046a66e  50                   push eax
// 0046a66f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046a672  6a00                 push 0
// 0046a674  6885080000           push 0x885
// 0046a679  52                   push edx
// 0046a67a  ffd0                 call eax
// 0046a67c  83c410               add esp, 0x10
// 0046a67f  c20800               ret 8
// 0046a682  8b542404             mov edx, dword ptr [esp + 4]
// 0046a686  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046a689  52                   push edx
// 0046a68a  6a00                 push 0
// 0046a68c  6885080000           push 0x885
// 0046a691  50                   push eax
// 0046a692  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a698  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetText@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
