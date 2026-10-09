// roc 2012-06 0049cf20  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cf20
//
// 0049cf20  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049cf25  741e                 je 0x49cf45
// 0049cf27  8b442408             mov eax, dword ptr [esp + 8]
// 0049cf2b  8b542404             mov edx, dword ptr [esp + 4]
// 0049cf2f  50                   push eax
// 0049cf30  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049cf33  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049cf36  52                   push edx
// 0049cf37  68c2080000           push 0x8c2
// 0049cf3c  50                   push eax
// 0049cf3d  ffd1                 call ecx
// 0049cf3f  83c410               add esp, 0x10
// 0049cf42  c20c00               ret 0xc
// 0049cf45  8b542408             mov edx, dword ptr [esp + 8]
// 0049cf49  8b442404             mov eax, dword ptr [esp + 4]
// 0049cf4d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049cf50  52                   push edx
// 0049cf51  50                   push eax
// 0049cf52  68c2080000           push 0x8c2
// 0049cf57  51                   push ecx
// 0049cf58  ff15043cb200         call dword ptr [0xb23c04]
// 0049cf5e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginWidthN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
