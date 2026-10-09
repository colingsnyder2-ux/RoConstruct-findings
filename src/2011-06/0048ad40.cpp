// roc 2011-06 0048ad40  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048ad40
//
// 0048ad40  837c240800           cmp dword ptr [esp + 8], 0
// 0048ad45  6a00                 push 0
// 0048ad47  7419                 je 0x48ad62
// 0048ad49  8b442408             mov eax, dword ptr [esp + 8]
// 0048ad4d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0048ad50  50                   push eax
// 0048ad51  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0048ad54  68b7080000           push 0x8b7
// 0048ad59  52                   push edx
// 0048ad5a  ffd0                 call eax
// 0048ad5c  83c410               add esp, 0x10
// 0048ad5f  c20800               ret 8
// 0048ad62  8b542408             mov edx, dword ptr [esp + 8]
// 0048ad66  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0048ad69  52                   push edx
// 0048ad6a  68b7080000           push 0x8b7
// 0048ad6f  50                   push eax
// 0048ad70  ff15c019a400         call dword ptr [0xa419c0]
// 0048ad76  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?ToggleFold@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
