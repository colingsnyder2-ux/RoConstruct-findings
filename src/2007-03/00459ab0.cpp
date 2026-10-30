// roc 2007-03 00459ab0  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459ab0
//
// 00459ab0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459ab5  741e                 je 0x459ad5
// 00459ab7  8b442408             mov eax, dword ptr [esp + 8]
// 00459abb  8b542404             mov edx, dword ptr [esp + 4]
// 00459abf  50                   push eax
// 00459ac0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459ac3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459ac6  52                   push edx
// 00459ac7  68ff070000           push 0x7ff
// 00459acc  50                   push eax
// 00459acd  ffd1                 call ecx
// 00459acf  83c410               add esp, 0x10
// 00459ad2  c20c00               ret 0xc
// 00459ad5  8b542408             mov edx, dword ptr [esp + 8]
// 00459ad9  8b442404             mov eax, dword ptr [esp + 4]
// 00459add  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459ae0  52                   push edx
// 00459ae1  50                   push eax
// 00459ae2  68ff070000           push 0x7ff
// 00459ae7  51                   push ecx
// 00459ae8  ff1550ee7700         call dword ptr [0x77ee50]
// 00459aee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerNext@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
