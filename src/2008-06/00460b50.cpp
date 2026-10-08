// roc 2008-06 00460b50  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460b50
//
// 00460b50  837c240800           cmp dword ptr [esp + 8], 0
// 00460b55  6a00                 push 0
// 00460b57  7419                 je 0x460b72
// 00460b59  8b442408             mov eax, dword ptr [esp + 8]
// 00460b5d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460b60  50                   push eax
// 00460b61  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460b64  6873080000           push 0x873
// 00460b69  52                   push edx
// 00460b6a  ffd0                 call eax
// 00460b6c  83c410               add esp, 0x10
// 00460b6f  c20800               ret 8
// 00460b72  8b542408             mov edx, dword ptr [esp + 8]
// 00460b76  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460b79  52                   push edx
// 00460b7a  6873080000           push 0x873
// 00460b7f  50                   push eax
// 00460b80  ff15142e8000         call dword ptr [0x802e14]
// 00460b86  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?HideSelection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
