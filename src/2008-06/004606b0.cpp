// roc 2008-06 004606b0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004606b0
//
// 004606b0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004606b5  741e                 je 0x4606d5
// 004606b7  8b442408             mov eax, dword ptr [esp + 8]
// 004606bb  8b542404             mov edx, dword ptr [esp + 4]
// 004606bf  50                   push eax
// 004606c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004606c3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004606c6  52                   push edx
// 004606c7  68c6080000           push 0x8c6
// 004606cc  50                   push eax
// 004606cd  ffd1                 call ecx
// 004606cf  83c410               add esp, 0x10
// 004606d2  c20c00               ret 0xc
// 004606d5  8b542408             mov edx, dword ptr [esp + 8]
// 004606d9  8b442404             mov eax, dword ptr [esp + 4]
// 004606dd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004606e0  52                   push edx
// 004606e1  50                   push eax
// 004606e2  68c6080000           push 0x8c6
// 004606e7  51                   push ecx
// 004606e8  ff15142e8000         call dword ptr [0x802e14]
// 004606ee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginSensitiveN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
