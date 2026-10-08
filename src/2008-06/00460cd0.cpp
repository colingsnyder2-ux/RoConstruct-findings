// roc 2008-06 00460cd0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460cd0
//
// 00460cd0  837c240400           cmp dword ptr [esp + 4], 0
// 00460cd5  6a00                 push 0
// 00460cd7  6a00                 push 0
// 00460cd9  687d080000           push 0x87d
// 00460cde  740f                 je 0x460cef
// 00460ce0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460ce3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460ce6  50                   push eax
// 00460ce7  ffd1                 call ecx
// 00460ce9  83c410               add esp, 0x10
// 00460cec  c20400               ret 4
// 00460cef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460cf2  52                   push edx
// 00460cf3  ff15142e8000         call dword ptr [0x802e14]
// 00460cf9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CanPaste@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
