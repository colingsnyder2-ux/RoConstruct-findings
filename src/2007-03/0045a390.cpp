// roc 2007-03 0045a390  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a390
//
// 0045a390  837c240400           cmp dword ptr [esp + 4], 0
// 0045a395  6a00                 push 0
// 0045a397  6a00                 push 0
// 0045a399  6882080000           push 0x882
// 0045a39e  740f                 je 0x45a3af
// 0045a3a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a3a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a3a6  50                   push eax
// 0045a3a7  ffd1                 call ecx
// 0045a3a9  83c410               add esp, 0x10
// 0045a3ac  c20400               ret 4
// 0045a3af  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a3b2  52                   push edx
// 0045a3b3  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a3b9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Copy@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
