// roc 2012-06 0049db20  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049db20
//
// 0049db20  837c240400           cmp dword ptr [esp + 4], 0
// 0049db25  6a00                 push 0
// 0049db27  6a00                 push 0
// 0049db29  6815090000           push 0x915
// 0049db2e  740f                 je 0x49db3f
// 0049db30  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049db33  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049db36  50                   push eax
// 0049db37  ffd1                 call ecx
// 0049db39  83c410               add esp, 0x10
// 0049db3c  c20400               ret 4
// 0049db3f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0049db42  52                   push edx
// 0049db43  ff15043cb200         call dword ptr [0xb23c04]
// 0049db49  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
