// roc 2007-03 00459e90  unit: seg_00450000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00459e90
//
// 00459e90  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00459e95  741e                 je 0x459eb5
// 00459e97  8b442408             mov eax, dword ptr [esp + 8]
// 00459e9b  8b542404             mov edx, dword ptr [esp + 4]
// 00459e9f  50                   push eax
// 00459ea0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00459ea3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00459ea6  52                   push edx
// 00459ea7  6834080000           push 0x834
// 00459eac  50                   push eax
// 00459ead  ffd1                 call ecx
// 00459eaf  83c410               add esp, 0x10
// 00459eb2  c20c00               ret 0xc
// 00459eb5  8b542408             mov edx, dword ptr [esp + 8]
// 00459eb9  8b442404             mov eax, dword ptr [esp + 4]
// 00459ebd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00459ec0  52                   push edx
// 00459ec1  50                   push eax
// 00459ec2  6834080000           push 0x834
// 00459ec7  51                   push ecx
// 00459ec8  ff1550ee7700         call dword ptr [0x77ee50]
// 00459ece  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?AutoCShow@CScintillaCtrl@@QAEXHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
