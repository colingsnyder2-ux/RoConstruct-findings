// roc 2011-06 00489e10  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489e10
//
// 00489e10  837c240400           cmp dword ptr [esp + 4], 0
// 00489e15  6a00                 push 0
// 00489e17  6a00                 push 0
// 00489e19  68de070000           push 0x7de
// 00489e1e  740f                 je 0x489e2f
// 00489e20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00489e23  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00489e26  50                   push eax
// 00489e27  ffd1                 call ecx
// 00489e29  83c410               add esp, 0x10
// 00489e2c  c20400               ret 4
// 00489e2f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00489e32  52                   push edx
// 00489e33  ff15c019a400         call dword ptr [0xa419c0]
// 00489e39  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSavePoint@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
