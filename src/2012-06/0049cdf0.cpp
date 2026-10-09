// roc 2012-06 0049cdf0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cdf0
//
// 0049cdf0  837c240800           cmp dword ptr [esp + 8], 0
// 0049cdf5  6a00                 push 0
// 0049cdf7  7419                 je 0x49ce12
// 0049cdf9  8b442408             mov eax, dword ptr [esp + 8]
// 0049cdfd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049ce00  50                   push eax
// 0049ce01  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049ce04  68fe070000           push 0x7fe
// 0049ce09  52                   push edx
// 0049ce0a  ffd0                 call eax
// 0049ce0c  83c410               add esp, 0x10
// 0049ce0f  c20800               ret 8
// 0049ce12  8b542408             mov edx, dword ptr [esp + 8]
// 0049ce16  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049ce19  52                   push edx
// 0049ce1a  68fe070000           push 0x7fe
// 0049ce1f  50                   push eax
// 0049ce20  ff15043cb200         call dword ptr [0xb23c04]
// 0049ce26  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerGet@CScintillaCtrl@@QAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
