// roc 2011-06 0048a950  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a950
//
// 0048a950  837c240400           cmp dword ptr [esp + 4], 0
// 0048a955  6a00                 push 0
// 0048a957  6a00                 push 0
// 0048a959  687f080000           push 0x87f
// 0048a95e  740f                 je 0x48a96f
// 0048a960  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a963  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a966  50                   push eax
// 0048a967  ffd1                 call ecx
// 0048a969  83c410               add esp, 0x10
// 0048a96c  c20400               ret 4
// 0048a96f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0048a972  52                   push edx
// 0048a973  ff15c019a400         call dword ptr [0xa419c0]
// 0048a979  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?EmptyUndoBuffer@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
