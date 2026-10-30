// roc 2012-06 0049d8f0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d8f0
//
// 0049d8f0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d8f5  741e                 je 0x49d915
// 0049d8f7  8b442408             mov eax, dword ptr [esp + 8]
// 0049d8fb  8b542404             mov edx, dword ptr [esp + 4]
// 0049d8ff  50                   push eax
// 0049d900  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d903  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d906  52                   push edx
// 0049d907  6895080000           push 0x895
// 0049d90c  50                   push eax
// 0049d90d  ffd1                 call ecx
// 0049d90f  83c410               add esp, 0x10
// 0049d912  c20c00               ret 0xc
// 0049d915  8b542408             mov edx, dword ptr [esp + 8]
// 0049d919  8b442404             mov eax, dword ptr [esp + 4]
// 0049d91d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d920  52                   push edx
// 0049d921  50                   push eax
// 0049d922  6895080000           push 0x895
// 0049d927  51                   push ecx
// 0049d928  ff15043cb200         call dword ptr [0xb23c04]
// 0049d92e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SearchInTarget@CScintillaCtrl@@QAEHHPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
