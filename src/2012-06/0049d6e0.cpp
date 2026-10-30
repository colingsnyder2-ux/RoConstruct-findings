// roc 2012-06 0049d6e0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d6e0
//
// 0049d6e0  837c240400           cmp dword ptr [esp + 4], 0
// 0049d6e5  6a00                 push 0
// 0049d6e7  6a00                 push 0
// 0049d6e9  6881080000           push 0x881
// 0049d6ee  740f                 je 0x49d6ff
// 0049d6f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d6f3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d6f6  50                   push eax
// 0049d6f7  ffd1                 call ecx
// 0049d6f9  83c410               add esp, 0x10
// 0049d6fc  c20400               ret 4
// 0049d6ff  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d702  52                   push edx
// 0049d703  ff15043cb200         call dword ptr [0xb23c04]
// 0049d709  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cut@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
