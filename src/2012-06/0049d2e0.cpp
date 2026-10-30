// roc 2012-06 0049d2e0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d2e0
//
// 0049d2e0  837c240400           cmp dword ptr [esp + 4], 0
// 0049d2e5  6a00                 push 0
// 0049d2e7  6a00                 push 0
// 0049d2e9  685f080000           push 0x85f
// 0049d2ee  740f                 je 0x49d2ff
// 0049d2f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d2f3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d2f6  50                   push eax
// 0049d2f7  ffd1                 call ecx
// 0049d2f9  83c410               add esp, 0x10
// 0049d2fc  c20400               ret 4
// 0049d2ff  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d302  52                   push edx
// 0049d303  ff15043cb200         call dword ptr [0xb23c04]
// 0049d309  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetSelectionStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
