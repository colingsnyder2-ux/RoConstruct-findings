// roc 2011-06 0048abc0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048abc0
//
// 0048abc0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0048abc5  741e                 je 0x48abe5
// 0048abc7  8b442408             mov eax, dword ptr [esp + 8]
// 0048abcb  8b542404             mov edx, dword ptr [esp + 4]
// 0048abcf  50                   push eax
// 0048abd0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0048abd3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0048abd6  52                   push edx
// 0048abd7  6895080000           push 0x895
// 0048abdc  50                   push eax
// 0048abdd  ffd1                 call ecx
// 0048abdf  83c410               add esp, 0x10
// 0048abe2  c20c00               ret 0xc
// 0048abe5  8b542408             mov edx, dword ptr [esp + 8]
// 0048abe9  8b442404             mov eax, dword ptr [esp + 4]
// 0048abed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0048abf0  52                   push edx
// 0048abf1  50                   push eax
// 0048abf2  6895080000           push 0x895
// 0048abf7  51                   push ecx
// 0048abf8  ff15c019a400         call dword ptr [0xa419c0]
// 0048abfe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SearchInTarget@CScintillaCtrl@@QAEHHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
