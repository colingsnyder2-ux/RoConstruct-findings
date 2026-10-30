// roc 2011-06 0048adc0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048adc0
//
// 0048adc0  837c240400           cmp dword ptr [esp + 4], 0
// 0048adc5  6a00                 push 0
// 0048adc7  6a00                 push 0
// 0048adc9  68ef080000           push 0x8ef
// 0048adce  740f                 je 0x48addf
// 0048add0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048add3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048add6  50                   push eax
// 0048add7  ffd1                 call ecx
// 0048add9  83c410               add esp, 0x10
// 0048addc  c20400               ret 4
// 0048addf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048ade2  52                   push edx
// 0048ade3  ff15c019a400         call dword ptr [0xa419c0]
// 0048ade9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?TargetFromSelection@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
