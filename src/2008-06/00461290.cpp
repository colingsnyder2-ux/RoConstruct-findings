// roc 2008-06 00461290  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00461290
//
// 00461290  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00461295  741e                 je 0x4612b5
// 00461297  8b442408             mov eax, dword ptr [esp + 8]
// 0046129b  8b542404             mov edx, dword ptr [esp + 4]
// 0046129f  50                   push eax
// 004612a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004612a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004612a6  52                   push edx
// 004612a7  68a50f0000           push 0xfa5
// 004612ac  50                   push eax
// 004612ad  ffd1                 call ecx
// 004612af  83c410               add esp, 0x10
// 004612b2  c20c00               ret 0xc
// 004612b5  8b542408             mov edx, dword ptr [esp + 8]
// 004612b9  8b442404             mov eax, dword ptr [esp + 4]
// 004612bd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004612c0  52                   push edx
// 004612c1  50                   push eax
// 004612c2  68a50f0000           push 0xfa5
// 004612c7  51                   push ecx
// 004612c8  ff15142e8000         call dword ptr [0x802e14]
// 004612ce  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetKeyWords@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
