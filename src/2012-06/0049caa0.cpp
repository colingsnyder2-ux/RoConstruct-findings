// roc 2012-06 0049caa0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049caa0
//
// 0049caa0  837c240400           cmp dword ptr [esp + 4], 0
// 0049caa5  6a00                 push 0
// 0049caa7  6a00                 push 0
// 0049caa9  68db070000           push 0x7db
// 0049caae  740f                 je 0x49cabf
// 0049cab0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049cab3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049cab6  50                   push eax
// 0049cab7  ffd1                 call ecx
// 0049cab9  83c410               add esp, 0x10
// 0049cabc  c20400               ret 4
// 0049cabf  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049cac2  52                   push edx
// 0049cac3  ff15043cb200         call dword ptr [0xb23c04]
// 0049cac9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Redo@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
