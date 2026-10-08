// roc 2007-08 0045bf30  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045bf30
//
// 0045bf30  837c240400           cmp dword ptr [esp + 4], 0
// 0045bf35  6a00                 push 0
// 0045bf37  6a00                 push 0
// 0045bf39  68d6070000           push 0x7d6
// 0045bf3e  740f                 je 0x45bf4f
// 0045bf40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045bf43  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045bf46  50                   push eax
// 0045bf47  ffd1                 call ecx
// 0045bf49  83c410               add esp, 0x10
// 0045bf4c  c20400               ret 4
// 0045bf4f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045bf52  52                   push edx
// 0045bf53  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045bf59  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
