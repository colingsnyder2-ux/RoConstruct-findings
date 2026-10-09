// roc 2011-06 0048a280  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a280
//
// 0048a280  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a285  741e                 je 0x48a2a5
// 0048a287  8b442408             mov eax, dword ptr [esp + 8]
// 0048a28b  8b542404             mov edx, dword ptr [esp + 4]
// 0048a28f  50                   push eax
// 0048a290  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a293  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a296  52                   push edx
// 0048a297  68c4080000           push 0x8c4
// 0048a29c  50                   push eax
// 0048a29d  ffd1                 call ecx
// 0048a29f  83c410               add esp, 0x10
// 0048a2a2  c20c00               ret 0xc
// 0048a2a5  8b542408             mov edx, dword ptr [esp + 8]
// 0048a2a9  8b442404             mov eax, dword ptr [esp + 4]
// 0048a2ad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a2b0  52                   push edx
// 0048a2b1  50                   push eax
// 0048a2b2  68c4080000           push 0x8c4
// 0048a2b7  51                   push ecx
// 0048a2b8  ff15c019a400         call dword ptr [0xa419c0]
// 0048a2be  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginMaskN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
