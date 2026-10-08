// roc 2007-03 004598a0  unit: seg_00450000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004598a0
//
// 004598a0  837c240800           cmp dword ptr [esp + 8], 0
// 004598a5  6a00                 push 0
// 004598a7  7419                 je 0x4598c2
// 004598a9  8b442408             mov eax, dword ptr [esp + 8]
// 004598ad  8b5158               mov edx, dword ptr [ecx + 0x58]
// 004598b0  50                   push eax
// 004598b1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004598b4  68e9070000           push 0x7e9
// 004598b9  52                   push edx
// 004598ba  ffd0                 call eax
// 004598bc  83c410               add esp, 0x10
// 004598bf  c20800               ret 8
// 004598c2  8b542408             mov edx, dword ptr [esp + 8]
// 004598c6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004598c9  52                   push edx
// 004598ca  68e9070000           push 0x7e9
// 004598cf  50                   push eax
// 004598d0  ff1550ee7700         call dword ptr [0x77ee50]
// 004598d6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoPos@CScintillaCtrl@@QAEXJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
