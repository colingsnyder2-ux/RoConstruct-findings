// roc 2008-06 00460c90  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460c90
//
// 00460c90  837c240800           cmp dword ptr [esp + 8], 0
// 00460c95  6a00                 push 0
// 00460c97  7419                 je 0x460cb2
// 00460c99  8b442408             mov eax, dword ptr [esp + 8]
// 00460c9d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460ca0  50                   push eax
// 00460ca1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460ca4  687b080000           push 0x87b
// 00460ca9  52                   push edx
// 00460caa  ffd0                 call eax
// 00460cac  83c410               add esp, 0x10
// 00460caf  c20800               ret 8
// 00460cb2  8b542408             mov edx, dword ptr [esp + 8]
// 00460cb6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460cb9  52                   push edx
// 00460cba  687b080000           push 0x87b
// 00460cbf  50                   push eax
// 00460cc0  ff15142e8000         call dword ptr [0x802e14]
// 00460cc6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetReadOnly@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
