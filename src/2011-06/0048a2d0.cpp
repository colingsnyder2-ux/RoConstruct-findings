// roc 2011-06 0048a2d0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a2d0
//
// 0048a2d0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a2d5  741e                 je 0x48a2f5
// 0048a2d7  8b442408             mov eax, dword ptr [esp + 8]
// 0048a2db  8b542404             mov edx, dword ptr [esp + 4]
// 0048a2df  50                   push eax
// 0048a2e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a2e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a2e6  52                   push edx
// 0048a2e7  68c6080000           push 0x8c6
// 0048a2ec  50                   push eax
// 0048a2ed  ffd1                 call ecx
// 0048a2ef  83c410               add esp, 0x10
// 0048a2f2  c20c00               ret 0xc
// 0048a2f5  8b542408             mov edx, dword ptr [esp + 8]
// 0048a2f9  8b442404             mov eax, dword ptr [esp + 4]
// 0048a2fd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a300  52                   push edx
// 0048a301  50                   push eax
// 0048a302  68c6080000           push 0x8c6
// 0048a307  51                   push ecx
// 0048a308  ff15c019a400         call dword ptr [0xa419c0]
// 0048a30e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginSensitiveN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
