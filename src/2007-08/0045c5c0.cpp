// roc 2007-08 0045c5c0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c5c0
//
// 0045c5c0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c5c5  741e                 je 0x45c5e5
// 0045c5c7  8b442408             mov eax, dword ptr [esp + 8]
// 0045c5cb  8b542404             mov edx, dword ptr [esp + 4]
// 0045c5cf  50                   push eax
// 0045c5d0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c5d3  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c5d6  52                   push edx
// 0045c5d7  6804080000           push 0x804
// 0045c5dc  50                   push eax
// 0045c5dd  ffd1                 call ecx
// 0045c5df  83c410               add esp, 0x10
// 0045c5e2  c20c00               ret 0xc
// 0045c5e5  8b542408             mov edx, dword ptr [esp + 8]
// 0045c5e9  8b442404             mov eax, dword ptr [esp + 4]
// 0045c5ed  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c5f0  52                   push edx
// 0045c5f1  50                   push eax
// 0045c5f2  6804080000           push 0x804
// 0045c5f7  51                   push ecx
// 0045c5f8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c5fe  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?StyleSetBack@CScintillaCtrl@@QAEXHKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
