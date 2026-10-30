// roc 2012-06 0049d860  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d860
//
// 0049d860  837c240400           cmp dword ptr [esp + 4], 0
// 0049d865  6a00                 push 0
// 0049d867  6a00                 push 0
// 0049d869  688b080000           push 0x88b
// 0049d86e  740f                 je 0x49d87f
// 0049d870  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d873  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d876  50                   push eax
// 0049d877  ffd1                 call ecx
// 0049d879  83c410               add esp, 0x10
// 0049d87c  c20400               ret 4
// 0049d87f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d882  52                   push edx
// 0049d883  ff15043cb200         call dword ptr [0xb23c04]
// 0049d889  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetOvertype@CScintillaCtrl@@QAEHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
