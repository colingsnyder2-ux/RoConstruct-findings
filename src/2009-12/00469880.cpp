// roc 2009-12 00469880  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469880
//
// 00469880  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469885  741e                 je 0x4698a5
// 00469887  8b442408             mov eax, dword ptr [esp + 8]
// 0046988b  8b542404             mov edx, dword ptr [esp + 4]
// 0046988f  50                   push eax
// 00469890  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469893  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469896  52                   push edx
// 00469897  68d1070000           push 0x7d1
// 0046989c  50                   push eax
// 0046989d  ffd1                 call ecx
// 0046989f  83c410               add esp, 0x10
// 004698a2  c20c00               ret 0xc
// 004698a5  8b542408             mov edx, dword ptr [esp + 8]
// 004698a9  8b442404             mov eax, dword ptr [esp + 4]
// 004698ad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004698b0  52                   push edx
// 004698b1  50                   push eax
// 004698b2  68d1070000           push 0x7d1
// 004698b7  51                   push ecx
// 004698b8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 004698be  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AddText@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
