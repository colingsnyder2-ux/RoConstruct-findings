// roc 2009-12 00469f90  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469f90
//
// 00469f90  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469f95  741e                 je 0x469fb5
// 00469f97  8b442408             mov eax, dword ptr [esp + 8]
// 00469f9b  8b542404             mov edx, dword ptr [esp + 4]
// 00469f9f  50                   push eax
// 00469fa0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469fa3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469fa6  52                   push edx
// 00469fa7  6804080000           push 0x804
// 00469fac  50                   push eax
// 00469fad  ffd1                 call ecx
// 00469faf  83c410               add esp, 0x10
// 00469fb2  c20c00               ret 0xc
// 00469fb5  8b542408             mov edx, dword ptr [esp + 8]
// 00469fb9  8b442404             mov eax, dword ptr [esp + 4]
// 00469fbd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469fc0  52                   push edx
// 00469fc1  50                   push eax
// 00469fc2  6804080000           push 0x804
// 00469fc7  51                   push ecx
// 00469fc8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469fce  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
