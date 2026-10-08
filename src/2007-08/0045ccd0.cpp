// roc 2007-08 0045ccd0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ccd0
//
// 0045ccd0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045ccd5  741e                 je 0x45ccf5
// 0045ccd7  8b442408             mov eax, dword ptr [esp + 8]
// 0045ccdb  8b542404             mov edx, dword ptr [esp + 4]
// 0045ccdf  50                   push eax
// 0045cce0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045cce3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045cce6  52                   push edx
// 0045cce7  6886080000           push 0x886
// 0045ccec  50                   push eax
// 0045cced  ffd1                 call ecx
// 0045ccef  83c410               add esp, 0x10
// 0045ccf2  c20c00               ret 0xc
// 0045ccf5  8b542408             mov edx, dword ptr [esp + 8]
// 0045ccf9  8b442404             mov eax, dword ptr [esp + 4]
// 0045ccfd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045cd00  52                   push edx
// 0045cd01  50                   push eax
// 0045cd02  6886080000           push 0x886
// 0045cd07  51                   push ecx
// 0045cd08  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045cd0e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetText@CScintillaCtrl@@QAEHHPADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
