// roc 2008-06 00460580  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460580
//
// 00460580  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460585  741e                 je 0x4605a5
// 00460587  8b442408             mov eax, dword ptr [esp + 8]
// 0046058b  8b542404             mov edx, dword ptr [esp + 4]
// 0046058f  50                   push eax
// 00460590  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460593  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460596  52                   push edx
// 00460597  68c0080000           push 0x8c0
// 0046059c  50                   push eax
// 0046059d  ffd1                 call ecx
// 0046059f  83c410               add esp, 0x10
// 004605a2  c20c00               ret 0xc
// 004605a5  8b542408             mov edx, dword ptr [esp + 8]
// 004605a9  8b442404             mov eax, dword ptr [esp + 4]
// 004605ad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004605b0  52                   push edx
// 004605b1  50                   push eax
// 004605b2  68c0080000           push 0x8c0
// 004605b7  51                   push ecx
// 004605b8  ff15142e8000         call dword ptr [0x802e14]
// 004605be  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginTypeN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
