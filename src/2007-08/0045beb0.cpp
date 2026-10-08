// roc 2007-08 0045beb0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045beb0
//
// 0045beb0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045beb5  741e                 je 0x45bed5
// 0045beb7  8b442408             mov eax, dword ptr [esp + 8]
// 0045bebb  8b542404             mov edx, dword ptr [esp + 4]
// 0045bebf  50                   push eax
// 0045bec0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045bec3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045bec6  52                   push edx
// 0045bec7  68d1070000           push 0x7d1
// 0045becc  50                   push eax
// 0045becd  ffd1                 call ecx
// 0045becf  83c410               add esp, 0x10
// 0045bed2  c20c00               ret 0xc
// 0045bed5  8b542408             mov edx, dword ptr [esp + 8]
// 0045bed9  8b442404             mov eax, dword ptr [esp + 4]
// 0045bedd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045bee0  52                   push edx
// 0045bee1  50                   push eax
// 0045bee2  68d1070000           push 0x7d1
// 0045bee7  51                   push ecx
// 0045bee8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045beee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AddText@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
