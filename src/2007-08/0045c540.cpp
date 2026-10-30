// roc 2007-08 0045c540  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c540
//
// 0045c540  837c240400           cmp dword ptr [esp + 4], 0
// 0045c545  6a00                 push 0
// 0045c547  6a00                 push 0
// 0045c549  6802080000           push 0x802
// 0045c54e  740f                 je 0x45c55f
// 0045c550  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c553  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c556  50                   push eax
// 0045c557  ffd1                 call ecx
// 0045c559  83c410               add esp, 0x10
// 0045c55c  c20400               ret 4
// 0045c55f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045c562  52                   push edx
// 0045c563  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c569  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
