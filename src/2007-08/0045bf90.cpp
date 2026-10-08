// roc 2007-08 0045bf90  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045bf90
//
// 0045bf90  837c240800           cmp dword ptr [esp + 8], 0
// 0045bf95  6a00                 push 0
// 0045bf97  7419                 je 0x45bfb2
// 0045bf99  8b442408             mov eax, dword ptr [esp + 8]
// 0045bf9d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045bfa0  50                   push eax
// 0045bfa1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045bfa4  68da070000           push 0x7da
// 0045bfa9  52                   push edx
// 0045bfaa  ffd0                 call eax
// 0045bfac  83c410               add esp, 0x10
// 0045bfaf  c20800               ret 8
// 0045bfb2  8b542408             mov edx, dword ptr [esp + 8]
// 0045bfb6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045bfb9  52                   push edx
// 0045bfba  68da070000           push 0x7da
// 0045bfbf  50                   push eax
// 0045bfc0  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045bfc6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetStyleAt@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
