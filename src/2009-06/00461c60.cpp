// roc 2009-06 00461c60  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461c60
//
// 00461c60  837c240800           cmp dword ptr [esp + 8], 0
// 00461c65  6a00                 push 0
// 00461c67  7419                 je 0x461c82
// 00461c69  8b442408             mov eax, dword ptr [esp + 8]
// 00461c6d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00461c70  50                   push eax
// 00461c71  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00461c74  6896080000           push 0x896
// 00461c79  52                   push edx
// 00461c7a  ffd0                 call eax
// 00461c7c  83c410               add esp, 0x10
// 00461c7f  c20800               ret 8
// 00461c82  8b542408             mov edx, dword ptr [esp + 8]
// 00461c86  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00461c89  52                   push edx
// 00461c8a  6896080000           push 0x896
// 00461c8f  50                   push eax
// 00461c90  ff1590ee8900         call dword ptr [0x89ee90]
// 00461c96  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSearchFlags@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
