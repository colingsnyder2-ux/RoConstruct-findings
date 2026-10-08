// roc 2008-06 00460ff0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460ff0
//
// 00460ff0  837c240800           cmp dword ptr [esp + 8], 0
// 00460ff5  6a00                 push 0
// 00460ff7  7419                 je 0x461012
// 00460ff9  8b442408             mov eax, dword ptr [esp + 8]
// 00460ffd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461000  50                   push eax
// 00461001  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461004  6896080000           push 0x896
// 00461009  52                   push edx
// 0046100a  ffd0                 call eax
// 0046100c  83c410               add esp, 0x10
// 0046100f  c20800               ret 8
// 00461012  8b542408             mov edx, dword ptr [esp + 8]
// 00461016  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461019  52                   push edx
// 0046101a  6896080000           push 0x896
// 0046101f  50                   push eax
// 00461020  ff15142e8000         call dword ptr [0x802e14]
// 00461026  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSearchFlags@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
