// roc 2012-06 0049d6b0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d6b0
//
// 0049d6b0  837c240400           cmp dword ptr [esp + 4], 0
// 0049d6b5  6a00                 push 0
// 0049d6b7  6a00                 push 0
// 0049d6b9  6880080000           push 0x880
// 0049d6be  740f                 je 0x49d6cf
// 0049d6c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d6c3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d6c6  50                   push eax
// 0049d6c7  ffd1                 call ecx
// 0049d6c9  83c410               add esp, 0x10
// 0049d6cc  c20400               ret 4
// 0049d6cf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d6d2  52                   push edx
// 0049d6d3  ff15043cb200         call dword ptr [0xb23c04]
// 0049d6d9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Undo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
