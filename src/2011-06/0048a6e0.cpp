// roc 2011-06 0048a6e0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a6e0
//
// 0048a6e0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a6e5  741e                 je 0x48a705
// 0048a6e7  8b442408             mov eax, dword ptr [esp + 8]
// 0048a6eb  8b542404             mov edx, dword ptr [esp + 4]
// 0048a6ef  50                   push eax
// 0048a6f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a6f3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a6f6  52                   push edx
// 0048a6f7  6870080000           push 0x870
// 0048a6fc  50                   push eax
// 0048a6fd  ffd1                 call ecx
// 0048a6ff  83c410               add esp, 0x10
// 0048a702  c20c00               ret 0xc
// 0048a705  8b542408             mov edx, dword ptr [esp + 8]
// 0048a709  8b442404             mov eax, dword ptr [esp + 4]
// 0048a70d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a710  52                   push edx
// 0048a711  50                   push eax
// 0048a712  6870080000           push 0x870
// 0048a717  51                   push ecx
// 0048a718  ff15c019a400         call dword ptr [0xa419c0]
// 0048a71e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSel@CScintillaCtrl@@QAEXJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
