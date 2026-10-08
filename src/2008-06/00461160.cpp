// roc 2008-06 00461160  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461160
//
// 00461160  837c240800           cmp dword ptr [esp + 8], 0
// 00461165  6a00                 push 0
// 00461167  7419                 je 0x461182
// 00461169  8b442408             mov eax, dword ptr [esp + 8]
// 0046116d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461170  50                   push eax
// 00461171  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461174  68d8080000           push 0x8d8
// 00461179  52                   push edx
// 0046117a  ffd0                 call eax
// 0046117c  83c410               add esp, 0x10
// 0046117f  c20800               ret 8
// 00461182  8b542408             mov edx, dword ptr [esp + 8]
// 00461186  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461189  52                   push edx
// 0046118a  68d8080000           push 0x8d8
// 0046118f  50                   push eax
// 00461190  ff15142e8000         call dword ptr [0x802e14]
// 00461196  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMouseDwellTime@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
