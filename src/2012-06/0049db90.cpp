// roc 2012-06 0049db90  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049db90
//
// 0049db90  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049db95  741e                 je 0x49dbb5
// 0049db97  8b442408             mov eax, dword ptr [esp + 8]
// 0049db9b  8b542404             mov edx, dword ptr [esp + 4]
// 0049db9f  50                   push eax
// 0049dba0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049dba3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049dba6  52                   push edx
// 0049dba7  68a40f0000           push 0xfa4
// 0049dbac  50                   push eax
// 0049dbad  ffd1                 call ecx
// 0049dbaf  83c410               add esp, 0x10
// 0049dbb2  c20c00               ret 0xc
// 0049dbb5  8b542408             mov edx, dword ptr [esp + 8]
// 0049dbb9  8b442404             mov eax, dword ptr [esp + 4]
// 0049dbbd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049dbc0  52                   push edx
// 0049dbc1  50                   push eax
// 0049dbc2  68a40f0000           push 0xfa4
// 0049dbc7  51                   push ecx
// 0049dbc8  ff15043cb200         call dword ptr [0xb23c04]
// 0049dbce  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetProperty@CScintillaCtrl@@QAEXPBD0H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
