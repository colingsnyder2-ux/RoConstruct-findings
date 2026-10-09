// roc 2012-06 0049d080  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d080
//
// 0049d080  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d085  741e                 je 0x49d0a5
// 0049d087  8b442408             mov eax, dword ptr [esp + 8]
// 0049d08b  8b542404             mov edx, dword ptr [esp + 4]
// 0049d08f  50                   push eax
// 0049d090  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d093  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d096  52                   push edx
// 0049d097  6803080000           push 0x803
// 0049d09c  50                   push eax
// 0049d09d  ffd1                 call ecx
// 0049d09f  83c410               add esp, 0x10
// 0049d0a2  c20c00               ret 0xc
// 0049d0a5  8b542408             mov edx, dword ptr [esp + 8]
// 0049d0a9  8b442404             mov eax, dword ptr [esp + 4]
// 0049d0ad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d0b0  52                   push edx
// 0049d0b1  50                   push eax
// 0049d0b2  6803080000           push 0x803
// 0049d0b7  51                   push ecx
// 0049d0b8  ff15043cb200         call dword ptr [0xb23c04]
// 0049d0be  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
