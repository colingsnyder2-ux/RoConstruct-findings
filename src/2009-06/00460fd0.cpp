// roc 2009-06 00460fd0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460fd0
//
// 00460fd0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460fd5  741e                 je 0x460ff5
// 00460fd7  8b442408             mov eax, dword ptr [esp + 8]
// 00460fdb  8b542404             mov edx, dword ptr [esp + 4]
// 00460fdf  50                   push eax
// 00460fe0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460fe3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460fe6  52                   push edx
// 00460fe7  68f9070000           push 0x7f9
// 00460fec  50                   push eax
// 00460fed  ffd1                 call ecx
// 00460fef  83c410               add esp, 0x10
// 00460ff2  c20c00               ret 0xc
// 00460ff5  8b542408             mov edx, dword ptr [esp + 8]
// 00460ff9  8b442404             mov eax, dword ptr [esp + 4]
// 00460ffd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00461000  52                   push edx
// 00461001  50                   push eax
// 00461002  68f9070000           push 0x7f9
// 00461007  51                   push ecx
// 00461008  ff1590ee8900         call dword ptr [0x89ee90]
// 0046100e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
