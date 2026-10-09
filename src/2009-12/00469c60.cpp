// roc 2009-12 00469c60  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469c60
//
// 00469c60  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469c65  741e                 je 0x469c85
// 00469c67  8b442408             mov eax, dword ptr [esp + 8]
// 00469c6b  8b542404             mov edx, dword ptr [esp + 4]
// 00469c6f  50                   push eax
// 00469c70  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469c73  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469c76  52                   push edx
// 00469c77  68fc070000           push 0x7fc
// 00469c7c  50                   push eax
// 00469c7d  ffd1                 call ecx
// 00469c7f  83c410               add esp, 0x10
// 00469c82  c20c00               ret 0xc
// 00469c85  8b542408             mov edx, dword ptr [esp + 8]
// 00469c89  8b442404             mov eax, dword ptr [esp + 4]
// 00469c8d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469c90  52                   push edx
// 00469c91  50                   push eax
// 00469c92  68fc070000           push 0x7fc
// 00469c97  51                   push ecx
// 00469c98  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469c9e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDelete@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
