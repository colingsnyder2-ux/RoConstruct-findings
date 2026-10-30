// roc 2012-06 0049d7e0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d7e0
//
// 0049d7e0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d7e5  741e                 je 0x49d805
// 0049d7e7  8b442408             mov eax, dword ptr [esp + 8]
// 0049d7eb  8b542404             mov edx, dword ptr [esp + 4]
// 0049d7ef  50                   push eax
// 0049d7f0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d7f3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d7f6  52                   push edx
// 0049d7f7  6886080000           push 0x886
// 0049d7fc  50                   push eax
// 0049d7fd  ffd1                 call ecx
// 0049d7ff  83c410               add esp, 0x10
// 0049d802  c20c00               ret 0xc
// 0049d805  8b542408             mov edx, dword ptr [esp + 8]
// 0049d809  8b442404             mov eax, dword ptr [esp + 4]
// 0049d80d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d810  52                   push edx
// 0049d811  50                   push eax
// 0049d812  6886080000           push 0x886
// 0049d817  51                   push ecx
// 0049d818  ff15043cb200         call dword ptr [0xb23c04]
// 0049d81e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GetText@CScintillaCtrl@@QAEHHPADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
