// roc 2011-06 0048ab30  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048ab30
//
// 0048ab30  837c240400           cmp dword ptr [esp + 4], 0
// 0048ab35  6a00                 push 0
// 0048ab37  6a00                 push 0
// 0048ab39  688b080000           push 0x88b
// 0048ab3e  740f                 je 0x48ab4f
// 0048ab40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048ab43  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048ab46  50                   push eax
// 0048ab47  ffd1                 call ecx
// 0048ab49  83c410               add esp, 0x10
// 0048ab4c  c20400               ret 4
// 0048ab4f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048ab52  52                   push edx
// 0048ab53  ff15c019a400         call dword ptr [0xa419c0]
// 0048ab59  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetOvertype@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
