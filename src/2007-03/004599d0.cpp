// roc 2007-03 004599d0  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004599d0
//
// 004599d0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004599d5  741e                 je 0x4599f5
// 004599d7  8b442408             mov eax, dword ptr [esp + 8]
// 004599db  8b542404             mov edx, dword ptr [esp + 4]
// 004599df  50                   push eax
// 004599e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004599e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004599e6  52                   push edx
// 004599e7  68fb070000           push 0x7fb
// 004599ec  50                   push eax
// 004599ed  ffd1                 call ecx
// 004599ef  83c410               add esp, 0x10
// 004599f2  c20c00               ret 0xc
// 004599f5  8b542408             mov edx, dword ptr [esp + 8]
// 004599f9  8b442404             mov eax, dword ptr [esp + 4]
// 004599fd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459a00  52                   push edx
// 00459a01  50                   push eax
// 00459a02  68fb070000           push 0x7fb
// 00459a07  51                   push ecx
// 00459a08  ff1550ee7700         call dword ptr [0x77ee50]
// 00459a0e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerAdd@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
