// roc 2009-12 00469ec0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469ec0
//
// 00469ec0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469ec5  741e                 je 0x469ee5
// 00469ec7  8b442408             mov eax, dword ptr [esp + 8]
// 00469ecb  8b542404             mov edx, dword ptr [esp + 4]
// 00469ecf  50                   push eax
// 00469ed0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469ed3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469ed6  52                   push edx
// 00469ed7  68c6080000           push 0x8c6
// 00469edc  50                   push eax
// 00469edd  ffd1                 call ecx
// 00469edf  83c410               add esp, 0x10
// 00469ee2  c20c00               ret 0xc
// 00469ee5  8b542408             mov edx, dword ptr [esp + 8]
// 00469ee9  8b442404             mov eax, dword ptr [esp + 4]
// 00469eed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469ef0  52                   push edx
// 00469ef1  50                   push eax
// 00469ef2  68c6080000           push 0x8c6
// 00469ef7  51                   push ecx
// 00469ef8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469efe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginSensitiveN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
