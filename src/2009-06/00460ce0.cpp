// roc 2009-06 00460ce0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460ce0
//
// 00460ce0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460ce5  741e                 je 0x460d05
// 00460ce7  8b442408             mov eax, dword ptr [esp + 8]
// 00460ceb  8b542404             mov edx, dword ptr [esp + 4]
// 00460cef  50                   push eax
// 00460cf0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460cf3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460cf6  52                   push edx
// 00460cf7  68d1070000           push 0x7d1
// 00460cfc  50                   push eax
// 00460cfd  ffd1                 call ecx
// 00460cff  83c410               add esp, 0x10
// 00460d02  c20c00               ret 0xc
// 00460d05  8b542408             mov edx, dword ptr [esp + 8]
// 00460d09  8b442404             mov eax, dword ptr [esp + 4]
// 00460d0d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460d10  52                   push edx
// 00460d11  50                   push eax
// 00460d12  68d1070000           push 0x7d1
// 00460d17  51                   push ecx
// 00460d18  ff1590ee8900         call dword ptr [0x89ee90]
// 00460d1e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AddText@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
