// roc 2008-06 00461120  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461120
//
// 00461120  837c240800           cmp dword ptr [esp + 8], 0
// 00461125  6a00                 push 0
// 00461127  7419                 je 0x461142
// 00461129  8b442408             mov eax, dword ptr [esp + 8]
// 0046112d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461130  50                   push eax
// 00461131  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461134  68b7080000           push 0x8b7
// 00461139  52                   push edx
// 0046113a  ffd0                 call eax
// 0046113c  83c410               add esp, 0x10
// 0046113f  c20800               ret 8
// 00461142  8b542408             mov edx, dword ptr [esp + 8]
// 00461146  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461149  52                   push edx
// 0046114a  68b7080000           push 0x8b7
// 0046114f  50                   push eax
// 00461150  ff15142e8000         call dword ptr [0x802e14]
// 00461156  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ToggleFold@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
