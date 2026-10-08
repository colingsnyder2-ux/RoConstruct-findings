// roc 2008-06 004600c0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004600c0
//
// 004600c0  837c240400           cmp dword ptr [esp + 4], 0
// 004600c5  6a00                 push 0
// 004600c7  6a00                 push 0
// 004600c9  68d4070000           push 0x7d4
// 004600ce  740f                 je 0x4600df
// 004600d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004600d3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004600d6  50                   push eax
// 004600d7  ffd1                 call ecx
// 004600d9  83c410               add esp, 0x10
// 004600dc  c20400               ret 4
// 004600df  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004600e2  52                   push edx
// 004600e3  ff15142e8000         call dword ptr [0x802e14]
// 004600e9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
