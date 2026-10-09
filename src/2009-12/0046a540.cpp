// roc 2009-12 0046a540  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a540
//
// 0046a540  837c240400           cmp dword ptr [esp + 4], 0
// 0046a545  6a00                 push 0
// 0046a547  6a00                 push 0
// 0046a549  687f080000           push 0x87f
// 0046a54e  740f                 je 0x46a55f
// 0046a550  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a553  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a556  50                   push eax
// 0046a557  ffd1                 call ecx
// 0046a559  83c410               add esp, 0x10
// 0046a55c  c20400               ret 4
// 0046a55f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a562  52                   push edx
// 0046a563  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a569  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?EmptyUndoBuffer@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
