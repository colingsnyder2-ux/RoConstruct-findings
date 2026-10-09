// roc 2012-06 0049d830  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d830
//
// 0049d830  837c240400           cmp dword ptr [esp + 4], 0
// 0049d835  6a00                 push 0
// 0049d837  6a00                 push 0
// 0049d839  6887080000           push 0x887
// 0049d83e  740f                 je 0x49d84f
// 0049d840  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d843  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d846  50                   push eax
// 0049d847  ffd1                 call ecx
// 0049d849  83c410               add esp, 0x10
// 0049d84c  c20400               ret 4
// 0049d84f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d852  52                   push edx
// 0049d853  ff15043cb200         call dword ptr [0xb23c04]
// 0049d859  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTextLength@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
