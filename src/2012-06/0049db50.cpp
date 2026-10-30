// roc 2012-06 0049db50  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049db50
//
// 0049db50  837c240800           cmp dword ptr [esp + 8], 0
// 0049db55  6a00                 push 0
// 0049db57  7419                 je 0x49db72
// 0049db59  8b442408             mov eax, dword ptr [esp + 8]
// 0049db5d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049db60  50                   push eax
// 0049db61  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049db64  68a10f0000           push 0xfa1
// 0049db69  52                   push edx
// 0049db6a  ffd0                 call eax
// 0049db6c  83c410               add esp, 0x10
// 0049db6f  c20800               ret 8
// 0049db72  8b542408             mov edx, dword ptr [esp + 8]
// 0049db76  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049db79  52                   push edx
// 0049db7a  68a10f0000           push 0xfa1
// 0049db7f  50                   push eax
// 0049db80  ff15043cb200         call dword ptr [0xb23c04]
// 0049db86  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetLexer@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
