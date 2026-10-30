// roc 2007-08 0045ca10  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ca10
//
// 0045ca10  837c240800           cmp dword ptr [esp + 8], 0
// 0045ca15  741b                 je 0x45ca32
// 0045ca17  8b442404             mov eax, dword ptr [esp + 4]
// 0045ca1b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0045ca1e  50                   push eax
// 0045ca1f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0045ca22  6a00                 push 0
// 0045ca24  6875080000           push 0x875
// 0045ca29  52                   push edx
// 0045ca2a  ffd0                 call eax
// 0045ca2c  83c410               add esp, 0x10
// 0045ca2f  c20800               ret 8
// 0045ca32  8b542404             mov edx, dword ptr [esp + 4]
// 0045ca36  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0045ca39  52                   push edx
// 0045ca3a  6a00                 push 0
// 0045ca3c  6875080000           push 0x875
// 0045ca41  50                   push eax
// 0045ca42  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045ca48  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointYFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
