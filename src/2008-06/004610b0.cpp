// roc 2008-06 004610b0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004610b0
//
// 004610b0  837c240400           cmp dword ptr [esp + 4], 0
// 004610b5  6a00                 push 0
// 004610b7  6a00                 push 0
// 004610b9  689a080000           push 0x89a
// 004610be  740f                 je 0x4610cf
// 004610c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004610c3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004610c6  50                   push eax
// 004610c7  ffd1                 call ecx
// 004610c9  83c410               add esp, 0x10
// 004610cc  c20400               ret 4
// 004610cf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004610d2  52                   push edx
// 004610d3  ff15142e8000         call dword ptr [0x802e14]
// 004610d9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipActive@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
