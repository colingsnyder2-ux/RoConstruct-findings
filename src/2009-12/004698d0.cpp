// roc 2009-12 004698d0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004698d0
//
// 004698d0  837c240400           cmp dword ptr [esp + 4], 0
// 004698d5  6a00                 push 0
// 004698d7  6a00                 push 0
// 004698d9  68d4070000           push 0x7d4
// 004698de  740f                 je 0x4698ef
// 004698e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004698e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004698e6  50                   push eax
// 004698e7  ffd1                 call ecx
// 004698e9  83c410               add esp, 0x10
// 004698ec  c20400               ret 4
// 004698ef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004698f2  52                   push edx
// 004698f3  ff15c4cb9800         call dword ptr [0x98cbc4]
// 004698f9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
