// roc 2011-06 00489fd0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489fd0
//
// 00489fd0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00489fd5  741e                 je 0x489ff5
// 00489fd7  8b442408             mov eax, dword ptr [esp + 8]
// 00489fdb  8b542404             mov edx, dword ptr [esp + 4]
// 00489fdf  50                   push eax
// 00489fe0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00489fe3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00489fe6  52                   push edx
// 00489fe7  68fa070000           push 0x7fa
// 00489fec  50                   push eax
// 00489fed  ffd1                 call ecx
// 00489fef  83c410               add esp, 0x10
// 00489ff2  c20c00               ret 0xc
// 00489ff5  8b542408             mov edx, dword ptr [esp + 8]
// 00489ff9  8b442404             mov eax, dword ptr [esp + 4]
// 00489ffd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a000  52                   push edx
// 0048a001  50                   push eax
// 0048a002  68fa070000           push 0x7fa
// 0048a007  51                   push ecx
// 0048a008  ff15c019a400         call dword ptr [0xa419c0]
// 0048a00e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
