// roc 2009-06 00461e70  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461e70
//
// 00461e70  837c240800           cmp dword ptr [esp + 8], 0
// 00461e75  6a00                 push 0
// 00461e77  7419                 je 0x461e92
// 00461e79  8b442408             mov eax, dword ptr [esp + 8]
// 00461e7d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461e80  50                   push eax
// 00461e81  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461e84  68a10f0000           push 0xfa1
// 00461e89  52                   push edx
// 00461e8a  ffd0                 call eax
// 00461e8c  83c410               add esp, 0x10
// 00461e8f  c20800               ret 8
// 00461e92  8b542408             mov edx, dword ptr [esp + 8]
// 00461e96  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461e99  52                   push edx
// 00461e9a  68a10f0000           push 0xfa1
// 00461e9f  50                   push eax
// 00461ea0  ff1590ee8900         call dword ptr [0x89ee90]
// 00461ea6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetLexer@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
