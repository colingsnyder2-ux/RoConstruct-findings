// roc 2011-06 00489c50  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489c50
//
// 00489c50  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00489c55  741e                 je 0x489c75
// 00489c57  8b442408             mov eax, dword ptr [esp + 8]
// 00489c5b  8b542404             mov edx, dword ptr [esp + 4]
// 00489c5f  50                   push eax
// 00489c60  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00489c63  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00489c66  52                   push edx
// 00489c67  68d1070000           push 0x7d1
// 00489c6c  50                   push eax
// 00489c6d  ffd1                 call ecx
// 00489c6f  83c410               add esp, 0x10
// 00489c72  c20c00               ret 0xc
// 00489c75  8b542408             mov edx, dword ptr [esp + 8]
// 00489c79  8b442404             mov eax, dword ptr [esp + 4]
// 00489c7d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00489c80  52                   push edx
// 00489c81  50                   push eax
// 00489c82  68d1070000           push 0x7d1
// 00489c87  51                   push ecx
// 00489c88  ff15c019a400         call dword ptr [0xa419c0]
// 00489c8e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AddText@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
