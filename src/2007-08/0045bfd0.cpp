// roc 2007-08 0045bfd0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045bfd0
//
// 0045bfd0  837c240400           cmp dword ptr [esp + 4], 0
// 0045bfd5  6a00                 push 0
// 0045bfd7  6a00                 push 0
// 0045bfd9  68db070000           push 0x7db
// 0045bfde  740f                 je 0x45bfef
// 0045bfe0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045bfe3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045bfe6  50                   push eax
// 0045bfe7  ffd1                 call ecx
// 0045bfe9  83c410               add esp, 0x10
// 0045bfec  c20400               ret 4
// 0045bfef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045bff2  52                   push edx
// 0045bff3  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045bff9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Redo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
