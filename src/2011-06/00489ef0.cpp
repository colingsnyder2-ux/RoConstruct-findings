// roc 2011-06 00489ef0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489ef0
//
// 00489ef0  837c240800           cmp dword ptr [esp + 8], 0
// 00489ef5  6a00                 push 0
// 00489ef7  7419                 je 0x489f12
// 00489ef9  8b442408             mov eax, dword ptr [esp + 8]
// 00489efd  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00489f00  50                   push eax
// 00489f01  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00489f04  68f4070000           push 0x7f4
// 00489f09  52                   push edx
// 00489f0a  ffd0                 call eax
// 00489f0c  83c410               add esp, 0x10
// 00489f0f  c20800               ret 8
// 00489f12  8b542408             mov edx, dword ptr [esp + 8]
// 00489f16  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00489f19  52                   push edx
// 00489f1a  68f4070000           push 0x7f4
// 00489f1f  50                   push eax
// 00489f20  ff15c019a400         call dword ptr [0xa419c0]
// 00489f26  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetTabWidth@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
