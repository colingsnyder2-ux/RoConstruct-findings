// roc 2007-03 0045a770  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a770
//
// 0045a770  837c240400           cmp dword ptr [esp + 4], 0
// 0045a775  6a00                 push 0
// 0045a777  6a00                 push 0
// 0045a779  68ef080000           push 0x8ef
// 0045a77e  740f                 je 0x45a78f
// 0045a780  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a783  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a786  50                   push eax
// 0045a787  ffd1                 call ecx
// 0045a789  83c410               add esp, 0x10
// 0045a78c  c20400               ret 4
// 0045a78f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a792  52                   push edx
// 0045a793  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a799  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?TargetFromSelection@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
