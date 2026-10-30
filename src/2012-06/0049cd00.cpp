// roc 2012-06 0049cd00  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cd00
//
// 0049cd00  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049cd05  741e                 je 0x49cd25
// 0049cd07  8b442408             mov eax, dword ptr [esp + 8]
// 0049cd0b  8b542404             mov edx, dword ptr [esp + 4]
// 0049cd0f  50                   push eax
// 0049cd10  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049cd13  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049cd16  52                   push edx
// 0049cd17  68fa070000           push 0x7fa
// 0049cd1c  50                   push eax
// 0049cd1d  ffd1                 call ecx
// 0049cd1f  83c410               add esp, 0x10
// 0049cd22  c20c00               ret 0xc
// 0049cd25  8b542408             mov edx, dword ptr [esp + 8]
// 0049cd29  8b442404             mov eax, dword ptr [esp + 4]
// 0049cd2d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049cd30  52                   push edx
// 0049cd31  50                   push eax
// 0049cd32  68fa070000           push 0x7fa
// 0049cd37  51                   push ecx
// 0049cd38  ff15043cb200         call dword ptr [0xb23c04]
// 0049cd3e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
