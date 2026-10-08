// roc 2008-06 00460e50  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460e50
//
// 00460e50  837c240800           cmp dword ptr [esp + 8], 0
// 00460e55  741b                 je 0x460e72
// 00460e57  8b442404             mov eax, dword ptr [esp + 4]
// 00460e5b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460e5e  50                   push eax
// 00460e5f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460e62  6a00                 push 0
// 00460e64  6885080000           push 0x885
// 00460e69  52                   push edx
// 00460e6a  ffd0                 call eax
// 00460e6c  83c410               add esp, 0x10
// 00460e6f  c20800               ret 8
// 00460e72  8b542404             mov edx, dword ptr [esp + 4]
// 00460e76  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460e79  52                   push edx
// 00460e7a  6a00                 push 0
// 00460e7c  6885080000           push 0x885
// 00460e81  50                   push eax
// 00460e82  ff15142e8000         call dword ptr [0x802e14]
// 00460e88  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetText@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
