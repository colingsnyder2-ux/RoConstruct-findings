// roc 2008-06 00460d30  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460d30
//
// 00460d30  837c240400           cmp dword ptr [esp + 4], 0
// 00460d35  6a00                 push 0
// 00460d37  6a00                 push 0
// 00460d39  687f080000           push 0x87f
// 00460d3e  740f                 je 0x460d4f
// 00460d40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460d43  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460d46  50                   push eax
// 00460d47  ffd1                 call ecx
// 00460d49  83c410               add esp, 0x10
// 00460d4c  c20400               ret 4
// 00460d4f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00460d52  52                   push edx
// 00460d53  ff15142e8000         call dword ptr [0x802e14]
// 00460d59  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?EmptyUndoBuffer@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
