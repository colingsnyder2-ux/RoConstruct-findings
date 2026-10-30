// roc 2012-06 0049cb10  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cb10
//
// 0049cb10  837c240400           cmp dword ptr [esp + 4], 0
// 0049cb15  6a00                 push 0
// 0049cb17  6a00                 push 0
// 0049cb19  68dd070000           push 0x7dd
// 0049cb1e  740f                 je 0x49cb2f
// 0049cb20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049cb23  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049cb26  50                   push eax
// 0049cb27  ffd1                 call ecx
// 0049cb29  83c410               add esp, 0x10
// 0049cb2c  c20400               ret 4
// 0049cb2f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049cb32  52                   push edx
// 0049cb33  ff15043cb200         call dword ptr [0xb23c04]
// 0049cb39  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SelectAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
