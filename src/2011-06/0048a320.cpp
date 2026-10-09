// roc 2011-06 0048a320  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a320
//
// 0048a320  837c240400           cmp dword ptr [esp + 4], 0
// 0048a325  6a00                 push 0
// 0048a327  6a00                 push 0
// 0048a329  6802080000           push 0x802
// 0048a32e  740f                 je 0x48a33f
// 0048a330  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a333  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a336  50                   push eax
// 0048a337  ffd1                 call ecx
// 0048a339  83c410               add esp, 0x10
// 0048a33c  c20400               ret 4
// 0048a33f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048a342  52                   push edx
// 0048a343  ff15c019a400         call dword ptr [0xa419c0]
// 0048a349  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
