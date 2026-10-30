// roc 2012-06 0049d210  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d210
//
// 0049d210  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d215  741e                 je 0x49d235
// 0049d217  8b442408             mov eax, dword ptr [esp + 8]
// 0049d21b  8b542404             mov edx, dword ptr [esp + 4]
// 0049d21f  50                   push eax
// 0049d220  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d223  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d226  52                   push edx
// 0049d227  6834080000           push 0x834
// 0049d22c  50                   push eax
// 0049d22d  ffd1                 call ecx
// 0049d22f  83c410               add esp, 0x10
// 0049d232  c20c00               ret 0xc
// 0049d235  8b542408             mov edx, dword ptr [esp + 8]
// 0049d239  8b442404             mov eax, dword ptr [esp + 4]
// 0049d23d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d240  52                   push edx
// 0049d241  50                   push eax
// 0049d242  6834080000           push 0x834
// 0049d247  51                   push ecx
// 0049d248  ff15043cb200         call dword ptr [0xb23c04]
// 0049d24e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCShow@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
