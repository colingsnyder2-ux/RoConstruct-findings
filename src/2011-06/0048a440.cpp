// roc 2011-06 0048a440  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a440
//
// 0048a440  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a445  741e                 je 0x48a465
// 0048a447  8b442408             mov eax, dword ptr [esp + 8]
// 0048a44b  8b542404             mov edx, dword ptr [esp + 4]
// 0048a44f  50                   push eax
// 0048a450  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a453  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a456  52                   push edx
// 0048a457  6807080000           push 0x807
// 0048a45c  50                   push eax
// 0048a45d  ffd1                 call ecx
// 0048a45f  83c410               add esp, 0x10
// 0048a462  c20c00               ret 0xc
// 0048a465  8b542408             mov edx, dword ptr [esp + 8]
// 0048a469  8b442404             mov eax, dword ptr [esp + 4]
// 0048a46d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a470  52                   push edx
// 0048a471  50                   push eax
// 0048a472  6807080000           push 0x807
// 0048a477  51                   push ecx
// 0048a478  ff15c019a400         call dword ptr [0xa419c0]
// 0048a47e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetSize@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
