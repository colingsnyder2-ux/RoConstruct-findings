// roc 2012-06 0049d260  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d260
//
// 0049d260  837c240800           cmp dword ptr [esp + 8], 0
// 0049d265  6a00                 push 0
// 0049d267  7419                 je 0x49d282
// 0049d269  8b442408             mov eax, dword ptr [esp + 8]
// 0049d26d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049d270  50                   push eax
// 0049d271  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049d274  683a080000           push 0x83a
// 0049d279  52                   push edx
// 0049d27a  ffd0                 call eax
// 0049d27c  83c410               add esp, 0x10
// 0049d27f  c20800               ret 8
// 0049d282  8b542408             mov edx, dword ptr [esp + 8]
// 0049d286  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049d289  52                   push edx
// 0049d28a  683a080000           push 0x83a
// 0049d28f  50                   push eax
// 0049d290  ff15043cb200         call dword ptr [0xb23c04]
// 0049d296  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCSetSeparator@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
