// roc 2011-06 0048ab90  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048ab90
//
// 0048ab90  837c240400           cmp dword ptr [esp + 4], 0
// 0048ab95  6a00                 push 0
// 0048ab97  6a00                 push 0
// 0048ab99  6891080000           push 0x891
// 0048ab9e  740f                 je 0x48abaf
// 0048aba0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048aba3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048aba6  50                   push eax
// 0048aba7  ffd1                 call ecx
// 0048aba9  83c410               add esp, 0x10
// 0048abac  c20400               ret 4
// 0048abaf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048abb2  52                   push edx
// 0048abb3  ff15c019a400         call dword ptr [0xa419c0]
// 0048abb9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
