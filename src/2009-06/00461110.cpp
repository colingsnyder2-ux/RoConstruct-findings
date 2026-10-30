// roc 2009-06 00461110  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461110
//
// 00461110  837c240800           cmp dword ptr [esp + 8], 0
// 00461115  6a00                 push 0
// 00461117  7419                 je 0x461132
// 00461119  8b442408             mov eax, dword ptr [esp + 8]
// 0046111d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461120  50                   push eax
// 00461121  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461124  68fe070000           push 0x7fe
// 00461129  52                   push edx
// 0046112a  ffd0                 call eax
// 0046112c  83c410               add esp, 0x10
// 0046112f  c20800               ret 8
// 00461132  8b542408             mov edx, dword ptr [esp + 8]
// 00461136  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461139  52                   push edx
// 0046113a  68fe070000           push 0x7fe
// 0046113f  50                   push eax
// 00461140  ff1590ee8900         call dword ptr [0x89ee90]
// 00461146  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerGet@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
