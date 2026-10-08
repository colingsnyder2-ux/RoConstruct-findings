// roc 2009-06 00461880  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461880
//
// 00461880  837c240800           cmp dword ptr [esp + 8], 0
// 00461885  6a00                 push 0
// 00461887  7419                 je 0x4618a2
// 00461889  8b442408             mov eax, dword ptr [esp + 8]
// 0046188d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461890  50                   push eax
// 00461891  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461894  6876080000           push 0x876
// 00461899  52                   push edx
// 0046189a  ffd0                 call eax
// 0046189c  83c410               add esp, 0x10
// 0046189f  c20800               ret 8
// 004618a2  8b542408             mov edx, dword ptr [esp + 8]
// 004618a6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004618a9  52                   push edx
// 004618aa  6876080000           push 0x876
// 004618af  50                   push eax
// 004618b0  ff1590ee8900         call dword ptr [0x89ee90]
// 004618b6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?LineFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
