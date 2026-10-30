// roc 2009-12 00469b70  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469b70
//
// 00469b70  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469b75  741e                 je 0x469b95
// 00469b77  8b442408             mov eax, dword ptr [esp + 8]
// 00469b7b  8b542404             mov edx, dword ptr [esp + 4]
// 00469b7f  50                   push eax
// 00469b80  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469b83  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469b86  52                   push edx
// 00469b87  68f9070000           push 0x7f9
// 00469b8c  50                   push eax
// 00469b8d  ffd1                 call ecx
// 00469b8f  83c410               add esp, 0x10
// 00469b92  c20c00               ret 0xc
// 00469b95  8b542408             mov edx, dword ptr [esp + 8]
// 00469b99  8b442404             mov eax, dword ptr [esp + 4]
// 00469b9d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469ba0  52                   push edx
// 00469ba1  50                   push eax
// 00469ba2  68f9070000           push 0x7f9
// 00469ba7  51                   push ecx
// 00469ba8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469bae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
