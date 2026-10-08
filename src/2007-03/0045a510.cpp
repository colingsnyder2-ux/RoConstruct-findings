// roc 2007-03 0045a510  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a510
//
// 0045a510  837c240400           cmp dword ptr [esp + 4], 0
// 0045a515  6a00                 push 0
// 0045a517  6a00                 push 0
// 0045a519  688f080000           push 0x88f
// 0045a51e  740f                 je 0x45a52f
// 0045a520  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a523  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a526  50                   push eax
// 0045a527  ffd1                 call ecx
// 0045a529  83c410               add esp, 0x10
// 0045a52c  c20400               ret 4
// 0045a52f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a532  52                   push edx
// 0045a533  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a539  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
