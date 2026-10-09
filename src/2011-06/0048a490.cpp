// roc 2011-06 0048a490  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a490
//
// 0048a490  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a495  741e                 je 0x48a4b5
// 0048a497  8b442408             mov eax, dword ptr [esp + 8]
// 0048a49b  8b542404             mov edx, dword ptr [esp + 4]
// 0048a49f  50                   push eax
// 0048a4a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a4a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a4a6  52                   push edx
// 0048a4a7  6808080000           push 0x808
// 0048a4ac  50                   push eax
// 0048a4ad  ffd1                 call ecx
// 0048a4af  83c410               add esp, 0x10
// 0048a4b2  c20c00               ret 0xc
// 0048a4b5  8b542408             mov edx, dword ptr [esp + 8]
// 0048a4b9  8b442404             mov eax, dword ptr [esp + 4]
// 0048a4bd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a4c0  52                   push edx
// 0048a4c1  50                   push eax
// 0048a4c2  6808080000           push 0x808
// 0048a4c7  51                   push ecx
// 0048a4c8  ff15c019a400         call dword ptr [0xa419c0]
// 0048a4ce  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFont@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
