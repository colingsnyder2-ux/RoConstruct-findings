// roc 2008-06 00460c10  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460c10
//
// 00460c10  837c240800           cmp dword ptr [esp + 8], 0
// 00460c15  6a00                 push 0
// 00460c17  7419                 je 0x460c32
// 00460c19  8b442408             mov eax, dword ptr [esp + 8]
// 00460c1d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460c20  50                   push eax
// 00460c21  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460c24  6876080000           push 0x876
// 00460c29  52                   push edx
// 00460c2a  ffd0                 call eax
// 00460c2c  83c410               add esp, 0x10
// 00460c2f  c20800               ret 8
// 00460c32  8b542408             mov edx, dword ptr [esp + 8]
// 00460c36  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460c39  52                   push edx
// 00460c3a  6876080000           push 0x876
// 00460c3f  50                   push eax
// 00460c40  ff15142e8000         call dword ptr [0x802e14]
// 00460c46  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?LineFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
