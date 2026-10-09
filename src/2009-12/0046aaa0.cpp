// roc 2009-12 0046aaa0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046aaa0
//
// 0046aaa0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046aaa5  741e                 je 0x46aac5
// 0046aaa7  8b442408             mov eax, dword ptr [esp + 8]
// 0046aaab  8b542404             mov edx, dword ptr [esp + 4]
// 0046aaaf  50                   push eax
// 0046aab0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046aab3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046aab6  52                   push edx
// 0046aab7  68a50f0000           push 0xfa5
// 0046aabc  50                   push eax
// 0046aabd  ffd1                 call ecx
// 0046aabf  83c410               add esp, 0x10
// 0046aac2  c20c00               ret 0xc
// 0046aac5  8b542408             mov edx, dword ptr [esp + 8]
// 0046aac9  8b442404             mov eax, dword ptr [esp + 4]
// 0046aacd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046aad0  52                   push edx
// 0046aad1  50                   push eax
// 0046aad2  68a50f0000           push 0xfa5
// 0046aad7  51                   push ecx
// 0046aad8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0046aade  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetKeyWords@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
