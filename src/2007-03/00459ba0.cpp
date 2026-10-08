// roc 2007-03 00459ba0  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459ba0
//
// 00459ba0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459ba5  741e                 je 0x459bc5
// 00459ba7  8b442408             mov eax, dword ptr [esp + 8]
// 00459bab  8b542404             mov edx, dword ptr [esp + 4]
// 00459baf  50                   push eax
// 00459bb0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459bb3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459bb6  52                   push edx
// 00459bb7  68c2080000           push 0x8c2
// 00459bbc  50                   push eax
// 00459bbd  ffd1                 call ecx
// 00459bbf  83c410               add esp, 0x10
// 00459bc2  c20c00               ret 0xc
// 00459bc5  8b542408             mov edx, dword ptr [esp + 8]
// 00459bc9  8b442404             mov eax, dword ptr [esp + 4]
// 00459bcd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459bd0  52                   push edx
// 00459bd1  50                   push eax
// 00459bd2  68c2080000           push 0x8c2
// 00459bd7  51                   push ecx
// 00459bd8  ff1550ee7700         call dword ptr [0x77ee50]
// 00459bde  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginWidthN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
