// roc 2008-06 00460f10  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460f10
//
// 00460f10  837c240400           cmp dword ptr [esp + 4], 0
// 00460f15  6a00                 push 0
// 00460f17  6a00                 push 0
// 00460f19  688b080000           push 0x88b
// 00460f1e  740f                 je 0x460f2f
// 00460f20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460f23  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460f26  50                   push eax
// 00460f27  ffd1                 call ecx
// 00460f29  83c410               add esp, 0x10
// 00460f2c  c20400               ret 4
// 00460f2f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460f32  52                   push edx
// 00460f33  ff15142e8000         call dword ptr [0x802e14]
// 00460f39  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetOvertype@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
