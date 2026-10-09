// roc 2012-06 0049c980  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049c980
//
// 0049c980  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049c985  741e                 je 0x49c9a5
// 0049c987  8b442408             mov eax, dword ptr [esp + 8]
// 0049c98b  8b542404             mov edx, dword ptr [esp + 4]
// 0049c98f  50                   push eax
// 0049c990  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049c993  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049c996  52                   push edx
// 0049c997  68d1070000           push 0x7d1
// 0049c99c  50                   push eax
// 0049c99d  ffd1                 call ecx
// 0049c99f  83c410               add esp, 0x10
// 0049c9a2  c20c00               ret 0xc
// 0049c9a5  8b542408             mov edx, dword ptr [esp + 8]
// 0049c9a9  8b442404             mov eax, dword ptr [esp + 4]
// 0049c9ad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049c9b0  52                   push edx
// 0049c9b1  50                   push eax
// 0049c9b2  68d1070000           push 0x7d1
// 0049c9b7  51                   push ecx
// 0049c9b8  ff15043cb200         call dword ptr [0xb23c04]
// 0049c9be  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AddText@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
