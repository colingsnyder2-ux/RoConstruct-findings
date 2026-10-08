// roc 2008-06 00461200  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461200
//
// 00461200  837c240800           cmp dword ptr [esp + 8], 0
// 00461205  6a00                 push 0
// 00461207  7419                 je 0x461222
// 00461209  8b442408             mov eax, dword ptr [esp + 8]
// 0046120d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461210  50                   push eax
// 00461211  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461214  68a10f0000           push 0xfa1
// 00461219  52                   push edx
// 0046121a  ffd0                 call eax
// 0046121c  83c410               add esp, 0x10
// 0046121f  c20800               ret 8
// 00461222  8b542408             mov edx, dword ptr [esp + 8]
// 00461226  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461229  52                   push edx
// 0046122a  68a10f0000           push 0xfa1
// 0046122f  50                   push eax
// 00461230  ff15142e8000         call dword ptr [0x802e14]
// 00461236  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetLexer@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
