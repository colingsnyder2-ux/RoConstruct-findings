// roc 2009-06 004610c0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004610c0
//
// 004610c0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004610c5  741e                 je 0x4610e5
// 004610c7  8b442408             mov eax, dword ptr [esp + 8]
// 004610cb  8b542404             mov edx, dword ptr [esp + 4]
// 004610cf  50                   push eax
// 004610d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004610d3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004610d6  52                   push edx
// 004610d7  68fc070000           push 0x7fc
// 004610dc  50                   push eax
// 004610dd  ffd1                 call ecx
// 004610df  83c410               add esp, 0x10
// 004610e2  c20c00               ret 0xc
// 004610e5  8b542408             mov edx, dword ptr [esp + 8]
// 004610e9  8b442404             mov eax, dword ptr [esp + 4]
// 004610ed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004610f0  52                   push edx
// 004610f1  50                   push eax
// 004610f2  68fc070000           push 0x7fc
// 004610f7  51                   push ecx
// 004610f8  ff1590ee8900         call dword ptr [0x89ee90]
// 004610fe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDelete@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
