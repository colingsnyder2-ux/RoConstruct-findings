// roc 2008-06 00460190  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460190
//
// 00460190  837c240400           cmp dword ptr [esp + 4], 0
// 00460195  6a00                 push 0
// 00460197  6a00                 push 0
// 00460199  68db070000           push 0x7db
// 0046019e  740f                 je 0x4601af
// 004601a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004601a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004601a6  50                   push eax
// 004601a7  ffd1                 call ecx
// 004601a9  83c410               add esp, 0x10
// 004601ac  c20400               ret 4
// 004601af  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004601b2  52                   push edx
// 004601b3  ff15142e8000         call dword ptr [0x802e14]
// 004601b9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Redo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
