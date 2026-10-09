// roc 2012-06 0049d170  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d170
//
// 0049d170  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d175  741e                 je 0x49d195
// 0049d177  8b442408             mov eax, dword ptr [esp + 8]
// 0049d17b  8b542404             mov edx, dword ptr [esp + 4]
// 0049d17f  50                   push eax
// 0049d180  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d183  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d186  52                   push edx
// 0049d187  6807080000           push 0x807
// 0049d18c  50                   push eax
// 0049d18d  ffd1                 call ecx
// 0049d18f  83c410               add esp, 0x10
// 0049d192  c20c00               ret 0xc
// 0049d195  8b542408             mov edx, dword ptr [esp + 8]
// 0049d199  8b442404             mov eax, dword ptr [esp + 4]
// 0049d19d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d1a0  52                   push edx
// 0049d1a1  50                   push eax
// 0049d1a2  6807080000           push 0x807
// 0049d1a7  51                   push ecx
// 0049d1a8  ff15043cb200         call dword ptr [0xb23c04]
// 0049d1ae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetSize@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
