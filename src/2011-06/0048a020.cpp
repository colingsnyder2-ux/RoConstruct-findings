// roc 2011-06 0048a020  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a020
//
// 0048a020  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a025  741e                 je 0x48a045
// 0048a027  8b442408             mov eax, dword ptr [esp + 8]
// 0048a02b  8b542404             mov edx, dword ptr [esp + 4]
// 0048a02f  50                   push eax
// 0048a030  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a033  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a036  52                   push edx
// 0048a037  68fb070000           push 0x7fb
// 0048a03c  50                   push eax
// 0048a03d  ffd1                 call ecx
// 0048a03f  83c410               add esp, 0x10
// 0048a042  c20c00               ret 0xc
// 0048a045  8b542408             mov edx, dword ptr [esp + 8]
// 0048a049  8b442404             mov eax, dword ptr [esp + 4]
// 0048a04d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a050  52                   push edx
// 0048a051  50                   push eax
// 0048a052  68fb070000           push 0x7fb
// 0048a057  51                   push ecx
// 0048a058  ff15c019a400         call dword ptr [0xa419c0]
// 0048a05e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerAdd@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
