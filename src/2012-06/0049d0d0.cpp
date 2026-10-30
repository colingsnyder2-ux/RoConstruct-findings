// roc 2012-06 0049d0d0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049d0d0
//
// 0049d0d0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0049d0d5  741e                 je 0x49d0f5
// 0049d0d7  8b442408             mov eax, dword ptr [esp + 8]
// 0049d0db  8b542404             mov edx, dword ptr [esp + 4]
// 0049d0df  50                   push eax
// 0049d0e0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0049d0e3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0049d0e6  52                   push edx
// 0049d0e7  6804080000           push 0x804
// 0049d0ec  50                   push eax
// 0049d0ed  ffd1                 call ecx
// 0049d0ef  83c410               add esp, 0x10
// 0049d0f2  c20c00               ret 0xc
// 0049d0f5  8b542408             mov edx, dword ptr [esp + 8]
// 0049d0f9  8b442404             mov eax, dword ptr [esp + 4]
// 0049d0fd  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049d100  52                   push edx
// 0049d101  50                   push eax
// 0049d102  6804080000           push 0x804
// 0049d107  51                   push ecx
// 0049d108  ff15043cb200         call dword ptr [0xb23c04]
// 0049d10e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
