// roc 2009-12 00469d40  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469d40
//
// 00469d40  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469d45  741e                 je 0x469d65
// 00469d47  8b442408             mov eax, dword ptr [esp + 8]
// 00469d4b  8b542404             mov edx, dword ptr [esp + 4]
// 00469d4f  50                   push eax
// 00469d50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469d53  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469d56  52                   push edx
// 00469d57  6800080000           push 0x800
// 00469d5c  50                   push eax
// 00469d5d  ffd1                 call ecx
// 00469d5f  83c410               add esp, 0x10
// 00469d62  c20c00               ret 0xc
// 00469d65  8b542408             mov edx, dword ptr [esp + 8]
// 00469d69  8b442404             mov eax, dword ptr [esp + 4]
// 00469d6d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469d70  52                   push edx
// 00469d71  50                   push eax
// 00469d72  6800080000           push 0x800
// 00469d77  51                   push ecx
// 00469d78  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469d7e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerPrevious@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
