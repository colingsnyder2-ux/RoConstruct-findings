// roc 2010-06 0046e4b0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e4b0
//
// 0046e4b0  837c240400           cmp dword ptr [esp + 4], 0
// 0046e4b5  6a00                 push 0
// 0046e4b7  6a00                 push 0
// 0046e4b9  68ef080000           push 0x8ef
// 0046e4be  740f                 je 0x46e4cf
// 0046e4c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e4c3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e4c6  50                   push eax
// 0046e4c7  ffd1                 call ecx
// 0046e4c9  83c410               add esp, 0x10
// 0046e4cc  c20400               ret 4
// 0046e4cf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0046e4d2  52                   push edx
// 0046e4d3  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e4d9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?TargetFromSelection@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
