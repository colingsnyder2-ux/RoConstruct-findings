// roc 2009-12 00469c10  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469c10
//
// 00469c10  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469c15  741e                 je 0x469c35
// 00469c17  8b442408             mov eax, dword ptr [esp + 8]
// 00469c1b  8b542404             mov edx, dword ptr [esp + 4]
// 00469c1f  50                   push eax
// 00469c20  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469c23  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469c26  52                   push edx
// 00469c27  68fb070000           push 0x7fb
// 00469c2c  50                   push eax
// 00469c2d  ffd1                 call ecx
// 00469c2f  83c410               add esp, 0x10
// 00469c32  c20c00               ret 0xc
// 00469c35  8b542408             mov edx, dword ptr [esp + 8]
// 00469c39  8b442404             mov eax, dword ptr [esp + 4]
// 00469c3d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469c40  52                   push edx
// 00469c41  50                   push eax
// 00469c42  68fb070000           push 0x7fb
// 00469c47  51                   push ecx
// 00469c48  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469c4e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerAdd@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
