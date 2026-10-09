// roc 2012-06 0049d520  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d520
//
// 0049d520  837c240800           cmp dword ptr [esp + 8], 0
// 0049d525  741b                 je 0x49d542
// 0049d527  8b442404             mov eax, dword ptr [esp + 4]
// 0049d52b  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049d52e  50                   push eax
// 0049d52f  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049d532  6a00                 push 0
// 0049d534  6875080000           push 0x875
// 0049d539  52                   push edx
// 0049d53a  ffd0                 call eax
// 0049d53c  83c410               add esp, 0x10
// 0049d53f  c20800               ret 8
// 0049d542  8b542404             mov edx, dword ptr [esp + 4]
// 0049d546  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049d549  52                   push edx
// 0049d54a  6a00                 push 0
// 0049d54c  6875080000           push 0x875
// 0049d551  50                   push eax
// 0049d552  ff15043cb200         call dword ptr [0xb23c04]
// 0049d558  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointYFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
