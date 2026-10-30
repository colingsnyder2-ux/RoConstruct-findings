// roc 2011-06 0048a070  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a070
//
// 0048a070  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a075  741e                 je 0x48a095
// 0048a077  8b442408             mov eax, dword ptr [esp + 8]
// 0048a07b  8b542404             mov edx, dword ptr [esp + 4]
// 0048a07f  50                   push eax
// 0048a080  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a083  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a086  52                   push edx
// 0048a087  68fc070000           push 0x7fc
// 0048a08c  50                   push eax
// 0048a08d  ffd1                 call ecx
// 0048a08f  83c410               add esp, 0x10
// 0048a092  c20c00               ret 0xc
// 0048a095  8b542408             mov edx, dword ptr [esp + 8]
// 0048a099  8b442404             mov eax, dword ptr [esp + 4]
// 0048a09d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a0a0  52                   push edx
// 0048a0a1  50                   push eax
// 0048a0a2  68fc070000           push 0x7fc
// 0048a0a7  51                   push ecx
// 0048a0a8  ff15c019a400         call dword ptr [0xa419c0]
// 0048a0ae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDelete@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
