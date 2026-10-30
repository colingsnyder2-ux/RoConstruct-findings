// roc 2012-06 0049d390  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d390
//
// 0049d390  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d395  741e                 je 0x49d3b5
// 0049d397  8b442408             mov eax, dword ptr [esp + 8]
// 0049d39b  8b542404             mov edx, dword ptr [esp + 4]
// 0049d39f  50                   push eax
// 0049d3a0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d3a3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d3a6  52                   push edx
// 0049d3a7  6867080000           push 0x867
// 0049d3ac  50                   push eax
// 0049d3ad  ffd1                 call ecx
// 0049d3af  83c410               add esp, 0x10
// 0049d3b2  c20c00               ret 0xc
// 0049d3b5  8b542408             mov edx, dword ptr [esp + 8]
// 0049d3b9  8b442404             mov eax, dword ptr [esp + 4]
// 0049d3bd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d3c0  52                   push edx
// 0049d3c1  50                   push eax
// 0049d3c2  6867080000           push 0x867
// 0049d3c7  51                   push ecx
// 0049d3c8  ff15043cb200         call dword ptr [0xb23c04]
// 0049d3ce  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FormatRange@CScintillaCtrl@@QAEJHPAURangeToFormat@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
