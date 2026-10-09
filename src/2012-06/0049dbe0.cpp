// roc 2012-06 0049dbe0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049dbe0
//
// 0049dbe0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049dbe5  741e                 je 0x49dc05
// 0049dbe7  8b442408             mov eax, dword ptr [esp + 8]
// 0049dbeb  8b542404             mov edx, dword ptr [esp + 4]
// 0049dbef  50                   push eax
// 0049dbf0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049dbf3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049dbf6  52                   push edx
// 0049dbf7  68a50f0000           push 0xfa5
// 0049dbfc  50                   push eax
// 0049dbfd  ffd1                 call ecx
// 0049dbff  83c410               add esp, 0x10
// 0049dc02  c20c00               ret 0xc
// 0049dc05  8b542408             mov edx, dword ptr [esp + 8]
// 0049dc09  8b442404             mov eax, dword ptr [esp + 4]
// 0049dc0d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049dc10  52                   push edx
// 0049dc11  50                   push eax
// 0049dc12  68a50f0000           push 0xfa5
// 0049dc17  51                   push ecx
// 0049dc18  ff15043cb200         call dword ptr [0xb23c04]
// 0049dc1e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetKeyWords@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
