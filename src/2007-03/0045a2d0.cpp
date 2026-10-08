// roc 2007-03 0045a2d0  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a2d0
//
// 0045a2d0  837c240400           cmp dword ptr [esp + 4], 0
// 0045a2d5  6a00                 push 0
// 0045a2d7  6a00                 push 0
// 0045a2d9  687e080000           push 0x87e
// 0045a2de  740f                 je 0x45a2ef
// 0045a2e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a2e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a2e6  50                   push eax
// 0045a2e7  ffd1                 call ecx
// 0045a2e9  83c410               add esp, 0x10
// 0045a2ec  c20400               ret 4
// 0045a2ef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a2f2  52                   push edx
// 0045a2f3  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a2f9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanUndo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
