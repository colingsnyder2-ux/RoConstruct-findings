// roc 2012-06 0049d1c0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d1c0
//
// 0049d1c0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d1c5  741e                 je 0x49d1e5
// 0049d1c7  8b442408             mov eax, dword ptr [esp + 8]
// 0049d1cb  8b542404             mov edx, dword ptr [esp + 4]
// 0049d1cf  50                   push eax
// 0049d1d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d1d3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d1d6  52                   push edx
// 0049d1d7  6808080000           push 0x808
// 0049d1dc  50                   push eax
// 0049d1dd  ffd1                 call ecx
// 0049d1df  83c410               add esp, 0x10
// 0049d1e2  c20c00               ret 0xc
// 0049d1e5  8b542408             mov edx, dword ptr [esp + 8]
// 0049d1e9  8b442404             mov eax, dword ptr [esp + 4]
// 0049d1ed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d1f0  52                   push edx
// 0049d1f1  50                   push eax
// 0049d1f2  6808080000           push 0x808
// 0049d1f7  51                   push ecx
// 0049d1f8  ff15043cb200         call dword ptr [0xb23c04]
// 0049d1fe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFont@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
