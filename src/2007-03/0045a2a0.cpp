// roc 2007-03 0045a2a0  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a2a0
//
// 0045a2a0  837c240400           cmp dword ptr [esp + 4], 0
// 0045a2a5  6a00                 push 0
// 0045a2a7  6a00                 push 0
// 0045a2a9  687d080000           push 0x87d
// 0045a2ae  740f                 je 0x45a2bf
// 0045a2b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a2b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a2b6  50                   push eax
// 0045a2b7  ffd1                 call ecx
// 0045a2b9  83c410               add esp, 0x10
// 0045a2bc  c20400               ret 4
// 0045a2bf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a2c2  52                   push edx
// 0045a2c3  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a2c9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanPaste@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
