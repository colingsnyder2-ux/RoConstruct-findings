// roc 2010-06 0046dee0  unit: Scintilla::CScintillaCtrl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046dee0
//
// 0046dee0  837c240800           cmp dword ptr [esp + 8], 0
// 0046dee5  741b                 je 0x46df02
// 0046dee7  8b442404             mov eax, dword ptr [esp + 4]
// 0046deeb  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046deee  50                   push eax
// 0046deef  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046def2  6a00                 push 0
// 0046def4  6875080000           push 0x875
// 0046def9  52                   push edx
// 0046defa  ffd0                 call eax
// 0046defc  83c410               add esp, 0x10
// 0046deff  c20800               ret 8
// 0046df02  8b542404             mov edx, dword ptr [esp + 4]
// 0046df06  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046df09  52                   push edx
// 0046df0a  6a00                 push 0
// 0046df0c  6875080000           push 0x875
// 0046df11  50                   push eax
// 0046df12  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046df18  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?PointYFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
