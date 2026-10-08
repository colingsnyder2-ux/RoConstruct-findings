// roc 2008-06 00460290  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460290
//
// 00460290  837c240800           cmp dword ptr [esp + 8], 0
// 00460295  6a00                 push 0
// 00460297  7419                 je 0x4602b2
// 00460299  8b442408             mov eax, dword ptr [esp + 8]
// 0046029d  8b5158               mov edx, dword ptr [ecx + 0x58]
// 004602a0  50                   push eax
// 004602a1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 004602a4  68e8070000           push 0x7e8
// 004602a9  52                   push edx
// 004602aa  ffd0                 call eax
// 004602ac  83c410               add esp, 0x10
// 004602af  c20800               ret 8
// 004602b2  8b542408             mov edx, dword ptr [esp + 8]
// 004602b6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 004602b9  52                   push edx
// 004602ba  68e8070000           push 0x7e8
// 004602bf  50                   push eax
// 004602c0  ff15142e8000         call dword ptr [0x802e14]
// 004602c6  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoLine@CScintillaCtrl@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
