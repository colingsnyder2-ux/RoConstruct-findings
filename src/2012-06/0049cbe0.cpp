// roc 2012-06 0049cbe0  unit: Scintilla::CScintillaCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049cbe0
//
// 0049cbe0  837c240800           cmp dword ptr [esp + 8], 0
// 0049cbe5  6a00                 push 0
// 0049cbe7  7419                 je 0x49cc02
// 0049cbe9  8b442408             mov eax, dword ptr [esp + 8]
// 0049cbed  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0049cbf0  50                   push eax
// 0049cbf1  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0049cbf4  68e9070000           push 0x7e9
// 0049cbf9  52                   push edx
// 0049cbfa  ffd0                 call eax
// 0049cbfc  83c410               add esp, 0x10
// 0049cbff  c20800               ret 8
// 0049cc02  8b542408             mov edx, dword ptr [esp + 8]
// 0049cc06  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0049cc09  52                   push edx
// 0049cc0a  68e9070000           push 0x7e9
// 0049cc0f  50                   push eax
// 0049cc10  ff15043cb200         call dword ptr [0xb23c04]
// 0049cc16  c20800               ret 8
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?GotoPos@CScintillaCtrl@@QAEXJH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
