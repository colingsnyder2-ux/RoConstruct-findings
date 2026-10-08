// roc 2009-06 00460f80  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00460f80
//
// 00460f80  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460f85  741e                 je 0x460fa5
// 00460f87  8b442408             mov eax, dword ptr [esp + 8]
// 00460f8b  8b542404             mov edx, dword ptr [esp + 4]
// 00460f8f  50                   push eax
// 00460f90  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460f93  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460f96  52                   push edx
// 00460f97  68f8070000           push 0x7f8
// 00460f9c  50                   push eax
// 00460f9d  ffd1                 call ecx
// 00460f9f  83c410               add esp, 0x10
// 00460fa2  c20c00               ret 0xc
// 00460fa5  8b542408             mov edx, dword ptr [esp + 8]
// 00460fa9  8b442404             mov eax, dword ptr [esp + 4]
// 00460fad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460fb0  52                   push edx
// 00460fb1  50                   push eax
// 00460fb2  68f8070000           push 0x7f8
// 00460fb7  51                   push ecx
// 00460fb8  ff1590ee8900         call dword ptr [0x89ee90]
// 00460fbe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDefine@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
