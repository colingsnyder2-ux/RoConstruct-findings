// roc 2009-06 00461730  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00461730
//
// 00461730  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461735  741e                 je 0x461755
// 00461737  8b442408             mov eax, dword ptr [esp + 8]
// 0046173b  8b542404             mov edx, dword ptr [esp + 4]
// 0046173f  50                   push eax
// 00461740  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00461743  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00461746  52                   push edx
// 00461747  6870080000           push 0x870
// 0046174c  50                   push eax
// 0046174d  ffd1                 call ecx
// 0046174f  83c410               add esp, 0x10
// 00461752  c20c00               ret 0xc
// 00461755  8b542408             mov edx, dword ptr [esp + 8]
// 00461759  8b442404             mov eax, dword ptr [esp + 4]
// 0046175d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461760  52                   push edx
// 00461761  50                   push eax
// 00461762  6870080000           push 0x870
// 00461767  51                   push ecx
// 00461768  ff1590ee8900         call dword ptr [0x89ee90]
// 0046176e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSel@CScintillaCtrl@@QAEXJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
