// roc 2012-06 0049cc60  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cc60
//
// 0049cc60  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049cc65  741e                 je 0x49cc85
// 0049cc67  8b442408             mov eax, dword ptr [esp + 8]
// 0049cc6b  8b542404             mov edx, dword ptr [esp + 4]
// 0049cc6f  50                   push eax
// 0049cc70  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049cc73  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049cc76  52                   push edx
// 0049cc77  68f8070000           push 0x7f8
// 0049cc7c  50                   push eax
// 0049cc7d  ffd1                 call ecx
// 0049cc7f  83c410               add esp, 0x10
// 0049cc82  c20c00               ret 0xc
// 0049cc85  8b542408             mov edx, dword ptr [esp + 8]
// 0049cc89  8b442404             mov eax, dword ptr [esp + 4]
// 0049cc8d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049cc90  52                   push edx
// 0049cc91  50                   push eax
// 0049cc92  68f8070000           push 0x7f8
// 0049cc97  51                   push ecx
// 0049cc98  ff15043cb200         call dword ptr [0xb23c04]
// 0049cc9e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDefine@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
