// roc 2008-06 004602d0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004602d0
//
// 004602d0  837c240800           cmp dword ptr [esp + 8], 0
// 004602d5  6a00                 push 0
// 004602d7  7419                 je 0x4602f2
// 004602d9  8b442408             mov eax, dword ptr [esp + 8]
// 004602dd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 004602e0  50                   push eax
// 004602e1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004602e4  68e9070000           push 0x7e9
// 004602e9  52                   push edx
// 004602ea  ffd0                 call eax
// 004602ec  83c410               add esp, 0x10
// 004602ef  c20800               ret 8
// 004602f2  8b542408             mov edx, dword ptr [esp + 8]
// 004602f6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004602f9  52                   push edx
// 004602fa  68e9070000           push 0x7e9
// 004602ff  50                   push eax
// 00460300  ff15142e8000         call dword ptr [0x802e14]
// 00460306  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoPos@CScintillaCtrl@@QAEXJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
