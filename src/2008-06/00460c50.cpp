// roc 2008-06 00460c50  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460c50
//
// 00460c50  837c240800           cmp dword ptr [esp + 8], 0
// 00460c55  741b                 je 0x460c72
// 00460c57  8b442404             mov eax, dword ptr [esp + 4]
// 00460c5b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460c5e  50                   push eax
// 00460c5f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460c62  6a00                 push 0
// 00460c64  687a080000           push 0x87a
// 00460c69  52                   push edx
// 00460c6a  ffd0                 call eax
// 00460c6c  83c410               add esp, 0x10
// 00460c6f  c20800               ret 8
// 00460c72  8b542404             mov edx, dword ptr [esp + 4]
// 00460c76  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460c79  52                   push edx
// 00460c7a  6a00                 push 0
// 00460c7c  687a080000           push 0x87a
// 00460c81  50                   push eax
// 00460c82  ff15142e8000         call dword ptr [0x802e14]
// 00460c88  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ReplaceSel@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
