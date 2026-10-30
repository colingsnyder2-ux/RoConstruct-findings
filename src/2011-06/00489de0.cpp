// roc 2011-06 00489de0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489de0
//
// 00489de0  837c240400           cmp dword ptr [esp + 4], 0
// 00489de5  6a00                 push 0
// 00489de7  6a00                 push 0
// 00489de9  68dd070000           push 0x7dd
// 00489dee  740f                 je 0x489dff
// 00489df0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00489df3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00489df6  50                   push eax
// 00489df7  ffd1                 call ecx
// 00489df9  83c410               add esp, 0x10
// 00489dfc  c20400               ret 4
// 00489dff  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00489e02  52                   push edx
// 00489e03  ff15c019a400         call dword ptr [0xa419c0]
// 00489e09  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SelectAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
