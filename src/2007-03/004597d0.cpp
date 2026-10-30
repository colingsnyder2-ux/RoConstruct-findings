// roc 2007-03 004597d0  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004597d0
//
// 004597d0  837c240400           cmp dword ptr [esp + 4], 0
// 004597d5  6a00                 push 0
// 004597d7  6a00                 push 0
// 004597d9  68dd070000           push 0x7dd
// 004597de  740f                 je 0x4597ef
// 004597e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004597e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004597e6  50                   push eax
// 004597e7  ffd1                 call ecx
// 004597e9  83c410               add esp, 0x10
// 004597ec  c20400               ret 4
// 004597ef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004597f2  52                   push edx
// 004597f3  ff1550ee7700         call dword ptr [0x77ee50]
// 004597f9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SelectAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
