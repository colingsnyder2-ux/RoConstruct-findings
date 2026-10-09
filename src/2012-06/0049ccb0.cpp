// roc 2012-06 0049ccb0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049ccb0
//
// 0049ccb0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049ccb5  741e                 je 0x49ccd5
// 0049ccb7  8b442408             mov eax, dword ptr [esp + 8]
// 0049ccbb  8b542404             mov edx, dword ptr [esp + 4]
// 0049ccbf  50                   push eax
// 0049ccc0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049ccc3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049ccc6  52                   push edx
// 0049ccc7  68f9070000           push 0x7f9
// 0049cccc  50                   push eax
// 0049cccd  ffd1                 call ecx
// 0049cccf  83c410               add esp, 0x10
// 0049ccd2  c20c00               ret 0xc
// 0049ccd5  8b542408             mov edx, dword ptr [esp + 8]
// 0049ccd9  8b442404             mov eax, dword ptr [esp + 4]
// 0049ccdd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049cce0  52                   push edx
// 0049cce1  50                   push eax
// 0049cce2  68f9070000           push 0x7f9
// 0049cce7  51                   push ecx
// 0049cce8  ff15043cb200         call dword ptr [0xb23c04]
// 0049ccee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerSetFore@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
