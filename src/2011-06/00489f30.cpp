// roc 2011-06 00489f30  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00489f30
//
// 00489f30  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00489f35  741e                 je 0x489f55
// 00489f37  8b442408             mov eax, dword ptr [esp + 8]
// 00489f3b  8b542404             mov edx, dword ptr [esp + 4]
// 00489f3f  50                   push eax
// 00489f40  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00489f43  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00489f46  52                   push edx
// 00489f47  68f8070000           push 0x7f8
// 00489f4c  50                   push eax
// 00489f4d  ffd1                 call ecx
// 00489f4f  83c410               add esp, 0x10
// 00489f52  c20c00               ret 0xc
// 00489f55  8b542408             mov edx, dword ptr [esp + 8]
// 00489f59  8b442404             mov eax, dword ptr [esp + 4]
// 00489f5d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00489f60  52                   push edx
// 00489f61  50                   push eax
// 00489f62  68f8070000           push 0x7f8
// 00489f67  51                   push ecx
// 00489f68  ff15c019a400         call dword ptr [0xa419c0]
// 00489f6e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDefine@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
