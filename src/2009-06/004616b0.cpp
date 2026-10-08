// roc 2009-06 004616b0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004616b0
//
// 004616b0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 004616b5  741e                 je 0x4616d5
// 004616b7  8b442408             mov eax, dword ptr [esp + 8]
// 004616bb  8b542404             mov edx, dword ptr [esp + 4]
// 004616bf  50                   push eax
// 004616c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 004616c3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 004616c6  52                   push edx
// 004616c7  6867080000           push 0x867
// 004616cc  50                   push eax
// 004616cd  ffd1                 call ecx
// 004616cf  83c410               add esp, 0x10
// 004616d2  c20c00               ret 0xc
// 004616d5  8b542408             mov edx, dword ptr [esp + 8]
// 004616d9  8b442404             mov eax, dword ptr [esp + 4]
// 004616dd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004616e0  52                   push edx
// 004616e1  50                   push eax
// 004616e2  6867080000           push 0x867
// 004616e7  51                   push ecx
// 004616e8  ff1590ee8900         call dword ptr [0x89ee90]
// 004616ee  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?FormatRange@CScintillaCtrl@@QAEJHPAURangeToFormat@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
