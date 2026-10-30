// roc 2012-06 0049d340  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d340
//
// 0049d340  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d345  741e                 je 0x49d365
// 0049d347  8b442408             mov eax, dword ptr [esp + 8]
// 0049d34b  8b542404             mov edx, dword ptr [esp + 4]
// 0049d34f  50                   push eax
// 0049d350  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d353  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d356  52                   push edx
// 0049d357  6866080000           push 0x866
// 0049d35c  50                   push eax
// 0049d35d  ffd1                 call ecx
// 0049d35f  83c410               add esp, 0x10
// 0049d362  c20c00               ret 0xc
// 0049d365  8b542408             mov edx, dword ptr [esp + 8]
// 0049d369  8b442404             mov eax, dword ptr [esp + 4]
// 0049d36d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d370  52                   push edx
// 0049d371  50                   push eax
// 0049d372  6866080000           push 0x866
// 0049d377  51                   push ecx
// 0049d378  ff15043cb200         call dword ptr [0xb23c04]
// 0049d37e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FindTextA@CScintillaCtrl@@QAEJHPAUTextToFind@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
