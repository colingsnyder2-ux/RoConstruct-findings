// roc 2008-06 00460e90  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460e90
//
// 00460e90  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460e95  741e                 je 0x460eb5
// 00460e97  8b442408             mov eax, dword ptr [esp + 8]
// 00460e9b  8b542404             mov edx, dword ptr [esp + 4]
// 00460e9f  50                   push eax
// 00460ea0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460ea3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460ea6  52                   push edx
// 00460ea7  6886080000           push 0x886
// 00460eac  50                   push eax
// 00460ead  ffd1                 call ecx
// 00460eaf  83c410               add esp, 0x10
// 00460eb2  c20c00               ret 0xc
// 00460eb5  8b542408             mov edx, dword ptr [esp + 8]
// 00460eb9  8b442404             mov eax, dword ptr [esp + 4]
// 00460ebd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460ec0  52                   push edx
// 00460ec1  50                   push eax
// 00460ec2  6886080000           push 0x886
// 00460ec7  51                   push ecx
// 00460ec8  ff15142e8000         call dword ptr [0x802e14]
// 00460ece  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetText@CScintillaCtrl@@QAEHHPADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
