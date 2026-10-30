// roc 2012-06 0049d410  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d410
//
// 0049d410  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d415  741e                 je 0x49d435
// 0049d417  8b442408             mov eax, dword ptr [esp + 8]
// 0049d41b  8b542404             mov edx, dword ptr [esp + 4]
// 0049d41f  50                   push eax
// 0049d420  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d423  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d426  52                   push edx
// 0049d427  6870080000           push 0x870
// 0049d42c  50                   push eax
// 0049d42d  ffd1                 call ecx
// 0049d42f  83c410               add esp, 0x10
// 0049d432  c20c00               ret 0xc
// 0049d435  8b542408             mov edx, dword ptr [esp + 8]
// 0049d439  8b442404             mov eax, dword ptr [esp + 4]
// 0049d43d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d440  52                   push edx
// 0049d441  50                   push eax
// 0049d442  6870080000           push 0x870
// 0049d447  51                   push ecx
// 0049d448  ff15043cb200         call dword ptr [0xb23c04]
// 0049d44e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSel@CScintillaCtrl@@QAEXJJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
