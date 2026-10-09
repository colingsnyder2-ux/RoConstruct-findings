// roc 2009-12 00469f40  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469f40
//
// 00469f40  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469f45  741e                 je 0x469f65
// 00469f47  8b442408             mov eax, dword ptr [esp + 8]
// 00469f4b  8b542404             mov edx, dword ptr [esp + 4]
// 00469f4f  50                   push eax
// 00469f50  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469f53  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469f56  52                   push edx
// 00469f57  6803080000           push 0x803
// 00469f5c  50                   push eax
// 00469f5d  ffd1                 call ecx
// 00469f5f  83c410               add esp, 0x10
// 00469f62  c20c00               ret 0xc
// 00469f65  8b542408             mov edx, dword ptr [esp + 8]
// 00469f69  8b442404             mov eax, dword ptr [esp + 4]
// 00469f6d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469f70  52                   push edx
// 00469f71  50                   push eax
// 00469f72  6803080000           push 0x803
// 00469f77  51                   push ecx
// 00469f78  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469f7e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
