// roc 2009-12 00469bc0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469bc0
//
// 00469bc0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469bc5  741e                 je 0x469be5
// 00469bc7  8b442408             mov eax, dword ptr [esp + 8]
// 00469bcb  8b542404             mov edx, dword ptr [esp + 4]
// 00469bcf  50                   push eax
// 00469bd0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469bd3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469bd6  52                   push edx
// 00469bd7  68fa070000           push 0x7fa
// 00469bdc  50                   push eax
// 00469bdd  ffd1                 call ecx
// 00469bdf  83c410               add esp, 0x10
// 00469be2  c20c00               ret 0xc
// 00469be5  8b542408             mov edx, dword ptr [esp + 8]
// 00469be9  8b442404             mov eax, dword ptr [esp + 4]
// 00469bed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469bf0  52                   push edx
// 00469bf1  50                   push eax
// 00469bf2  68fa070000           push 0x7fa
// 00469bf7  51                   push ecx
// 00469bf8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469bfe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
