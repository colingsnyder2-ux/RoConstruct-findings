// roc 2008-06 00460b90  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460b90
//
// 00460b90  837c240800           cmp dword ptr [esp + 8], 0
// 00460b95  741b                 je 0x460bb2
// 00460b97  8b442404             mov eax, dword ptr [esp + 4]
// 00460b9b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460b9e  50                   push eax
// 00460b9f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460ba2  6a00                 push 0
// 00460ba4  6874080000           push 0x874
// 00460ba9  52                   push edx
// 00460baa  ffd0                 call eax
// 00460bac  83c410               add esp, 0x10
// 00460baf  c20800               ret 8
// 00460bb2  8b542404             mov edx, dword ptr [esp + 4]
// 00460bb6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460bb9  52                   push edx
// 00460bba  6a00                 push 0
// 00460bbc  6874080000           push 0x874
// 00460bc1  50                   push eax
// 00460bc2  ff15142e8000         call dword ptr [0x802e14]
// 00460bc8  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointXFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
