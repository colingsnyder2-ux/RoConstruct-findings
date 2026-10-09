// roc 2009-12 00469cf0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469cf0
//
// 00469cf0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469cf5  741e                 je 0x469d15
// 00469cf7  8b442408             mov eax, dword ptr [esp + 8]
// 00469cfb  8b542404             mov edx, dword ptr [esp + 4]
// 00469cff  50                   push eax
// 00469d00  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469d03  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469d06  52                   push edx
// 00469d07  68ff070000           push 0x7ff
// 00469d0c  50                   push eax
// 00469d0d  ffd1                 call ecx
// 00469d0f  83c410               add esp, 0x10
// 00469d12  c20c00               ret 0xc
// 00469d15  8b542408             mov edx, dword ptr [esp + 8]
// 00469d19  8b442404             mov eax, dword ptr [esp + 4]
// 00469d1d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469d20  52                   push edx
// 00469d21  50                   push eax
// 00469d22  68ff070000           push 0x7ff
// 00469d27  51                   push ecx
// 00469d28  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469d2e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerNext@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
