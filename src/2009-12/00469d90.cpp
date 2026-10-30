// roc 2009-12 00469d90  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469d90
//
// 00469d90  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469d95  741e                 je 0x469db5
// 00469d97  8b442408             mov eax, dword ptr [esp + 8]
// 00469d9b  8b542404             mov edx, dword ptr [esp + 4]
// 00469d9f  50                   push eax
// 00469da0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469da3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469da6  52                   push edx
// 00469da7  68c0080000           push 0x8c0
// 00469dac  50                   push eax
// 00469dad  ffd1                 call ecx
// 00469daf  83c410               add esp, 0x10
// 00469db2  c20c00               ret 0xc
// 00469db5  8b542408             mov edx, dword ptr [esp + 8]
// 00469db9  8b442404             mov eax, dword ptr [esp + 4]
// 00469dbd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469dc0  52                   push edx
// 00469dc1  50                   push eax
// 00469dc2  68c0080000           push 0x8c0
// 00469dc7  51                   push ecx
// 00469dc8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469dce  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginTypeN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
