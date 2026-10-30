// roc 2011-06 0048adf0  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048adf0
//
// 0048adf0  837c240400           cmp dword ptr [esp + 4], 0
// 0048adf5  6a00                 push 0
// 0048adf7  6a00                 push 0
// 0048adf9  6815090000           push 0x915
// 0048adfe  740f                 je 0x48ae0f
// 0048ae00  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048ae03  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048ae06  50                   push eax
// 0048ae07  ffd1                 call ecx
// 0048ae09  83c410               add esp, 0x10
// 0048ae0c  c20400               ret 4
// 0048ae0f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048ae12  52                   push edx
// 0048ae13  ff15c019a400         call dword ptr [0xa419c0]
// 0048ae19  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?Cancel@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
