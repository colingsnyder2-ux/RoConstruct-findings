// roc 2007-03 00459760  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459760
//
// 00459760  837c240400           cmp dword ptr [esp + 4], 0
// 00459765  6a00                 push 0
// 00459767  6a00                 push 0
// 00459769  68db070000           push 0x7db
// 0045976e  740f                 je 0x45977f
// 00459770  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459773  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459776  50                   push eax
// 00459777  ffd1                 call ecx
// 00459779  83c410               add esp, 0x10
// 0045977c  c20400               ret 4
// 0045977f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00459782  52                   push edx
// 00459783  ff1550ee7700         call dword ptr [0x77ee50]
// 00459789  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Redo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
