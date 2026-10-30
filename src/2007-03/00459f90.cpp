// roc 2007-03 00459f90  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459f90
//
// 00459f90  837c240400           cmp dword ptr [esp + 4], 0
// 00459f95  6a00                 push 0
// 00459f97  6a00                 push 0
// 00459f99  6861080000           push 0x861
// 00459f9e  740f                 je 0x459faf
// 00459fa0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459fa3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459fa6  50                   push eax
// 00459fa7  ffd1                 call ecx
// 00459fa9  83c410               add esp, 0x10
// 00459fac  c20400               ret 4
// 00459faf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00459fb2  52                   push edx
// 00459fb3  ff1550ee7700         call dword ptr [0x77ee50]
// 00459fb9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
