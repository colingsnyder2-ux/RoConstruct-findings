// roc 2012-06 0049d310  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d310
//
// 0049d310  837c240400           cmp dword ptr [esp + 4], 0
// 0049d315  6a00                 push 0
// 0049d317  6a00                 push 0
// 0049d319  6861080000           push 0x861
// 0049d31e  740f                 je 0x49d32f
// 0049d320  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d323  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d326  50                   push eax
// 0049d327  ffd1                 call ecx
// 0049d329  83c410               add esp, 0x10
// 0049d32c  c20400               ret 4
// 0049d32f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d332  52                   push edx
// 0049d333  ff15043cb200         call dword ptr [0xb23c04]
// 0049d339  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
