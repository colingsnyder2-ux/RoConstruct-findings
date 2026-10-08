// roc 2008-06 00460910  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460910
//
// 00460910  837c240800           cmp dword ptr [esp + 8], 0
// 00460915  6a00                 push 0
// 00460917  7419                 je 0x460932
// 00460919  8b442408             mov eax, dword ptr [esp + 8]
// 0046091d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460920  50                   push eax
// 00460921  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460924  683a080000           push 0x83a
// 00460929  52                   push edx
// 0046092a  ffd0                 call eax
// 0046092c  83c410               add esp, 0x10
// 0046092f  c20800               ret 8
// 00460932  8b542408             mov edx, dword ptr [esp + 8]
// 00460936  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460939  52                   push edx
// 0046093a  683a080000           push 0x83a
// 0046093f  50                   push eax
// 00460940  ff15142e8000         call dword ptr [0x802e14]
// 00460946  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCSetSeparator@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
