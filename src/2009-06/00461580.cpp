// roc 2009-06 00461580  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461580
//
// 00461580  837c240800           cmp dword ptr [esp + 8], 0
// 00461585  6a00                 push 0
// 00461587  7419                 je 0x4615a2
// 00461589  8b442408             mov eax, dword ptr [esp + 8]
// 0046158d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461590  50                   push eax
// 00461591  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461594  683a080000           push 0x83a
// 00461599  52                   push edx
// 0046159a  ffd0                 call eax
// 0046159c  83c410               add esp, 0x10
// 0046159f  c20800               ret 8
// 004615a2  8b542408             mov edx, dword ptr [esp + 8]
// 004615a6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004615a9  52                   push edx
// 004615aa  683a080000           push 0x83a
// 004615af  50                   push eax
// 004615b0  ff1590ee8900         call dword ptr [0x89ee90]
// 004615b6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCSetSeparator@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
