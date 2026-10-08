// roc 2008-06 00460660  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00460660
//
// 00460660  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00460665  741e                 je 0x460685
// 00460667  8b442408             mov eax, dword ptr [esp + 8]
// 0046066b  8b542404             mov edx, dword ptr [esp + 4]
// 0046066f  50                   push eax
// 00460670  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00460673  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 00460676  52                   push edx
// 00460677  68c4080000           push 0x8c4
// 0046067c  50                   push eax
// 0046067d  ffd1                 call ecx
// 0046067f  83c410               add esp, 0x10
// 00460682  c20c00               ret 0xc
// 00460685  8b542408             mov edx, dword ptr [esp + 8]
// 00460689  8b442404             mov eax, dword ptr [esp + 4]
// 0046068d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00460690  52                   push edx
// 00460691  50                   push eax
// 00460692  68c4080000           push 0x8c4
// 00460697  51                   push ecx
// 00460698  ff15142e8000         call dword ptr [0x802e14]
// 0046069e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginMaskN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
