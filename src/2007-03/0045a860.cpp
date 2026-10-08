// roc 2007-03 0045a860  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a860
//
// 0045a860  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045a865  741e                 je 0x45a885
// 0045a867  8b442408             mov eax, dword ptr [esp + 8]
// 0045a86b  8b542404             mov edx, dword ptr [esp + 4]
// 0045a86f  50                   push eax
// 0045a870  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a873  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a876  52                   push edx
// 0045a877  68a50f0000           push 0xfa5
// 0045a87c  50                   push eax
// 0045a87d  ffd1                 call ecx
// 0045a87f  83c410               add esp, 0x10
// 0045a882  c20c00               ret 0xc
// 0045a885  8b542408             mov edx, dword ptr [esp + 8]
// 0045a889  8b442404             mov eax, dword ptr [esp + 4]
// 0045a88d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045a890  52                   push edx
// 0045a891  50                   push eax
// 0045a892  68a50f0000           push 0xfa5
// 0045a897  51                   push ecx
// 0045a898  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a89e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetKeyWords@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
