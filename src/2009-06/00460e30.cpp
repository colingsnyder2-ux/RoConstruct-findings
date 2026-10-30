// roc 2009-06 00460e30  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460e30
//
// 00460e30  837c240800           cmp dword ptr [esp + 8], 0
// 00460e35  6a00                 push 0
// 00460e37  7419                 je 0x460e52
// 00460e39  8b442408             mov eax, dword ptr [esp + 8]
// 00460e3d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 00460e40  50                   push eax
// 00460e41  8b4154               mov eax, dword ptr [ecx + 0x54]
// 00460e44  68dc070000           push 0x7dc
// 00460e49  52                   push edx
// 00460e4a  ffd0                 call eax
// 00460e4c  83c410               add esp, 0x10
// 00460e4f  c20800               ret 8
// 00460e52  8b542408             mov edx, dword ptr [esp + 8]
// 00460e56  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00460e59  52                   push edx
// 00460e5a  68dc070000           push 0x7dc
// 00460e5f  50                   push eax
// 00460e60  ff1590ee8900         call dword ptr [0x89ee90]
// 00460e66  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetUndoCollection@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
