// roc 2008-06 004610e0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004610e0
//
// 004610e0  837c240800           cmp dword ptr [esp + 8], 0
// 004610e5  6a00                 push 0
// 004610e7  7419                 je 0x461102
// 004610e9  8b442408             mov eax, dword ptr [esp + 8]
// 004610ed  8b5158               mov edx, dword ptr [ecx + 0x58]
// 004610f0  50                   push eax
// 004610f1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004610f4  68af080000           push 0x8af
// 004610f9  52                   push edx
// 004610fa  ffd0                 call eax
// 004610fc  83c410               add esp, 0x10
// 004610ff  c20800               ret 8
// 00461102  8b542408             mov edx, dword ptr [esp + 8]
// 00461106  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461109  52                   push edx
// 0046110a  68af080000           push 0x8af
// 0046110f  50                   push eax
// 00461110  ff15142e8000         call dword ptr [0x802e14]
// 00461116  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetFoldLevel@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
