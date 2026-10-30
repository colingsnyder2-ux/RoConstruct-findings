// roc 2007-03 0045a810  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a810
//
// 0045a810  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045a815  741e                 je 0x45a835
// 0045a817  8b442408             mov eax, dword ptr [esp + 8]
// 0045a81b  8b542404             mov edx, dword ptr [esp + 4]
// 0045a81f  50                   push eax
// 0045a820  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a823  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a826  52                   push edx
// 0045a827  68a40f0000           push 0xfa4
// 0045a82c  50                   push eax
// 0045a82d  ffd1                 call ecx
// 0045a82f  83c410               add esp, 0x10
// 0045a832  c20c00               ret 0xc
// 0045a835  8b542408             mov edx, dword ptr [esp + 8]
// 0045a839  8b442404             mov eax, dword ptr [esp + 4]
// 0045a83d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045a840  52                   push edx
// 0045a841  50                   push eax
// 0045a842  68a40f0000           push 0xfa4
// 0045a847  51                   push ecx
// 0045a848  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a84e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetProperty@CScintillaCtrl@@QAEXPBD0H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
