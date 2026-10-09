// roc 2011-06 0048a150  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a150
//
// 0048a150  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a155  741e                 je 0x48a175
// 0048a157  8b442408             mov eax, dword ptr [esp + 8]
// 0048a15b  8b542404             mov edx, dword ptr [esp + 4]
// 0048a15f  50                   push eax
// 0048a160  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a163  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a166  52                   push edx
// 0048a167  6800080000           push 0x800
// 0048a16c  50                   push eax
// 0048a16d  ffd1                 call ecx
// 0048a16f  83c410               add esp, 0x10
// 0048a172  c20c00               ret 0xc
// 0048a175  8b542408             mov edx, dword ptr [esp + 8]
// 0048a179  8b442404             mov eax, dword ptr [esp + 4]
// 0048a17d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a180  52                   push edx
// 0048a181  50                   push eax
// 0048a182  6800080000           push 0x800
// 0048a187  51                   push ecx
// 0048a188  ff15c019a400         call dword ptr [0xa419c0]
// 0048a18e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerPrevious@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
