// roc 2007-03 00459690  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459690
//
// 00459690  837c240400           cmp dword ptr [esp + 4], 0
// 00459695  6a00                 push 0
// 00459697  6a00                 push 0
// 00459699  68d4070000           push 0x7d4
// 0045969e  740f                 je 0x4596af
// 004596a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004596a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004596a6  50                   push eax
// 004596a7  ffd1                 call ecx
// 004596a9  83c410               add esp, 0x10
// 004596ac  c20400               ret 4
// 004596af  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004596b2  52                   push edx
// 004596b3  ff1550ee7700         call dword ptr [0x77ee50]
// 004596b9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
