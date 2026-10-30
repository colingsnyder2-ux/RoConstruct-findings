// roc 2011-06 0048a1f0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a1f0
//
// 0048a1f0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a1f5  741e                 je 0x48a215
// 0048a1f7  8b442408             mov eax, dword ptr [esp + 8]
// 0048a1fb  8b542404             mov edx, dword ptr [esp + 4]
// 0048a1ff  50                   push eax
// 0048a200  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a203  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a206  52                   push edx
// 0048a207  68c2080000           push 0x8c2
// 0048a20c  50                   push eax
// 0048a20d  ffd1                 call ecx
// 0048a20f  83c410               add esp, 0x10
// 0048a212  c20c00               ret 0xc
// 0048a215  8b542408             mov edx, dword ptr [esp + 8]
// 0048a219  8b442404             mov eax, dword ptr [esp + 4]
// 0048a21d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a220  52                   push edx
// 0048a221  50                   push eax
// 0048a222  68c2080000           push 0x8c2
// 0048a227  51                   push ecx
// 0048a228  ff15c019a400         call dword ptr [0xa419c0]
// 0048a22e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginWidthN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
