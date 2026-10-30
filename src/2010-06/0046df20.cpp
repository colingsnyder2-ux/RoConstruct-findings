// roc 2010-06 0046df20  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046df20
//
// 0046df20  837c240800           cmp dword ptr [esp + 8], 0
// 0046df25  6a00                 push 0
// 0046df27  7419                 je 0x46df42
// 0046df29  8b442408             mov eax, dword ptr [esp + 8]
// 0046df2d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0046df30  50                   push eax
// 0046df31  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0046df34  6876080000           push 0x876
// 0046df39  52                   push edx
// 0046df3a  ffd0                 call eax
// 0046df3c  83c410               add esp, 0x10
// 0046df3f  c20800               ret 8
// 0046df42  8b542408             mov edx, dword ptr [esp + 8]
// 0046df46  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0046df49  52                   push edx
// 0046df4a  6876080000           push 0x876
// 0046df4f  50                   push eax
// 0046df50  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046df56  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?LineFromPosition@CScintillaCtrl@@QAEHJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
