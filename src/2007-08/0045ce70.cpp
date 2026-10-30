// roc 2007-08 0045ce70  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ce70
//
// 0045ce70  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045ce75  741e                 je 0x45ce95
// 0045ce77  8b442408             mov eax, dword ptr [esp + 8]
// 0045ce7b  8b542404             mov edx, dword ptr [esp + 4]
// 0045ce7f  50                   push eax
// 0045ce80  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045ce83  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045ce86  52                   push edx
// 0045ce87  6898080000           push 0x898
// 0045ce8c  50                   push eax
// 0045ce8d  ffd1                 call ecx
// 0045ce8f  83c410               add esp, 0x10
// 0045ce92  c20c00               ret 0xc
// 0045ce95  8b542408             mov edx, dword ptr [esp + 8]
// 0045ce99  8b442404             mov eax, dword ptr [esp + 4]
// 0045ce9d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045cea0  52                   push edx
// 0045cea1  50                   push eax
// 0045cea2  6898080000           push 0x898
// 0045cea7  51                   push ecx
// 0045cea8  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045ceae  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?CallTipShow@CScintillaCtrl@@QAEXJPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
