// roc 2009-12 0046a510  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046a510
//
// 0046a510  837c240400           cmp dword ptr [esp + 4], 0
// 0046a515  6a00                 push 0
// 0046a517  6a00                 push 0
// 0046a519  687e080000           push 0x87e
// 0046a51e  740f                 je 0x46a52f
// 0046a520  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046a523  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046a526  50                   push eax
// 0046a527  ffd1                 call ecx
// 0046a529  83c410               add esp, 0x10
// 0046a52c  c20400               ret 4
// 0046a52f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046a532  52                   push edx
// 0046a533  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046a539  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanUndo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
