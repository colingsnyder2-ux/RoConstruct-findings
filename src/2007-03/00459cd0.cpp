// roc 2007-03 00459cd0  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459cd0
//
// 00459cd0  837c240400           cmp dword ptr [esp + 4], 0
// 00459cd5  6a00                 push 0
// 00459cd7  6a00                 push 0
// 00459cd9  6802080000           push 0x802
// 00459cde  740f                 je 0x459cef
// 00459ce0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459ce3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459ce6  50                   push eax
// 00459ce7  ffd1                 call ecx
// 00459ce9  83c410               add esp, 0x10
// 00459cec  c20400               ret 4
// 00459cef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00459cf2  52                   push edx
// 00459cf3  ff1550ee7700         call dword ptr [0x77ee50]
// 00459cf9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
