// roc 2008-06 004601c0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004601c0
//
// 004601c0  837c240800           cmp dword ptr [esp + 8], 0
// 004601c5  6a00                 push 0
// 004601c7  7419                 je 0x4601e2
// 004601c9  8b442408             mov eax, dword ptr [esp + 8]
// 004601cd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 004601d0  50                   push eax
// 004601d1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004601d4  68dc070000           push 0x7dc
// 004601d9  52                   push edx
// 004601da  ffd0                 call eax
// 004601dc  83c410               add esp, 0x10
// 004601df  c20800               ret 8
// 004601e2  8b542408             mov edx, dword ptr [esp + 8]
// 004601e6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004601e9  52                   push edx
// 004601ea  68dc070000           push 0x7dc
// 004601ef  50                   push eax
// 004601f0  ff15142e8000         call dword ptr [0x802e14]
// 004601f6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetUndoCollection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
