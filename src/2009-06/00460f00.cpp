// roc 2009-06 00460f00  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460f00
//
// 00460f00  837c240800           cmp dword ptr [esp + 8], 0
// 00460f05  6a00                 push 0
// 00460f07  7419                 je 0x460f22
// 00460f09  8b442408             mov eax, dword ptr [esp + 8]
// 00460f0d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460f10  50                   push eax
// 00460f11  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460f14  68e8070000           push 0x7e8
// 00460f19  52                   push edx
// 00460f1a  ffd0                 call eax
// 00460f1c  83c410               add esp, 0x10
// 00460f1f  c20800               ret 8
// 00460f22  8b542408             mov edx, dword ptr [esp + 8]
// 00460f26  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460f29  52                   push edx
// 00460f2a  68e8070000           push 0x7e8
// 00460f2f  50                   push eax
// 00460f30  ff1590ee8900         call dword ptr [0x89ee90]
// 00460f36  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoLine@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
