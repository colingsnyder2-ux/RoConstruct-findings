// roc 2007-03 0045a7a0  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a7a0
//
// 0045a7a0  837c240400           cmp dword ptr [esp + 4], 0
// 0045a7a5  6a00                 push 0
// 0045a7a7  6a00                 push 0
// 0045a7a9  6815090000           push 0x915
// 0045a7ae  740f                 je 0x45a7bf
// 0045a7b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a7b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a7b6  50                   push eax
// 0045a7b7  ffd1                 call ecx
// 0045a7b9  83c410               add esp, 0x10
// 0045a7bc  c20400               ret 4
// 0045a7bf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a7c2  52                   push edx
// 0045a7c3  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a7c9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
