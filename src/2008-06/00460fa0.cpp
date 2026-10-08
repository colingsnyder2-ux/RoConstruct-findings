// roc 2008-06 00460fa0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460fa0
//
// 00460fa0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460fa5  741e                 je 0x460fc5
// 00460fa7  8b442408             mov eax, dword ptr [esp + 8]
// 00460fab  8b542404             mov edx, dword ptr [esp + 4]
// 00460faf  50                   push eax
// 00460fb0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460fb3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460fb6  52                   push edx
// 00460fb7  6895080000           push 0x895
// 00460fbc  50                   push eax
// 00460fbd  ffd1                 call ecx
// 00460fbf  83c410               add esp, 0x10
// 00460fc2  c20c00               ret 0xc
// 00460fc5  8b542408             mov edx, dword ptr [esp + 8]
// 00460fc9  8b442404             mov eax, dword ptr [esp + 4]
// 00460fcd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460fd0  52                   push edx
// 00460fd1  50                   push eax
// 00460fd2  6895080000           push 0x895
// 00460fd7  51                   push ecx
// 00460fd8  ff15142e8000         call dword ptr [0x802e14]
// 00460fde  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SearchInTarget@CScintillaCtrl@@QAEHHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
