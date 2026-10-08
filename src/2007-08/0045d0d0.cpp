// roc 2007-08 0045d0d0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045d0d0
//
// 0045d0d0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045d0d5  741e                 je 0x45d0f5
// 0045d0d7  8b442408             mov eax, dword ptr [esp + 8]
// 0045d0db  8b542404             mov edx, dword ptr [esp + 4]
// 0045d0df  50                   push eax
// 0045d0e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045d0e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045d0e6  52                   push edx
// 0045d0e7  68a50f0000           push 0xfa5
// 0045d0ec  50                   push eax
// 0045d0ed  ffd1                 call ecx
// 0045d0ef  83c410               add esp, 0x10
// 0045d0f2  c20c00               ret 0xc
// 0045d0f5  8b542408             mov edx, dword ptr [esp + 8]
// 0045d0f9  8b442404             mov eax, dword ptr [esp + 4]
// 0045d0fd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045d100  52                   push edx
// 0045d101  50                   push eax
// 0045d102  68a50f0000           push 0xfa5
// 0045d107  51                   push ecx
// 0045d108  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045d10e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetKeyWords@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
