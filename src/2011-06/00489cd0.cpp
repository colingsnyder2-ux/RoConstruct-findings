// roc 2011-06 00489cd0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489cd0
//
// 00489cd0  837c240400           cmp dword ptr [esp + 4], 0
// 00489cd5  6a00                 push 0
// 00489cd7  6a00                 push 0
// 00489cd9  68d6070000           push 0x7d6
// 00489cde  740f                 je 0x489cef
// 00489ce0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00489ce3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00489ce6  50                   push eax
// 00489ce7  ffd1                 call ecx
// 00489ce9  83c410               add esp, 0x10
// 00489cec  c20400               ret 4
// 00489cef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00489cf2  52                   push edx
// 00489cf3  ff15c019a400         call dword ptr [0xa419c0]
// 00489cf9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
