// roc 2009-12 00469f10  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469f10
//
// 00469f10  837c240400           cmp dword ptr [esp + 4], 0
// 00469f15  6a00                 push 0
// 00469f17  6a00                 push 0
// 00469f19  6802080000           push 0x802
// 00469f1e  740f                 je 0x469f2f
// 00469f20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469f23  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469f26  50                   push eax
// 00469f27  ffd1                 call ecx
// 00469f29  83c410               add esp, 0x10
// 00469f2c  c20400               ret 4
// 00469f2f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00469f32  52                   push edx
// 00469f33  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469f39  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
