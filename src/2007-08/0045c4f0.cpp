// roc 2007-08 0045c4f0  unit: Scintilla::CScintillaCtrl  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c4f0
//
// 0045c4f0  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0045c4f5  741e                 je 0x45c515
// 0045c4f7  8b442408             mov eax, dword ptr [esp + 8]
// 0045c4fb  8b542404             mov edx, dword ptr [esp + 4]
// 0045c4ff  50                   push eax
// 0045c500  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c503  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c506  52                   push edx
// 0045c507  68c6080000           push 0x8c6
// 0045c50c  50                   push eax
// 0045c50d  ffd1                 call ecx
// 0045c50f  83c410               add esp, 0x10
// 0045c512  c20c00               ret 0xc
// 0045c515  8b542408             mov edx, dword ptr [esp + 8]
// 0045c519  8b442404             mov eax, dword ptr [esp + 4]
// 0045c51d  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0045c520  52                   push edx
// 0045c521  50                   push eax
// 0045c522  68c6080000           push 0x8c6
// 0045c527  51                   push ecx
// 0045c528  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c52e  c20c00               ret 0xc
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetMarginSensitiveN@CScintillaCtrl@@QAEXHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
