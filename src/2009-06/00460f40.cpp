// roc 2009-06 00460f40  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460f40
//
// 00460f40  837c240800           cmp dword ptr [esp + 8], 0
// 00460f45  6a00                 push 0
// 00460f47  7419                 je 0x460f62
// 00460f49  8b442408             mov eax, dword ptr [esp + 8]
// 00460f4d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460f50  50                   push eax
// 00460f51  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460f54  68e9070000           push 0x7e9
// 00460f59  52                   push edx
// 00460f5a  ffd0                 call eax
// 00460f5c  83c410               add esp, 0x10
// 00460f5f  c20800               ret 8
// 00460f62  8b542408             mov edx, dword ptr [esp + 8]
// 00460f66  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460f69  52                   push edx
// 00460f6a  68e9070000           push 0x7e9
// 00460f6f  50                   push eax
// 00460f70  ff1590ee8900         call dword ptr [0x89ee90]
// 00460f76  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoPos@CScintillaCtrl@@QAEXJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
