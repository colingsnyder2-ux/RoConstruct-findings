// roc 2009-12 00469b20  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469b20
//
// 00469b20  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469b25  741e                 je 0x469b45
// 00469b27  8b442408             mov eax, dword ptr [esp + 8]
// 00469b2b  8b542404             mov edx, dword ptr [esp + 4]
// 00469b2f  50                   push eax
// 00469b30  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469b33  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469b36  52                   push edx
// 00469b37  68f8070000           push 0x7f8
// 00469b3c  50                   push eax
// 00469b3d  ffd1                 call ecx
// 00469b3f  83c410               add esp, 0x10
// 00469b42  c20c00               ret 0xc
// 00469b45  8b542408             mov edx, dword ptr [esp + 8]
// 00469b49  8b442404             mov eax, dword ptr [esp + 4]
// 00469b4d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469b50  52                   push edx
// 00469b51  50                   push eax
// 00469b52  68f8070000           push 0x7f8
// 00469b57  51                   push ecx
// 00469b58  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469b5e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDefine@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
