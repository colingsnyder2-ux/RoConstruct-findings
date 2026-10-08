// roc 2007-03 0045a3f0  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a3f0
//
// 0045a3f0  837c240400           cmp dword ptr [esp + 4], 0
// 0045a3f5  6a00                 push 0
// 0045a3f7  6a00                 push 0
// 0045a3f9  6884080000           push 0x884
// 0045a3fe  740f                 je 0x45a40f
// 0045a400  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a403  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a406  50                   push eax
// 0045a407  ffd1                 call ecx
// 0045a409  83c410               add esp, 0x10
// 0045a40c  c20400               ret 4
// 0045a40f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a412  52                   push edx
// 0045a413  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a419  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Clear@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
