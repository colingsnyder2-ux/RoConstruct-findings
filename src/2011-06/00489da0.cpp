// roc 2011-06 00489da0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489da0
//
// 00489da0  837c240800           cmp dword ptr [esp + 8], 0
// 00489da5  6a00                 push 0
// 00489da7  7419                 je 0x489dc2
// 00489da9  8b442408             mov eax, dword ptr [esp + 8]
// 00489dad  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00489db0  50                   push eax
// 00489db1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00489db4  68dc070000           push 0x7dc
// 00489db9  52                   push edx
// 00489dba  ffd0                 call eax
// 00489dbc  83c410               add esp, 0x10
// 00489dbf  c20800               ret 8
// 00489dc2  8b542408             mov edx, dword ptr [esp + 8]
// 00489dc6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00489dc9  52                   push edx
// 00489dca  68dc070000           push 0x7dc
// 00489dcf  50                   push eax
// 00489dd0  ff15c019a400         call dword ptr [0xa419c0]
// 00489dd6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetUndoCollection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
