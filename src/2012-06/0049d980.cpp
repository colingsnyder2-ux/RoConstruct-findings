// roc 2012-06 0049d980  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d980
//
// 0049d980  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d985  741e                 je 0x49d9a5
// 0049d987  8b442408             mov eax, dword ptr [esp + 8]
// 0049d98b  8b542404             mov edx, dword ptr [esp + 4]
// 0049d98f  50                   push eax
// 0049d990  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d993  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d996  52                   push edx
// 0049d997  6898080000           push 0x898
// 0049d99c  50                   push eax
// 0049d99d  ffd1                 call ecx
// 0049d99f  83c410               add esp, 0x10
// 0049d9a2  c20c00               ret 0xc
// 0049d9a5  8b542408             mov edx, dword ptr [esp + 8]
// 0049d9a9  8b442404             mov eax, dword ptr [esp + 4]
// 0049d9ad  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d9b0  52                   push edx
// 0049d9b1  50                   push eax
// 0049d9b2  6898080000           push 0x898
// 0049d9b7  51                   push ecx
// 0049d9b8  ff15043cb200         call dword ptr [0xb23c04]
// 0049d9be  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipShow@CScintillaCtrl@@QAEXJPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
