// roc 2008-06 004607d0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004607d0
//
// 004607d0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004607d5  741e                 je 0x4607f5
// 004607d7  8b442408             mov eax, dword ptr [esp + 8]
// 004607db  8b542404             mov edx, dword ptr [esp + 4]
// 004607df  50                   push eax
// 004607e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004607e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004607e6  52                   push edx
// 004607e7  6805080000           push 0x805
// 004607ec  50                   push eax
// 004607ed  ffd1                 call ecx
// 004607ef  83c410               add esp, 0x10
// 004607f2  c20c00               ret 0xc
// 004607f5  8b542408             mov edx, dword ptr [esp + 8]
// 004607f9  8b442404             mov eax, dword ptr [esp + 4]
// 004607fd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460800  52                   push edx
// 00460801  50                   push eax
// 00460802  6805080000           push 0x805
// 00460807  51                   push ecx
// 00460808  ff15142e8000         call dword ptr [0x802e14]
// 0046080e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBold@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
