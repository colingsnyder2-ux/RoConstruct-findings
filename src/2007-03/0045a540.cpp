// roc 2007-03 0045a540  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a540
//
// 0045a540  837c240400           cmp dword ptr [esp + 4], 0
// 0045a545  6a00                 push 0
// 0045a547  6a00                 push 0
// 0045a549  6891080000           push 0x891
// 0045a54e  740f                 je 0x45a55f
// 0045a550  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a553  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a556  50                   push eax
// 0045a557  ffd1                 call ecx
// 0045a559  83c410               add esp, 0x10
// 0045a55c  c20400               ret 4
// 0045a55f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a562  52                   push edx
// 0045a563  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a569  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
