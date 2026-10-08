// roc 2007-08 0045cde0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045cde0
//
// 0045cde0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045cde5  741e                 je 0x45ce05
// 0045cde7  8b442408             mov eax, dword ptr [esp + 8]
// 0045cdeb  8b542404             mov edx, dword ptr [esp + 4]
// 0045cdef  50                   push eax
// 0045cdf0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045cdf3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045cdf6  52                   push edx
// 0045cdf7  6895080000           push 0x895
// 0045cdfc  50                   push eax
// 0045cdfd  ffd1                 call ecx
// 0045cdff  83c410               add esp, 0x10
// 0045ce02  c20c00               ret 0xc
// 0045ce05  8b542408             mov edx, dword ptr [esp + 8]
// 0045ce09  8b442404             mov eax, dword ptr [esp + 4]
// 0045ce0d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045ce10  52                   push edx
// 0045ce11  50                   push eax
// 0045ce12  6895080000           push 0x895
// 0045ce17  51                   push ecx
// 0045ce18  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045ce1e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SearchInTarget@CScintillaCtrl@@QAEHHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
