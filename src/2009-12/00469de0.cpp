// roc 2009-12 00469de0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469de0
//
// 00469de0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469de5  741e                 je 0x469e05
// 00469de7  8b442408             mov eax, dword ptr [esp + 8]
// 00469deb  8b542404             mov edx, dword ptr [esp + 4]
// 00469def  50                   push eax
// 00469df0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469df3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469df6  52                   push edx
// 00469df7  68c2080000           push 0x8c2
// 00469dfc  50                   push eax
// 00469dfd  ffd1                 call ecx
// 00469dff  83c410               add esp, 0x10
// 00469e02  c20c00               ret 0xc
// 00469e05  8b542408             mov edx, dword ptr [esp + 8]
// 00469e09  8b442404             mov eax, dword ptr [esp + 4]
// 00469e0d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469e10  52                   push edx
// 00469e11  50                   push eax
// 00469e12  68c2080000           push 0x8c2
// 00469e17  51                   push ecx
// 00469e18  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469e1e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginWidthN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
