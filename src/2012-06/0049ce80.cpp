// roc 2012-06 0049ce80  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049ce80
//
// 0049ce80  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049ce85  741e                 je 0x49cea5
// 0049ce87  8b442408             mov eax, dword ptr [esp + 8]
// 0049ce8b  8b542404             mov edx, dword ptr [esp + 4]
// 0049ce8f  50                   push eax
// 0049ce90  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049ce93  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049ce96  52                   push edx
// 0049ce97  6800080000           push 0x800
// 0049ce9c  50                   push eax
// 0049ce9d  ffd1                 call ecx
// 0049ce9f  83c410               add esp, 0x10
// 0049cea2  c20c00               ret 0xc
// 0049cea5  8b542408             mov edx, dword ptr [esp + 8]
// 0049cea9  8b442404             mov eax, dword ptr [esp + 4]
// 0049cead  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049ceb0  52                   push edx
// 0049ceb1  50                   push eax
// 0049ceb2  6800080000           push 0x800
// 0049ceb7  51                   push ecx
// 0049ceb8  ff15043cb200         call dword ptr [0xb23c04]
// 0049cebe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerPrevious@CScintillaCtrl@@QAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
