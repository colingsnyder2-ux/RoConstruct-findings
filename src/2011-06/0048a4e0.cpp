// roc 2011-06 0048a4e0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a4e0
//
// 0048a4e0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a4e5  741e                 je 0x48a505
// 0048a4e7  8b442408             mov eax, dword ptr [esp + 8]
// 0048a4eb  8b542404             mov edx, dword ptr [esp + 4]
// 0048a4ef  50                   push eax
// 0048a4f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a4f3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a4f6  52                   push edx
// 0048a4f7  6834080000           push 0x834
// 0048a4fc  50                   push eax
// 0048a4fd  ffd1                 call ecx
// 0048a4ff  83c410               add esp, 0x10
// 0048a502  c20c00               ret 0xc
// 0048a505  8b542408             mov edx, dword ptr [esp + 8]
// 0048a509  8b442404             mov eax, dword ptr [esp + 4]
// 0048a50d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a510  52                   push edx
// 0048a511  50                   push eax
// 0048a512  6834080000           push 0x834
// 0048a517  51                   push ecx
// 0048a518  ff15c019a400         call dword ptr [0xa419c0]
// 0048a51e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCShow@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
