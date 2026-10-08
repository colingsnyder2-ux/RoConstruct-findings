// roc 2008-06 00460b10  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460b10
//
// 00460b10  837c240800           cmp dword ptr [esp + 8], 0
// 00460b15  741b                 je 0x460b32
// 00460b17  8b442404             mov eax, dword ptr [esp + 4]
// 00460b1b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460b1e  50                   push eax
// 00460b1f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460b22  6a00                 push 0
// 00460b24  6872080000           push 0x872
// 00460b29  52                   push edx
// 00460b2a  ffd0                 call eax
// 00460b2c  83c410               add esp, 0x10
// 00460b2f  c20800               ret 8
// 00460b32  8b542404             mov edx, dword ptr [esp + 4]
// 00460b36  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460b39  52                   push edx
// 00460b3a  6a00                 push 0
// 00460b3c  6872080000           push 0x872
// 00460b41  50                   push eax
// 00460b42  ff15142e8000         call dword ptr [0x802e14]
// 00460b48  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextRange@CScintillaCtrl@@QAEHPAUTextRange@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
