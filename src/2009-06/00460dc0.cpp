// roc 2009-06 00460dc0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460dc0
//
// 00460dc0  837c240800           cmp dword ptr [esp + 8], 0
// 00460dc5  6a00                 push 0
// 00460dc7  7419                 je 0x460de2
// 00460dc9  8b442408             mov eax, dword ptr [esp + 8]
// 00460dcd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460dd0  50                   push eax
// 00460dd1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460dd4  68da070000           push 0x7da
// 00460dd9  52                   push edx
// 00460dda  ffd0                 call eax
// 00460ddc  83c410               add esp, 0x10
// 00460ddf  c20800               ret 8
// 00460de2  8b542408             mov edx, dword ptr [esp + 8]
// 00460de6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460de9  52                   push edx
// 00460dea  68da070000           push 0x7da
// 00460def  50                   push eax
// 00460df0  ff1590ee8900         call dword ptr [0x89ee90]
// 00460df6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetStyleAt@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
