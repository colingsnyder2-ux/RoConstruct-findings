// roc 2009-12 0046a9b0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a9b0
//
// 0046a9b0  837c240400           cmp dword ptr [esp + 4], 0
// 0046a9b5  6a00                 push 0
// 0046a9b7  6a00                 push 0
// 0046a9b9  68ef080000           push 0x8ef
// 0046a9be  740f                 je 0x46a9cf
// 0046a9c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a9c3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a9c6  50                   push eax
// 0046a9c7  ffd1                 call ecx
// 0046a9c9  83c410               add esp, 0x10
// 0046a9cc  c20400               ret 4
// 0046a9cf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a9d2  52                   push edx
// 0046a9d3  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a9d9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?TargetFromSelection@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
