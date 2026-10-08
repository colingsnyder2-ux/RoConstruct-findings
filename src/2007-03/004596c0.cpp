// roc 2007-03 004596c0  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004596c0
//
// 004596c0  837c240400           cmp dword ptr [esp + 4], 0
// 004596c5  6a00                 push 0
// 004596c7  6a00                 push 0
// 004596c9  68d6070000           push 0x7d6
// 004596ce  740f                 je 0x4596df
// 004596d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004596d3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004596d6  50                   push eax
// 004596d7  ffd1                 call ecx
// 004596d9  83c410               add esp, 0x10
// 004596dc  c20400               ret 4
// 004596df  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004596e2  52                   push edx
// 004596e3  ff1550ee7700         call dword ptr [0x77ee50]
// 004596e9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
