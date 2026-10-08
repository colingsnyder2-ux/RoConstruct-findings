// roc 2008-06 004603b0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004603b0
//
// 004603b0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004603b5  741e                 je 0x4603d5
// 004603b7  8b442408             mov eax, dword ptr [esp + 8]
// 004603bb  8b542404             mov edx, dword ptr [esp + 4]
// 004603bf  50                   push eax
// 004603c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004603c3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004603c6  52                   push edx
// 004603c7  68fa070000           push 0x7fa
// 004603cc  50                   push eax
// 004603cd  ffd1                 call ecx
// 004603cf  83c410               add esp, 0x10
// 004603d2  c20c00               ret 0xc
// 004603d5  8b542408             mov edx, dword ptr [esp + 8]
// 004603d9  8b442404             mov eax, dword ptr [esp + 4]
// 004603dd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004603e0  52                   push edx
// 004603e1  50                   push eax
// 004603e2  68fa070000           push 0x7fa
// 004603e7  51                   push ecx
// 004603e8  ff15142e8000         call dword ptr [0x802e14]
// 004603ee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
