// roc 2009-12 00469a70  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469a70
//
// 00469a70  837c240400           cmp dword ptr [esp + 4], 0
// 00469a75  6a00                 push 0
// 00469a77  6a00                 push 0
// 00469a79  68e0070000           push 0x7e0
// 00469a7e  740f                 je 0x469a8f
// 00469a80  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469a83  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469a86  50                   push eax
// 00469a87  ffd1                 call ecx
// 00469a89  83c410               add esp, 0x10
// 00469a8c  c20400               ret 4
// 00469a8f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00469a92  52                   push edx
// 00469a93  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469a99  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanRedo@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
