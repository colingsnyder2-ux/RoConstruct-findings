// roc 2007-03 00459b00  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459b00
//
// 00459b00  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459b05  741e                 je 0x459b25
// 00459b07  8b442408             mov eax, dword ptr [esp + 8]
// 00459b0b  8b542404             mov edx, dword ptr [esp + 4]
// 00459b0f  50                   push eax
// 00459b10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459b13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459b16  52                   push edx
// 00459b17  6800080000           push 0x800
// 00459b1c  50                   push eax
// 00459b1d  ffd1                 call ecx
// 00459b1f  83c410               add esp, 0x10
// 00459b22  c20c00               ret 0xc
// 00459b25  8b542408             mov edx, dword ptr [esp + 8]
// 00459b29  8b442404             mov eax, dword ptr [esp + 4]
// 00459b2d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459b30  52                   push edx
// 00459b31  50                   push eax
// 00459b32  6800080000           push 0x800
// 00459b37  51                   push ecx
// 00459b38  ff1550ee7700         call dword ptr [0x77ee50]
// 00459b3e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerPrevious@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
