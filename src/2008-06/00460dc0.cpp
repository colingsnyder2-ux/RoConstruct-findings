// roc 2008-06 00460dc0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460dc0
//
// 00460dc0  837c240400           cmp dword ptr [esp + 4], 0
// 00460dc5  6a00                 push 0
// 00460dc7  6a00                 push 0
// 00460dc9  6882080000           push 0x882
// 00460dce  740f                 je 0x460ddf
// 00460dd0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460dd3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460dd6  50                   push eax
// 00460dd7  ffd1                 call ecx
// 00460dd9  83c410               add esp, 0x10
// 00460ddc  c20400               ret 4
// 00460ddf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460de2  52                   push edx
// 00460de3  ff15142e8000         call dword ptr [0x802e14]
// 00460de9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Copy@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
