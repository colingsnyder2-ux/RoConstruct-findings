// roc 2011-06 0048a8f0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a8f0
//
// 0048a8f0  837c240400           cmp dword ptr [esp + 4], 0
// 0048a8f5  6a00                 push 0
// 0048a8f7  6a00                 push 0
// 0048a8f9  687d080000           push 0x87d
// 0048a8fe  740f                 je 0x48a90f
// 0048a900  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a903  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a906  50                   push eax
// 0048a907  ffd1                 call ecx
// 0048a909  83c410               add esp, 0x10
// 0048a90c  c20400               ret 4
// 0048a90f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048a912  52                   push edx
// 0048a913  ff15c019a400         call dword ptr [0xa419c0]
// 0048a919  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanPaste@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
