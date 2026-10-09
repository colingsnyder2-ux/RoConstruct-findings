// roc 2011-06 0048ac50  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048ac50
//
// 0048ac50  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048ac55  741e                 je 0x48ac75
// 0048ac57  8b442408             mov eax, dword ptr [esp + 8]
// 0048ac5b  8b542404             mov edx, dword ptr [esp + 4]
// 0048ac5f  50                   push eax
// 0048ac60  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048ac63  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048ac66  52                   push edx
// 0048ac67  6898080000           push 0x898
// 0048ac6c  50                   push eax
// 0048ac6d  ffd1                 call ecx
// 0048ac6f  83c410               add esp, 0x10
// 0048ac72  c20c00               ret 0xc
// 0048ac75  8b542408             mov edx, dword ptr [esp + 8]
// 0048ac79  8b442404             mov eax, dword ptr [esp + 4]
// 0048ac7d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048ac80  52                   push edx
// 0048ac81  50                   push eax
// 0048ac82  6898080000           push 0x898
// 0048ac87  51                   push ecx
// 0048ac88  ff15c019a400         call dword ptr [0xa419c0]
// 0048ac8e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipShow@CScintillaCtrl@@QAEXJPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
