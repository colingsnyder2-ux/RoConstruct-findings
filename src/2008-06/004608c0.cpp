// roc 2008-06 004608c0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004608c0
//
// 004608c0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004608c5  741e                 je 0x4608e5
// 004608c7  8b442408             mov eax, dword ptr [esp + 8]
// 004608cb  8b542404             mov edx, dword ptr [esp + 4]
// 004608cf  50                   push eax
// 004608d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004608d3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004608d6  52                   push edx
// 004608d7  6834080000           push 0x834
// 004608dc  50                   push eax
// 004608dd  ffd1                 call ecx
// 004608df  83c410               add esp, 0x10
// 004608e2  c20c00               ret 0xc
// 004608e5  8b542408             mov edx, dword ptr [esp + 8]
// 004608e9  8b442404             mov eax, dword ptr [esp + 4]
// 004608ed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004608f0  52                   push edx
// 004608f1  50                   push eax
// 004608f2  6834080000           push 0x834
// 004608f7  51                   push ecx
// 004608f8  ff15142e8000         call dword ptr [0x802e14]
// 004608fe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCShow@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
