// roc 2012-06 0049d890  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d890
//
// 0049d890  837c240400           cmp dword ptr [esp + 4], 0
// 0049d895  6a00                 push 0
// 0049d897  6a00                 push 0
// 0049d899  688f080000           push 0x88f
// 0049d89e  740f                 je 0x49d8af
// 0049d8a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d8a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d8a6  50                   push eax
// 0049d8a7  ffd1                 call ecx
// 0049d8a9  83c410               add esp, 0x10
// 0049d8ac  c20400               ret 4
// 0049d8af  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049d8b2  52                   push edx
// 0049d8b3  ff15043cb200         call dword ptr [0xb23c04]
// 0049d8b9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
