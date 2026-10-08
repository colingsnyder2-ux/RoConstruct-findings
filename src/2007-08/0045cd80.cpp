// roc 2007-08 0045cd80  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cd80
//
// 0045cd80  837c240400           cmp dword ptr [esp + 4], 0
// 0045cd85  6a00                 push 0
// 0045cd87  6a00                 push 0
// 0045cd89  688f080000           push 0x88f
// 0045cd8e  740f                 je 0x45cd9f
// 0045cd90  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045cd93  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045cd96  50                   push eax
// 0045cd97  ffd1                 call ecx
// 0045cd99  83c410               add esp, 0x10
// 0045cd9c  c20400               ret 4
// 0045cd9f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045cda2  52                   push edx
// 0045cda3  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cda9  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetTargetStart@CScintillaCtrl@@QAEJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
