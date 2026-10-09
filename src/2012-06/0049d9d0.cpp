// roc 2012-06 0049d9d0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d9d0
//
// 0049d9d0  837c240400           cmp dword ptr [esp + 4], 0
// 0049d9d5  6a00                 push 0
// 0049d9d7  6a00                 push 0
// 0049d9d9  6899080000           push 0x899
// 0049d9de  740f                 je 0x49d9ef
// 0049d9e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d9e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d9e6  50                   push eax
// 0049d9e7  ffd1                 call ecx
// 0049d9e9  83c410               add esp, 0x10
// 0049d9ec  c20400               ret 4
// 0049d9ef  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d9f2  52                   push edx
// 0049d9f3  ff15043cb200         call dword ptr [0xb23c04]
// 0049d9f9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipCancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
