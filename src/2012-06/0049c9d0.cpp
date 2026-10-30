// roc 2012-06 0049c9d0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049c9d0
//
// 0049c9d0  837c240400           cmp dword ptr [esp + 4], 0
// 0049c9d5  6a00                 push 0
// 0049c9d7  6a00                 push 0
// 0049c9d9  68d4070000           push 0x7d4
// 0049c9de  740f                 je 0x49c9ef
// 0049c9e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049c9e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049c9e6  50                   push eax
// 0049c9e7  ffd1                 call ecx
// 0049c9e9  83c410               add esp, 0x10
// 0049c9ec  c20400               ret 4
// 0049c9ef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049c9f2  52                   push edx
// 0049c9f3  ff15043cb200         call dword ptr [0xb23c04]
// 0049c9f9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ClearAll@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
