// roc 2007-03 0045a300  unit: seg_00450000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045a300
//
// 0045a300  837c240400           cmp dword ptr [esp + 4], 0
// 0045a305  6a00                 push 0
// 0045a307  6a00                 push 0
// 0045a309  687f080000           push 0x87f
// 0045a30e  740f                 je 0x45a31f
// 0045a310  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0045a313  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0045a316  50                   push eax
// 0045a317  ffd1                 call ecx
// 0045a319  83c410               add esp, 0x10
// 0045a31c  c20400               ret 4
// 0045a31f  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0045a322  52                   push edx
// 0045a323  ff1550ee7700         call dword ptr [0x77ee50]
// 0045a329  c20400               ret 4
// library scintilla-mfc-1.20/ScintillaCtrl.cpp (function ?EmptyUndoBuffer@CScintillaCtrl@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaCtrl.cpp
