// roc 2007-03 00459790  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459790
//
// 00459790  837c240800           cmp dword ptr [esp + 8], 0
// 00459795  6a00                 push 0
// 00459797  7419                 je 0x4597b2
// 00459799  8b442408             mov eax, dword ptr [esp + 8]
// 0045979d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 004597a0  50                   push eax
// 004597a1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004597a4  68dc070000           push 0x7dc
// 004597a9  52                   push edx
// 004597aa  ffd0                 call eax
// 004597ac  83c410               add esp, 0x10
// 004597af  c20800               ret 8
// 004597b2  8b542408             mov edx, dword ptr [esp + 8]
// 004597b6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004597b9  52                   push edx
// 004597ba  68dc070000           push 0x7dc
// 004597bf  50                   push eax
// 004597c0  ff1550ee7700         call dword ptr [0x77ee50]
// 004597c6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetUndoCollection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
