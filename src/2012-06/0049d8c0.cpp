// roc 2012-06 0049d8c0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d8c0
//
// 0049d8c0  837c240400           cmp dword ptr [esp + 4], 0
// 0049d8c5  6a00                 push 0
// 0049d8c7  6a00                 push 0
// 0049d8c9  6891080000           push 0x891
// 0049d8ce  740f                 je 0x49d8df
// 0049d8d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d8d3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d8d6  50                   push eax
// 0049d8d7  ffd1                 call ecx
// 0049d8d9  83c410               add esp, 0x10
// 0049d8dc  c20400               ret 4
// 0049d8df  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d8e2  52                   push edx
// 0049d8e3  ff15043cb200         call dword ptr [0xb23c04]
// 0049d8e9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetEnd@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
