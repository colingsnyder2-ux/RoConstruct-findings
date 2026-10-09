// roc 2010-06 0046df60  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046df60
//
// 0046df60  837c240800           cmp dword ptr [esp + 8], 0
// 0046df65  741b                 je 0x46df82
// 0046df67  8b442404             mov eax, dword ptr [esp + 4]
// 0046df6b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046df6e  50                   push eax
// 0046df6f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046df72  6a00                 push 0
// 0046df74  687a080000           push 0x87a
// 0046df79  52                   push edx
// 0046df7a  ffd0                 call eax
// 0046df7c  83c410               add esp, 0x10
// 0046df7f  c20800               ret 8
// 0046df82  8b542404             mov edx, dword ptr [esp + 4]
// 0046df86  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046df89  52                   push edx
// 0046df8a  6a00                 push 0
// 0046df8c  687a080000           push 0x87a
// 0046df91  50                   push eax
// 0046df92  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046df98  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ReplaceSel@CScintillaCtrl@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
