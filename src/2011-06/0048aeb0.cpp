// roc 2011-06 0048aeb0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048aeb0
//
// 0048aeb0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048aeb5  741e                 je 0x48aed5
// 0048aeb7  8b442408             mov eax, dword ptr [esp + 8]
// 0048aebb  8b542404             mov edx, dword ptr [esp + 4]
// 0048aebf  50                   push eax
// 0048aec0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048aec3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048aec6  52                   push edx
// 0048aec7  68a50f0000           push 0xfa5
// 0048aecc  50                   push eax
// 0048aecd  ffd1                 call ecx
// 0048aecf  83c410               add esp, 0x10
// 0048aed2  c20c00               ret 0xc
// 0048aed5  8b542408             mov edx, dword ptr [esp + 8]
// 0048aed9  8b442404             mov eax, dword ptr [esp + 4]
// 0048aedd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048aee0  52                   push edx
// 0048aee1  50                   push eax
// 0048aee2  68a50f0000           push 0xfa5
// 0048aee7  51                   push ecx
// 0048aee8  ff15c019a400         call dword ptr [0xa419c0]
// 0048aeee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetKeyWords@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
