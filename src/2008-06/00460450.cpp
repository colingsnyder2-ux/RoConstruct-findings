// roc 2008-06 00460450  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460450
//
// 00460450  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460455  741e                 je 0x460475
// 00460457  8b442408             mov eax, dword ptr [esp + 8]
// 0046045b  8b542404             mov edx, dword ptr [esp + 4]
// 0046045f  50                   push eax
// 00460460  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460463  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460466  52                   push edx
// 00460467  68fc070000           push 0x7fc
// 0046046c  50                   push eax
// 0046046d  ffd1                 call ecx
// 0046046f  83c410               add esp, 0x10
// 00460472  c20c00               ret 0xc
// 00460475  8b542408             mov edx, dword ptr [esp + 8]
// 00460479  8b442404             mov eax, dword ptr [esp + 4]
// 0046047d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460480  52                   push edx
// 00460481  50                   push eax
// 00460482  68fc070000           push 0x7fc
// 00460487  51                   push ecx
// 00460488  ff15142e8000         call dword ptr [0x802e14]
// 0046048e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDelete@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
