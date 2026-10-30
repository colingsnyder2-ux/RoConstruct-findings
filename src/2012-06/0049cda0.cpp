// roc 2012-06 0049cda0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cda0
//
// 0049cda0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049cda5  741e                 je 0x49cdc5
// 0049cda7  8b442408             mov eax, dword ptr [esp + 8]
// 0049cdab  8b542404             mov edx, dword ptr [esp + 4]
// 0049cdaf  50                   push eax
// 0049cdb0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049cdb3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049cdb6  52                   push edx
// 0049cdb7  68fc070000           push 0x7fc
// 0049cdbc  50                   push eax
// 0049cdbd  ffd1                 call ecx
// 0049cdbf  83c410               add esp, 0x10
// 0049cdc2  c20c00               ret 0xc
// 0049cdc5  8b542408             mov edx, dword ptr [esp + 8]
// 0049cdc9  8b442404             mov eax, dword ptr [esp + 4]
// 0049cdcd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049cdd0  52                   push edx
// 0049cdd1  50                   push eax
// 0049cdd2  68fc070000           push 0x7fc
// 0049cdd7  51                   push ecx
// 0049cdd8  ff15043cb200         call dword ptr [0xb23c04]
// 0049cdde  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?MarkerDelete@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
