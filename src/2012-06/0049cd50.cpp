// roc 2012-06 0049cd50  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cd50
//
// 0049cd50  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049cd55  741e                 je 0x49cd75
// 0049cd57  8b442408             mov eax, dword ptr [esp + 8]
// 0049cd5b  8b542404             mov edx, dword ptr [esp + 4]
// 0049cd5f  50                   push eax
// 0049cd60  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049cd63  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049cd66  52                   push edx
// 0049cd67  68fb070000           push 0x7fb
// 0049cd6c  50                   push eax
// 0049cd6d  ffd1                 call ecx
// 0049cd6f  83c410               add esp, 0x10
// 0049cd72  c20c00               ret 0xc
// 0049cd75  8b542408             mov edx, dword ptr [esp + 8]
// 0049cd79  8b442404             mov eax, dword ptr [esp + 4]
// 0049cd7d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049cd80  52                   push edx
// 0049cd81  50                   push eax
// 0049cd82  68fb070000           push 0x7fb
// 0049cd87  51                   push ecx
// 0049cd88  ff15043cb200         call dword ptr [0xb23c04]
// 0049cd8e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerAdd@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
