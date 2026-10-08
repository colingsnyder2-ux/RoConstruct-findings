// roc 2008-06 00460990  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460990
//
// 00460990  837c240400           cmp dword ptr [esp + 4], 0
// 00460995  6a00                 push 0
// 00460997  6a00                 push 0
// 00460999  685f080000           push 0x85f
// 0046099e  740f                 je 0x4609af
// 004609a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004609a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004609a6  50                   push eax
// 004609a7  ffd1                 call ecx
// 004609a9  83c410               add esp, 0x10
// 004609ac  c20400               ret 4
// 004609af  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004609b2  52                   push edx
// 004609b3  ff15142e8000         call dword ptr [0x802e14]
// 004609b9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
