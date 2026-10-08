// roc 2008-06 004609c0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004609c0
//
// 004609c0  837c240400           cmp dword ptr [esp + 4], 0
// 004609c5  6a00                 push 0
// 004609c7  6a00                 push 0
// 004609c9  6861080000           push 0x861
// 004609ce  740f                 je 0x4609df
// 004609d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004609d3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004609d6  50                   push eax
// 004609d7  ffd1                 call ecx
// 004609d9  83c410               add esp, 0x10
// 004609dc  c20400               ret 4
// 004609df  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004609e2  52                   push edx
// 004609e3  ff15142e8000         call dword ptr [0x802e14]
// 004609e9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
