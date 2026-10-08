// roc 2007-03 0045a360  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a360
//
// 0045a360  837c240400           cmp dword ptr [esp + 4], 0
// 0045a365  6a00                 push 0
// 0045a367  6a00                 push 0
// 0045a369  6881080000           push 0x881
// 0045a36e  740f                 je 0x45a37f
// 0045a370  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a373  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a376  50                   push eax
// 0045a377  ffd1                 call ecx
// 0045a379  83c410               add esp, 0x10
// 0045a37c  c20400               ret 4
// 0045a37f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a382  52                   push edx
// 0045a383  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a389  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cut@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
