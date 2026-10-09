// roc 2009-12 00469e70  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00469e70
//
// 00469e70  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00469e75  741e                 je 0x469e95
// 00469e77  8b442408             mov eax, dword ptr [esp + 8]
// 00469e7b  8b542404             mov edx, dword ptr [esp + 4]
// 00469e7f  50                   push eax
// 00469e80  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00469e83  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00469e86  52                   push edx
// 00469e87  68c4080000           push 0x8c4
// 00469e8c  50                   push eax
// 00469e8d  ffd1                 call ecx
// 00469e8f  83c410               add esp, 0x10
// 00469e92  c20c00               ret 0xc
// 00469e95  8b542408             mov edx, dword ptr [esp + 8]
// 00469e99  8b442404             mov eax, dword ptr [esp + 4]
// 00469e9d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00469ea0  52                   push edx
// 00469ea1  50                   push eax
// 00469ea2  68c4080000           push 0x8c4
// 00469ea7  51                   push ecx
// 00469ea8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00469eae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginMaskN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
