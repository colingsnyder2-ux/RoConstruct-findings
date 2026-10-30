// roc 2007-03 00459fc0  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459fc0
//
// 00459fc0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459fc5  741e                 je 0x459fe5
// 00459fc7  8b442408             mov eax, dword ptr [esp + 8]
// 00459fcb  8b542404             mov edx, dword ptr [esp + 4]
// 00459fcf  50                   push eax
// 00459fd0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459fd3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459fd6  52                   push edx
// 00459fd7  6866080000           push 0x866
// 00459fdc  50                   push eax
// 00459fdd  ffd1                 call ecx
// 00459fdf  83c410               add esp, 0x10
// 00459fe2  c20c00               ret 0xc
// 00459fe5  8b542408             mov edx, dword ptr [esp + 8]
// 00459fe9  8b442404             mov eax, dword ptr [esp + 4]
// 00459fed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459ff0  52                   push edx
// 00459ff1  50                   push eax
// 00459ff2  6866080000           push 0x866
// 00459ff7  51                   push ecx
// 00459ff8  ff1550ee7700         call dword ptr [0x77ee50]
// 00459ffe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FindTextA@CScintillaCtrl@@QAEJHPAUTextToFind@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
