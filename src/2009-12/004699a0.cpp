// roc 2009-12 004699a0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004699a0
//
// 004699a0  837c240400           cmp dword ptr [esp + 4], 0
// 004699a5  6a00                 push 0
// 004699a7  6a00                 push 0
// 004699a9  68db070000           push 0x7db
// 004699ae  740f                 je 0x4699bf
// 004699b0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004699b3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004699b6  50                   push eax
// 004699b7  ffd1                 call ecx
// 004699b9  83c410               add esp, 0x10
// 004699bc  c20400               ret 4
// 004699bf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004699c2  52                   push edx
// 004699c3  ff15c4cb9800         call dword ptr [0x98cbc4]
// 004699c9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Redo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
