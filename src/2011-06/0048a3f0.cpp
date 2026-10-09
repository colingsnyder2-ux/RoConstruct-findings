// roc 2011-06 0048a3f0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048a3f0
//
// 0048a3f0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048a3f5  741e                 je 0x48a415
// 0048a3f7  8b442408             mov eax, dword ptr [esp + 8]
// 0048a3fb  8b542404             mov edx, dword ptr [esp + 4]
// 0048a3ff  50                   push eax
// 0048a400  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048a403  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048a406  52                   push edx
// 0048a407  6805080000           push 0x805
// 0048a40c  50                   push eax
// 0048a40d  ffd1                 call ecx
// 0048a40f  83c410               add esp, 0x10
// 0048a412  c20c00               ret 0xc
// 0048a415  8b542408             mov edx, dword ptr [esp + 8]
// 0048a419  8b442404             mov eax, dword ptr [esp + 4]
// 0048a41d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048a420  52                   push edx
// 0048a421  50                   push eax
// 0048a422  6805080000           push 0x805
// 0048a427  51                   push ecx
// 0048a428  ff15c019a400         call dword ptr [0xa419c0]
// 0048a42e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBold@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
