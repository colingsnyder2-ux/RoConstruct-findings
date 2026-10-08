// roc 2009-06 00461d50  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461d50
//
// 00461d50  837c240800           cmp dword ptr [esp + 8], 0
// 00461d55  6a00                 push 0
// 00461d57  7419                 je 0x461d72
// 00461d59  8b442408             mov eax, dword ptr [esp + 8]
// 00461d5d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461d60  50                   push eax
// 00461d61  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461d64  68af080000           push 0x8af
// 00461d69  52                   push edx
// 00461d6a  ffd0                 call eax
// 00461d6c  83c410               add esp, 0x10
// 00461d6f  c20800               ret 8
// 00461d72  8b542408             mov edx, dword ptr [esp + 8]
// 00461d76  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461d79  52                   push edx
// 00461d7a  68af080000           push 0x8af
// 00461d7f  50                   push eax
// 00461d80  ff1590ee8900         call dword ptr [0x89ee90]
// 00461d86  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetFoldLevel@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
