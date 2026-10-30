// roc 2009-06 00461900  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461900
//
// 00461900  837c240800           cmp dword ptr [esp + 8], 0
// 00461905  6a00                 push 0
// 00461907  7419                 je 0x461922
// 00461909  8b442408             mov eax, dword ptr [esp + 8]
// 0046190d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461910  50                   push eax
// 00461911  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461914  687b080000           push 0x87b
// 00461919  52                   push edx
// 0046191a  ffd0                 call eax
// 0046191c  83c410               add esp, 0x10
// 0046191f  c20800               ret 8
// 00461922  8b542408             mov edx, dword ptr [esp + 8]
// 00461926  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461929  52                   push edx
// 0046192a  687b080000           push 0x87b
// 0046192f  50                   push eax
// 00461930  ff1590ee8900         call dword ptr [0x89ee90]
// 00461936  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetReadOnly@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
