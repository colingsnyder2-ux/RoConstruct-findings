// roc 2011-06 00489f80  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489f80
//
// 00489f80  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00489f85  741e                 je 0x489fa5
// 00489f87  8b442408             mov eax, dword ptr [esp + 8]
// 00489f8b  8b542404             mov edx, dword ptr [esp + 4]
// 00489f8f  50                   push eax
// 00489f90  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00489f93  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00489f96  52                   push edx
// 00489f97  68f9070000           push 0x7f9
// 00489f9c  50                   push eax
// 00489f9d  ffd1                 call ecx
// 00489f9f  83c410               add esp, 0x10
// 00489fa2  c20c00               ret 0xc
// 00489fa5  8b542408             mov edx, dword ptr [esp + 8]
// 00489fa9  8b442404             mov eax, dword ptr [esp + 4]
// 00489fad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00489fb0  52                   push edx
// 00489fb1  50                   push eax
// 00489fb2  68f9070000           push 0x7f9
// 00489fb7  51                   push ecx
// 00489fb8  ff15c019a400         call dword ptr [0xa419c0]
// 00489fbe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
