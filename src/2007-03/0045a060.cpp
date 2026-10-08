// roc 2007-03 0045a060  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a060
//
// 0045a060  837c240400           cmp dword ptr [esp + 4], 0
// 0045a065  6a00                 push 0
// 0045a067  6a00                 push 0
// 0045a069  686f080000           push 0x86f
// 0045a06e  740f                 je 0x45a07f
// 0045a070  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a073  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a076  50                   push eax
// 0045a077  ffd1                 call ecx
// 0045a079  83c410               add esp, 0x10
// 0045a07c  c20400               ret 4
// 0045a07f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a082  52                   push edx
// 0045a083  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a089  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetModify@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
