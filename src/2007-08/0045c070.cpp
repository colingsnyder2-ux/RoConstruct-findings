// roc 2007-08 0045c070  unit: Scintilla::CScintillaCtrl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045c070
//
// 0045c070  837c240400           cmp dword ptr [esp + 4], 0
// 0045c075  6a00                 push 0
// 0045c077  6a00                 push 0
// 0045c079  68de070000           push 0x7de
// 0045c07e  740f                 je 0x45c08f
// 0045c080  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045c083  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045c086  50                   push eax
// 0045c087  ffd1                 call ecx
// 0045c089  83c410               add esp, 0x10
// 0045c08c  c20400               ret 4
// 0045c08f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045c092  52                   push edx
// 0045c093  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0045c099  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?SetSavePoint@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
