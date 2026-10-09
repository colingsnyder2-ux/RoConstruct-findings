// roc 2012-06 0049ce30  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049ce30
//
// 0049ce30  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049ce35  741e                 je 0x49ce55
// 0049ce37  8b442408             mov eax, dword ptr [esp + 8]
// 0049ce3b  8b542404             mov edx, dword ptr [esp + 4]
// 0049ce3f  50                   push eax
// 0049ce40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049ce43  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049ce46  52                   push edx
// 0049ce47  68ff070000           push 0x7ff
// 0049ce4c  50                   push eax
// 0049ce4d  ffd1                 call ecx
// 0049ce4f  83c410               add esp, 0x10
// 0049ce52  c20c00               ret 0xc
// 0049ce55  8b542408             mov edx, dword ptr [esp + 8]
// 0049ce59  8b442404             mov eax, dword ptr [esp + 4]
// 0049ce5d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049ce60  52                   push edx
// 0049ce61  50                   push eax
// 0049ce62  68ff070000           push 0x7ff
// 0049ce67  51                   push ecx
// 0049ce68  ff15043cb200         call dword ptr [0xb23c04]
// 0049ce6e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerNext@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
