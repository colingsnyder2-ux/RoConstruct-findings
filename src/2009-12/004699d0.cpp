// roc 2009-12 004699d0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004699d0
//
// 004699d0  837c240800           cmp dword ptr [esp + 8], 0
// 004699d5  6a00                 push 0
// 004699d7  7419                 je 0x4699f2
// 004699d9  8b442408             mov eax, dword ptr [esp + 8]
// 004699dd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 004699e0  50                   push eax
// 004699e1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004699e4  68dc070000           push 0x7dc
// 004699e9  52                   push edx
// 004699ea  ffd0                 call eax
// 004699ec  83c410               add esp, 0x10
// 004699ef  c20800               ret 8
// 004699f2  8b542408             mov edx, dword ptr [esp + 8]
// 004699f6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004699f9  52                   push edx
// 004699fa  68dc070000           push 0x7dc
// 004699ff  50                   push eax
// 00469a00  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469a06  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetUndoCollection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
