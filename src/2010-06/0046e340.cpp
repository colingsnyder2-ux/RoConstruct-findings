// roc 2010-06 0046e340  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0046e340
//
// 0046e340  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0046e345  741e                 je 0x46e365
// 0046e347  8b442408             mov eax, dword ptr [esp + 8]
// 0046e34b  8b542404             mov edx, dword ptr [esp + 4]
// 0046e34f  50                   push eax
// 0046e350  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0046e353  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0046e356  52                   push edx
// 0046e357  6898080000           push 0x898
// 0046e35c  50                   push eax
// 0046e35d  ffd1                 call ecx
// 0046e35f  83c410               add esp, 0x10
// 0046e362  c20c00               ret 0xc
// 0046e365  8b542408             mov edx, dword ptr [esp + 8]
// 0046e369  8b442404             mov eax, dword ptr [esp + 4]
// 0046e36d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0046e370  52                   push edx
// 0046e371  50                   push eax
// 0046e372  6898080000           push 0x898
// 0046e377  51                   push ecx
// 0046e378  ff1554ba9e00         call dword ptr [0x9eba54]
// 0046e37e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipShow@CScintillaCtrl@@QAEXJPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
