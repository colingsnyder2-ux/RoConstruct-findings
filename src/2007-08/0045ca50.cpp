// roc 2007-08 0045ca50  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ca50
//
// 0045ca50  837c240800           cmp dword ptr [esp + 8], 0
// 0045ca55  6a00                 push 0
// 0045ca57  7419                 je 0x45ca72
// 0045ca59  8b442408             mov eax, dword ptr [esp + 8]
// 0045ca5d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045ca60  50                   push eax
// 0045ca61  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045ca64  6876080000           push 0x876
// 0045ca69  52                   push edx
// 0045ca6a  ffd0                 call eax
// 0045ca6c  83c410               add esp, 0x10
// 0045ca6f  c20800               ret 8
// 0045ca72  8b542408             mov edx, dword ptr [esp + 8]
// 0045ca76  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045ca79  52                   push edx
// 0045ca7a  6876080000           push 0x876
// 0045ca7f  50                   push eax
// 0045ca80  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045ca86  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?LineFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
